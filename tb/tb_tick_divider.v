`timescale 1ns/1ps
module tb_tick_divider;
  reg  clk   = 0;
  reg  reset = 1;
  wire tick;

  // 50 MHz clock
  always #10 clk = ~clk;

  // instantiate
  tick_divider #(.CLK_FREQ(50_000_000), .TICKS_PER_SEC(10)) td (
    .clk       (clk),
    .reset     (reset),
    .game_tick (tick)
  );

  initial begin
    $dumpfile("tick.vcd");
    $dumpvars(0, tick_divider_tb);

    #50 reset = 0;     // release reset after 1 µs
    #5_000_000 $finish; // run 5 ms => 50 pulses at 10 Hz
  end

  always @(posedge tick) begin
    $display("tick at time %t", $time);
  end

endmodule
