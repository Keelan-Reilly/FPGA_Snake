module tick_divider #(
  parameter CLK_FREQ       = 100_000_000,  // input clock in Hz
  parameter TICKS_PER_SEC  = 10           // desired pulses per second
)(
  input  wire clk,
  input  wire reset,
  output reg  game_tick
);

  // Number of clk cycles between pulses:
  localparam DIV = CLK_FREQ / TICKS_PER_SEC;
  reg [31:0] counter = 0;

  always @(posedge clk or posedge reset) begin
    if (reset) begin
      counter   <= 0;
      game_tick <= 0;
    end else if (counter == DIV-1) begin
      counter   <= 0;
      game_tick <= 1;
    end else begin
      counter   <= counter + 1;
      game_tick <= 0;
    end
  end

endmodule
