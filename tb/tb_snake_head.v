`timescale 1ns/1ps

module tb_snake_head;
  // Use a tiny grid so wrap tests are quick
  localparam XBITS=3, YBITS=3, GW=8, GH=8;

  reg                  clk=0, reset=1;
  reg                  tick=0;
  reg  [1:0]           dir=2'b01; // start right
  wire [XBITS-1:0]     head_x;
  wire [YBITS-1:0]     head_y;

  snake_head #(.X_BITS(XBITS), .Y_BITS(YBITS), .GRID_W(GW), .GRID_H(GH)) dut (
    .clk, .reset, .tick, .dir, .head_x, .head_y
  );

  always #5 clk = ~clk; // 100 MHz

  task pulse_tick; begin
    @(negedge clk); tick = 1'b1;
    @(negedge clk); tick = 1'b0;
  end endtask

  function [XBITS-1:0] init_x; init_x = GW/2; endfunction
  function [YBITS-1:0] init_y; init_y = GH/2; endfunction

  integer i;
  integer steps;

  initial begin
    $dumpfile("sim/tb_snake_head.vcd"); $dumpvars(0, tb_snake_head);

    // Release reset
    repeat (3) @(posedge clk);
    reset = 0; @(posedge clk);
    if (head_x !== init_x() || head_y !== init_y())
      $fatal(1, "Bad init pos (%0d,%0d)", head_x, head_y);

    // Move RIGHT to edge then wrap
    dir = 2'b01; @(posedge clk);  // let dir settle for a cycle
    steps = (GW-1) - head_x;      // compute from CURRENT head_x
    repeat (steps) pulse_tick();  // land on GW-1
    if (head_x !== GW-1) $fatal(1, "Expected right edge, got x=%0d", head_x);
    pulse_tick();                 // wrap to 0
    if (head_x !== 0) $fatal(1, "Right wrap failed, x=%0d", head_x);

    // Move LEFT wrap: 0 -> GW-1
    dir = 2'b11; @(posedge clk);
    pulse_tick();
    if (head_x !== GW-1) $fatal(1, "Left wrap failed, x=%0d", head_x);

    // Move DOWN to edge then wrap
    dir = 2'b10; @(posedge clk);
    steps = (GH-1) - head_y;      // compute from CURRENT head_y
    repeat (steps) pulse_tick();  // land on GH-1
    if (head_y !== GH-1) $fatal(1, "Down to edge failed, y=%0d", head_y);
    pulse_tick();                 // wrap to 0
    if (head_y !== 0) $fatal(1, "Down wrap failed, y=%0d", head_y);

    // Move UP wrap: 0 -> GH-1
    dir = 2'b00; @(posedge clk);
    pulse_tick();
    if (head_y !== GH-1) $fatal(1, "Up wrap failed, y=%0d", head_y);

    $display("PASS: snake_head movement & wrap-around OK");
    $finish;
  end
endmodule
