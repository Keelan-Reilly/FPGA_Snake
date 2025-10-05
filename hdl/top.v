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

  // ----- Pixel clock (25 MHz) from 100 MHz -----
  reg [1:0] div4 = 2'b00;
  always @(posedge clk) div4 <= div4 + 2'd1;
  wire pix_clk = div4[1];     // 100 MHz / 4 = 25 MHz

  // grid dimensions
  localparam CELL_BITS = 4;
  localparam GRID_W    = 640 >> CELL_BITS; // 40
  localparam GRID_H    = 480 >> CELL_BITS; // 30

  // VGA timing 25Mhz
  reg        reset_pix = 1'b0;
  always @(posedge pix_clk) reset_pix <= btnC;

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

  // Game tick at 25MHz to avoid CDC
  wire game_tick;
  tick_divider #(.CLK_FREQ(25_000_000), .TICKS_PER_SEC(TICKS_PER_SEC)) td (
    .clk       (pix_clk),
    .reset     (reset_pix),
    .game_tick (game_tick)
  );

  // Buttons -> dir (synchronized to pix_clk)
  reg [1:0] su = 2'b00, sd = 2'b00, sl = 2'b00, sr = 2'b00;
  always @(posedge pix_clk) begin
    su <= {su[0], btnU};
    sd <= {sd[0], btnD};
    sl <= {sl[0], btnL};
    sr <= {sr[0], btnR};
  end

  wire u = su[1], d = sd[1], l = sl[1], r = sr[1];

  // dir encoding: 00=up, 01=right, 10=down, 11=left (avoid 180° reversal)
  reg [1:0] dir_reg = 2'b01; // start right
  always @(posedge pix_clk or posedge reset_pix) begin
    if (reset_pix) dir_reg <= 2'b01;
    else begin
      if (u && dir_reg != 2'b10) dir_reg <= 2'b00;
      else if (d && dir_reg != 2'b00) dir_reg <= 2'b10;
      else if (l && dir_reg != 2'b01) dir_reg <= 2'b11;
      else if (r && dir_reg != 2'b11) dir_reg <= 2'b01;
    end
  end

  // Cell coords
  wire [5:0] cell_x = hcount[CELL_BITS +: 6];
  wire [4:0] cell_y = vcount[CELL_BITS +: 5];

  // gated tick stops when game_over
  reg  game_over = 1'b0;
  wire gated_tick = game_tick && !game_over;

  // Snake head
  wire [5:0] head_x;
  wire [4:0] head_y;
  snake_head #(
    .X_BITS(6), .Y_BITS(5),
    .GRID_W(GRID_W), .GRID_H(GRID_H)
  ) sh (
    .clk   (pix_clk),
    .reset (reset_pix),
    .tick  (gated_tick),
    .dir   (dir_reg),
    .head_x(head_x),
    .head_y(head_y)
  );

  // head pixel (for drawing only)
  wire head_on = (cell_x == head_x) && (cell_y == head_y);

  // Snake body FIFO
  wire [10:0] head_xy   = {head_x, head_y};
  wire [10:0] tail_xy;
  wire [7:0]  snake_len;
  wire       ate_pos;

  // push/pop wires shared across modules
  wire push_w = gated_tick;
  wire pop_w  = gated_tick && !ate_pos;  // no pop when eating (grow)

  snake_body #(.XW(6), .YW(5), .MAX_LEN(128)) sb (
    .clk     (pix_clk),
    .reset   (reset_pix),
    .push    (push_w),
    .pop     (pop_w),        // don't pop when we eat (grow)
    .data_in (head_xy),
    .data_out(tail_xy),
    .length  (snake_len)
  );

  // ----- Next position (combinational) for collision query -----
  reg [5:0] next_x;
  reg [4:0] next_y;
  always @* begin
    next_x = head_x;
    next_y = head_y;
    case (dir_reg)
      2'b00: next_y = (head_y == 0)          ? (GRID_H-1) : head_y - 1;
      2'b01: next_x = (head_x == GRID_W-1)   ? 0          : head_x + 1;
      2'b10: next_y = (head_y == GRID_H-1)   ? 0          : head_y + 1;
      2'b11: next_x = (head_x == 0)          ? (GRID_W-1) : head_x - 1;
    endcase
  end

  // Apple gen & eat
  wire [5:0] apple_x;
  wire [4:0] apple_y;
  apple_gen #(.XW(6), .YW(5), .GRID_W(GRID_W), .GRID_H(GRID_H)) ag (
    .clk       (pix_clk),
    .reset     (reset_pix),
    .game_tick (game_tick),
    .ate       (ate_pos),         // feed position-based eat
    .apple_x   (apple_x),
    .apple_y   (apple_y)
  );

  // Eat is true when positions match
  assign ate_pos = (head_x == apple_x) && (head_y == apple_y);
  wire apple_on = (cell_x == apple_x) && (cell_y == apple_y);    // draw only

  // ===== Occupancy + collision (synth-friendly) =====
  wire body_on;
  wire self_hit_now;

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
    .self_hit_now(self_hit_now)
  );

  // Latch game over
  always @(posedge pix_clk or posedge reset_pix) begin
    if (reset_pix)         game_over <= 1'b0;
    else if (self_hit_now) game_over <= 1'b1;
  end
  
  // Final video mux w/ game‐over checker
  wire [2:0] over_color = (hcount[4] ^ vcount[4]) ? 3'b100 : 3'b001;
  wire [2:0] rgb_bits = game_over
    ? over_color
    : video_on
      ? ( body_on  ? 3'b100
        : apple_on ? 3'b110
        : head_on  ? 3'b010
        : /*bg*/     3'b001 )
      : 3'b000;

  // ===== Map 3-bit to 12-bit VGA =====
  assign vgaRed   = {4{rgb_bits[2]}};
  assign vgaGreen = {4{rgb_bits[1]}};
  assign vgaBlue  = {4{rgb_bits[0]}};

endmodule
