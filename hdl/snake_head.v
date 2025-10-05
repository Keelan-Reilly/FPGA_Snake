// -----------------------------------------------------------------------------
// Module: snake_head
// Purpose: Handles the position of the snake's head in the Snake FPGA game.
//          Updates the (x, y) coordinates based on the current direction input
//          every game tick, with automatic wrap-around at grid edges.
//          The head starts centred on reset.
// -----------------------------------------------------------------------------

module snake_head #(
  parameter X_BITS = 6,    // Number of bits to represent X position
  parameter Y_BITS = 5,    // Number of bits to represent Y position
  parameter GRID_W  = 40,  // Grid width in cells (e.g. 640px / 16px)
  parameter GRID_H  = 30   // Grid height in cells (e.g. 480px / 16px)
)(
  input  wire                clk,
  input  wire                reset,
  input  wire                tick,      // One pulse per game update (movement timing)
  input  wire [1:0]          dir,       // Direction: 00=up, 01=right, 10=down, 11=left
  output reg  [X_BITS-1:0]   head_x,    // Current X position of head
  output reg  [Y_BITS-1:0]   head_y     // Current Y position of head
);

  // Initialise the head in the centre of the grid after reset
  localparam INIT_X = GRID_W/2;     // Starting X coordinate
  localparam INIT_Y = GRID_H/2;     // Starting Y coordinate

  // Sequential logic: update head position each game tick
  always @(posedge clk or posedge reset) begin
    if (reset) begin
      // Reset: place head at centre
      head_x <= INIT_X;
      head_y <= INIT_Y;
    end else if (tick) begin
      // On each game tick, update head position according to direction
      case (dir)
        2'b00: head_y <= (head_y == 0)      ? (GRID_H-1) : head_y - 1;      // Move up or wrap to bottom
        2'b01: head_x <= (head_x == GRID_W-1) ? 0          : head_x + 1;    // Move right or wrap to left
        2'b10: head_y <= (head_y == GRID_H-1) ? 0          : head_y + 1;    // Move down or wrap to top
        2'b11: head_x <= (head_x == 0)      ? (GRID_W-1) : head_x - 1;      // Move left or wrap to right
      endcase
    end
  end

endmodule
