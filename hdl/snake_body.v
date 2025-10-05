// -----------------------------------------------------------------------------
// Module: snake_body
// Purpose: Implements the body memory and movement logic of the Snake game.
//          Maintains an ordered list of the snake’s body coordinates in a
//          register array. Supports push (add new head) and pop (remove tail)
//          operations to simulate movement and growth. Tracks current length
//          and outputs the tail coordinate when popped.
// -----------------------------------------------------------------------------

module snake_body #(
  parameter XW      = 6,         // Bit width for X coordinate
  parameter YW      = 5,         // Bit width for Y coordinate
  parameter MAX_LEN = 128        // Maximum supported snake length
)(
  input  wire              clk,
  input  wire              reset,
  input  wire              push,        // Insert new head at position 0
  input  wire              pop,         // Remove tail (only when moving, not growing)
  input  wire [XW+YW-1:0]  data_in,     // New head position {x, y}
  output reg  [XW+YW-1:0]  data_out,    // Tail coordinate being popped
  output reg  [7:0]        length,      // Current body length
  output wire              tail_valid  // High when body has at least one segment
);

  localparam W = XW+YW;               // Total width for one coordinate pair
  assign tail_valid = (length != 0);  // Tail valid when body length > 0

  // Memory storage for snake body positions
  // Each memory element stores {x, y} of one segment.
  // mem[0] = head, mem[length-1] = tail
  reg [W-1:0] mem [0:MAX_LEN-1];        // index flipped for convenience in loop

  // Combinational read of current tail value (safe if length > 0)
  wire [W-1:0] tail_val = (length != 0) ? mem[length-1] : {W{1'b0}};

  integer i;  // Loop index for shifting

  always @(posedge clk or posedge reset) begin
    if (reset) begin
      // Reset state: empty body, zero length
      length   <= 8'd0;
      data_out <= {W{1'b0}};
    end else begin
      // Hold current tail output by default
      data_out <= data_out;

      // PUSH operation: add new head element at index 0
      // Shift all other existing segments up by one (mem[i] <= mem[i-1])
      if (push) begin
        for (i = MAX_LEN-1; i > 0; i = i - 1) begin
          if (i <= length) begin
            mem[i] <= mem[i-1];
          end
        end
        mem[0] <= data_in;    // Insert new head at the front
      end

      // POP operation: output tail coordinate (old last segment)
      if (pop && (length != 0)) begin
        data_out <= tail_val;         // Send out current tail value
      end

      // LENGTH update logic
      //  push=1 pop=0 → grow
      //  push=0 pop=1 → shrink
      //  push=pop=0 or 1 → unchanged
      case ({push, pop})
        2'b10: begin
          if (length < MAX_LEN) length <= length + 1'b1; // Grow snake
          else                  length <= length;        // Stay saturated at max
        end
        2'b01: begin
          if (length != 0)      length <= length - 1'b1; // Shrink snake
          else                  length <= 8'd0;
        end
        default: begin
          length <= length;         // move without growth
        end
      endcase
    end
  end
endmodule