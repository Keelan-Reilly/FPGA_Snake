module snake_head #(
  parameter X_BITS = 6,    // log2(grid_width)
  parameter Y_BITS = 5,    // log2(grid_height)
  parameter GRID_W  = 40,  // e.g. 640px / 16px
  parameter GRID_H  = 30   // e.g. 480px / 16px
)(
  input  wire                clk,
  input  wire                reset,
  input  wire                tick,      // game_tick
  input  wire [1:0]          dir,       // 00=up,01=right,10=down,11=left
  output reg  [X_BITS-1:0]   head_x,
  output reg  [Y_BITS-1:0]   head_y
);

  // on reset, place head in centre
  localparam INIT_X = GRID_W/2;
  localparam INIT_Y = GRID_H/2;

  always @(posedge clk or posedge reset) begin
    if (reset) begin
      head_x <= INIT_X;
      head_y <= INIT_Y;
    end else if (tick) begin
      case (dir)
        2'b00: head_y <= (head_y == 0)      ? (GRID_H-1) : head_y - 1;
        2'b01: head_x <= (head_x == GRID_W-1) ? 0          : head_x + 1;
        2'b10: head_y <= (head_y == GRID_H-1) ? 0          : head_y + 1;
        2'b11: head_x <= (head_x == 0)      ? (GRID_W-1) : head_x - 1;
      endcase
    end
  end

endmodule
