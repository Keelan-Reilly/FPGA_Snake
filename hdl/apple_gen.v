// -----------------------------------------------------------------------------
// Module: apple_gen
// Purpose: Generates pseudo-random (x, y) coordinates for the apple in the
//          Snake FPGA game. Uses a Linear Feedback Shift Register (LFSR)
//          for randomness and updates position only when the snake "eats" an
//          apple. Ensures generated coordinates stay within grid bounds.
// -----------------------------------------------------------------------------

module apple_gen #(
  parameter XW     = 6, // Number of bits used to represent the X coordinate
  parameter YW     = 5, // Number of bits used to represent the Y coordinate
  parameter GRID_W = 40, // Grid width in cells
  parameter GRID_H = 30, // Grid height in cells
  parameter LFSR_W = 16  // Width of the LFSR (number of bits in shift register)
)(
  input  wire           clk,
  input  wire           reset,
  input  wire           game_tick, // One pulse per frame/game update
  input  wire           ate,       // High for one tick when snake eats an apple
  output reg  [XW-1:0]  apple_x,   // Current apple X position
  output reg  [YW-1:0]  apple_y  // Current apple Y position
);

  // 16-bit Linear Feedback Shift Register (LFSR) for pseudo-random generation
  reg  [LFSR_W-1:0] lfsr;

  // Feedback taps for LFSR (XOR of selected bits for maximal-length sequence)
  wire feedback = lfsr[LFSR_W-1] ^ lfsr[LFSR_W-3]
                ^ lfsr[LFSR_W-4] ^ lfsr[LFSR_W-6];

  // Compute next state of the LFSR (shift left and insert feedback at LSB)
  wire [LFSR_W-1:0] lfsr_next = {lfsr[LFSR_W-2:0], feedback};

  // Extract current raw X and Y values from lower bits of LFSR
  wire [XW-1:0] raw_x_cur   = lfsr[XW-1:0];
  wire [YW-1:0] raw_y_cur   = lfsr[XW+YW-1:XW];

  // Extract next raw X and Y values from the next LFSR state
  wire [XW-1:0] raw_x_next  = lfsr_next[XW-1:0];
  wire [YW-1:0] raw_y_next  = lfsr_next[XW+YW-1:XW];

  // Clamp helper functions to ensure coordinates stay inside grid bounds
  function [XW-1:0] clamp_x(input [XW-1:0] x);
    clamp_x = (x < GRID_W) ? x : x - GRID_W;    // Wrap around if exceeds width
  endfunction

  function [YW-1:0] clamp_y(input [YW-1:0] y);
    clamp_y = (y < GRID_H) ? y : y - GRID_H;    // Wrap around if exceeds height
  endfunction

  // Sequential logic: update LFSR and apple position
  always @(posedge clk or posedge reset) begin
    if (reset) begin
      // On reset, seed LFSR with all 1s and pick initial apple position
      lfsr    <= {LFSR_W{1'b1}};
      apple_x <= clamp_x(raw_x_cur);  
      apple_y <= clamp_y(raw_y_cur);
    end else if (game_tick) begin
      // Advance LFSR every game tick to generate a new pseudo-random state
      lfsr <= lfsr_next;               
      if (ate) begin
        // When the snake eats an apple, update position using the next LFSR state
        apple_x <= clamp_x(raw_x_next);
        apple_y <= clamp_y(raw_y_next);
      end
    end
  end
endmodule
