module apple_gen #(
  parameter XW     = 6,
  parameter YW     = 5,
  parameter GRID_W = 40,
  parameter GRID_H = 30,
  parameter LFSR_W = 16
)(
  input  wire           clk,
  input  wire           reset,
  input  wire           game_tick,
  input  wire           ate,
  output reg  [XW-1:0]  apple_x,
  output reg  [YW-1:0]  apple_y
);

  reg  [LFSR_W-1:0] lfsr;
  wire feedback = lfsr[LFSR_W-1] ^ lfsr[LFSR_W-3]
                ^ lfsr[LFSR_W-4] ^ lfsr[LFSR_W-6];

  // Advance preview
  wire [LFSR_W-1:0] lfsr_next = {lfsr[LFSR_W-2:0], feedback};

  // Old (current) and next raw coords
  wire [XW-1:0] raw_x_cur   = lfsr[XW-1:0];
  wire [YW-1:0] raw_y_cur   = lfsr[XW+YW-1:XW];
  wire [XW-1:0] raw_x_next  = lfsr_next[XW-1:0];
  wire [YW-1:0] raw_y_next  = lfsr_next[XW+YW-1:XW];

  // Clamp helper functions (synthesizable ternaries)
  function [XW-1:0] clamp_x(input [XW-1:0] x);
    clamp_x = (x < GRID_W) ? x : x - GRID_W;
  endfunction
  function [YW-1:0] clamp_y(input [YW-1:0] y);
    clamp_y = (y < GRID_H) ? y : y - GRID_H;
  endfunction

  always @(posedge clk or posedge reset) begin
    if (reset) begin
      lfsr    <= {LFSR_W{1'b1}};
      apple_x <= clamp_x(raw_x_cur);   // seed from current state
      apple_y <= clamp_y(raw_y_cur);
    end else if (game_tick) begin
      lfsr <= lfsr_next;               // advance every tick
      if (ate) begin
        // pick from the *next* state so it always changes on eat
        apple_x <= clamp_x(raw_x_next);
        apple_y <= clamp_y(raw_y_next);
      end
    end
  end
endmodule
