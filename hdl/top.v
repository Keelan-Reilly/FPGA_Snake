// -----------------------------------------------------------------------------
// Module: top
// Purpose: Top-level Snake-on-VGA design for an FPGA board (e.g., Basys-3).
//          - Derives a 25 MHz pixel clock from 100 MHz.
//          - Generates 640x480@60Hz VGA timing.
//          - Runs game logic on the pixel clock domain (no CDC).
//          - Handles button input → direction (with 180°-reversal guard).
//          - Instantiates snake_head, snake_body, apple_gen, and snake_map.
//          - Renders head, body, and apple with a simple color mux.
//          - Latches game-over on self-collision.
// -----------------------------------------------------------------------------

module top #(
  parameter TICKS_PER_SEC = 6
)(
  input        clk,
  input        btnC,       // center = reset (active-high)
  input        btnU,
  input        btnD,
  input        btnL,
  input        btnR,
  output       hsync,
  output       vsync,
  output [3:0] vgaRed,
  output [3:0] vgaGreen,
  output [3:0] vgaBlue
);

  // ----- Pixel clock generation: 100 MHz → 25 MHz (÷4) -----------------------
  reg [1:0] div4 = 2'b00;
  always @(posedge clk) div4 <= div4 + 2'd1;
  wire pix_clk = div4[1];     // Use MSB → 25 MHz pixel clock

  // ----- Grid geometry (each cell = 2^CELL_BITS pixels) ----------------------
  localparam CELL_BITS = 4;                 // 16x16 pixel cell size
  localparam GRID_W    = 640 >> CELL_BITS; // 40 cells horizontally
  localparam GRID_H    = 480 >> CELL_BITS; // 30 cells vertically

  // ----- Power-on reset (POR) in pixel domain + button reset -----------------
  reg [15:0] por = 16'd0;         // POR counter (~2.6ms at 25 MHz)
  always @(posedge pix_clk) if (~&por) por <= por + 1'b1;
  wire reset_pix = btnC | ~&por;  // Active-high reset for all game blocks

  // ----- VGA timing generator -------------------------------------------------
  wire [9:0] hcount, vcount;  
  wire       video_on;
  vga_sync vga (
    .clk      (pix_clk),
    .hcount   (hcount),
    .vcount   (vcount),
    .hsync    (hsync),
    .vsync    (vsync),
    .video_on (video_on)
  );

  // ----- Game tick divider (run logic at pix_clk to avoid CDC) ---------------
  wire game_tick;
  tick_divider #(.CLK_FREQ(25_000_000), .TICKS_PER_SEC(TICKS_PER_SEC)) td (
    .clk       (pix_clk),
    .reset     (reset_pix),
    .game_tick (game_tick)
  );

  // ----- Button synchronizers (2FF) into pix_clk domain ----------------------
  reg [1:0] su = 2'b00, sd = 2'b00, sl = 2'b00, sr = 2'b00;
  always @(posedge pix_clk) begin
    su <= {su[0], btnU};
    sd <= {sd[0], btnD};
    sl <= {sl[0], btnL};
    sr <= {sr[0], btnR};
  end

  wire u = su[1], d = sd[1], l = sl[1], r = sr[1];    // Debounced/synced buttons

  // ----- Direction FSM (00=up, 01=right, 10=down, 11=left) -------------------
  // Guard against 180° reversal (e.g., up→down) in a single step.
  reg [1:0] dir_reg = 2'b01;                            // start right
  always @(posedge pix_clk or posedge reset_pix) begin
    if (reset_pix) dir_reg <= 2'b01;
    else begin
      if (u && dir_reg != 2'b10) dir_reg <= 2'b00;      // go up unless currently down
      else if (d && dir_reg != 2'b00) dir_reg <= 2'b10; // go down unless currently up
      else if (l && dir_reg != 2'b01) dir_reg <= 2'b11; // go left unless currently right
      else if (r && dir_reg != 2'b11) dir_reg <= 2'b01; // go right unless currently left
    end
  end

  // ----- Convert pixel counters → cell coordinates ----------------------------
  // Use middle/high bits (divide by 16) to get cell_x/cell_y.
  wire [5:0] cell_x = hcount[CELL_BITS +: 6]; // Bits [4+ : 6] → 0..39
  wire [4:0] cell_y = vcount[CELL_BITS +: 5]; // Bits [4+ : 5] → 0..29

  // ----- Gate the tick when game is over -------------------------------------
  reg  game_over = 1'b0;                        // Latched on collision
  wire gated_tick = game_tick && !game_over;    // Halt movement after game over

  // ----- Snake head position --------------------------------------------------
  wire [5:0] head_x;
  wire [4:0] head_y;

  snake_head #(
    .X_BITS(6), .Y_BITS(5),
    .GRID_W(GRID_W), .GRID_H(GRID_H)
  ) sh (
    .clk   (pix_clk),
    .reset (reset_pix),
    .tick  (gated_tick),          // Move only if not game-over
    .dir   (dir_reg),
    .head_x(head_x),
    .head_y(head_y)
  );

  // For drawing: is current cell the head?
  wire head_on = (cell_x == head_x) && (cell_y == head_y);

  // ----- Snake body storage (FIFO-style shift array) --------------------------
  wire [10:0] head_xy   = {head_x, head_y};   // Pack {X,Y} for body/map
  wire [10:0] tail_xy;                        // Tail popped out (when moving)
  wire [7:0]  snake_len;                      // Current length
  wire       tail_valid;                      // True if length > 0
  wire       ate_pos;                         // True when head hits apple

  // Push every movement; pop during a normal move and not eating
  wire push_w = gated_tick;
  wire pop_w  = gated_tick && !ate_pos;  

  snake_body #(.XW(6), .YW(5), .MAX_LEN(128)) sb (
    .clk     (pix_clk),
    .reset   (reset_pix),
    .push    (push_w),
    .pop     (pop_w),        // No pop when eating → length++
    .data_in (head_xy),      // New head inserted at mem[0]
    .data_out(tail_xy),      // Tail read when popping
    .length  (snake_len),
    .tail_valid(tail_valid)
  );

  // ----- Predict next position (combinational) for collision checks ----------
  reg [5:0] next_x;
  reg [4:0] next_y;
  always @* begin
    next_x = head_x;
    next_y = head_y;
    case (dir_reg)
      2'b00: next_y = (head_y == 0)          ? (GRID_H-1) : head_y - 1; // up
      2'b01: next_x = (head_x == GRID_W-1)   ? 0          : head_x + 1; // right
      2'b10: next_y = (head_y == GRID_H-1)   ? 0          : head_y + 1; // down
      2'b11: next_x = (head_x == 0)          ? (GRID_W-1) : head_x - 1; // left
    endcase
  end

  // ----- Apple generation and eat detection ----------------------------------
  wire [5:0] apple_x;
  wire [4:0] apple_y;
  apple_gen #(.XW(6), .YW(5), .GRID_W(GRID_W), .GRID_H(GRID_H)) ag (
    .clk       (pix_clk),
    .reset     (reset_pix),
    .game_tick (game_tick),
    .ate       (ate_pos),         // Force new apple when eaten
    .apple_x   (apple_x),
    .apple_y   (apple_y)
  );

  // Eat when head and apple overlap; apple_on for drawing
  assign ate_pos = (head_x == apple_x) && (head_y == apple_y);
  wire apple_on = (cell_x == apple_x) && (cell_y == apple_y);   

  // ----- Occupancy map + self-collision detection ----------------------------
  wire body_on;           // For drawing
  wire self_hit_now;      // Collision flag (one tick pulse)

  snake_map #(.XW(6), .YW(5), .GRID_W(GRID_W), .GRID_H(GRID_H)) sm (
    .clk        (pix_clk),
    .reset      (reset_pix),
    .tick       (gated_tick),
    .eat        (ate_pos),
    .head_xy    (head_xy),
    .tail_xy    (tail_xy),
    .q_x        (cell_x),
    .q_y        (cell_y),
    .body_on    (body_on),
    .next_x     (next_x),
    .next_y     (next_y),
    .will_pop   (pop_w),
    .tail_valid (tail_valid),
    .self_hit_now(self_hit_now)
  );

  // Latch game-over once a collision occurs
  always @(posedge pix_clk or posedge reset_pix) begin
    if (reset_pix)         game_over <= 1'b0;
    else if (self_hit_now) game_over <= 1'b1;
  end

  // ----- Simple color mux (3-bit → 12-bit expansion) -------------------------
  // When game_over: checkerboard red/blue pattern; otherwise draw scene.
  wire [2:0] over_color = (hcount[4] ^ vcount[4]) ? 3'b100 : 3'b001;
  wire [2:0] rgb_bits = game_over
    ? over_color
    : video_on
      ? ( body_on  ? 3'b100       // body: red
        : apple_on ? 3'b110       // apple: yellow
        : head_on  ? 3'b010       // head: green
        : /*bg*/     3'b001 )     // background: blue
      : 3'b000;

  // Expand 3:3:3 to 12-bit VGA (replicate each bit x4)
  assign vgaRed   = {4{rgb_bits[2]}};
  assign vgaGreen = {4{rgb_bits[1]}};
  assign vgaBlue  = {4{rgb_bits[0]}};

endmodule
