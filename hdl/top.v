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
  wire [7:0]  snake_len;
  wire       ate_pos;
  snake_body #(.XW(6), .YW(5), .MAX_LEN(128)) sb (
    .clk     (pix_clk),
    .reset   (reset_pix),
    .push    (gated_tick),
    .pop (gated_tick && !ate_pos),        // don't pop when we eat (grow)
    .data_in (head_xy),
    .data_out(),
    .length  (snake_len)
  );

  // Self‐collision detection (sim-only: peeks sb.mem[])
  wire self_hit = 1'b0;         // temporarily disable

  //Latch game over
  always @(posedge pix_clk or posedge reset_pix) begin
    if (reset_pix)
      game_over <= 0;
    else if (self_hit)
      game_over <= 1;
  end


  /* integer i;
  always @(posedge clk or posedge reset) begin
    if (reset) begin
      self_hit <= 0;
    end else if (game_tick && !game_over) begin
      self_hit <= 0;
      for (i = 0; i < snake_len; i = i+1) begin
        if ({head_x,head_y} == sb.mem[i])
          self_hit <= 1;
      end
    end
  end */

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

  // Body‐on temporarily disabled
  /* wire body_on =
       (snake_len>0 && cell_x==sb.mem[0][10:5] && cell_y==sb.mem[0][4:0])
    || (snake_len>1 && cell_x==sb.mem[1][10:5] && cell_y==sb.mem[1][4:0])
    || (snake_len>2 && cell_x==sb.mem[2][10:5] && cell_y==sb.mem[2][4:0])
    || (snake_len>3 && cell_x==sb.mem[3][10:5] && cell_y==sb.mem[3][4:0]); */

  wire body_on = 1'b0;

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
