`timescale 1ns/1ps

module tb_snake_body;
  localparam XW=6, YW=5, MAX_LEN=8;

  reg                   clk=0, reset=1;
  reg                   push=0, pop=0;
  reg  [XW+YW-1:0]      data_in;
  wire [XW+YW-1:0]      data_out;
  wire [7:0]            length;

  // DUT
  snake_body #(.XW(XW), .YW(YW), .MAX_LEN(MAX_LEN)) dut (
    .clk, .reset, .push, .pop, .data_in, .data_out, .length
  );

  // Helpers
  always #5 clk = ~clk;  // 100 MHz

  function [XW+YW-1:0] pack(input [XW-1:0] x, input [YW-1:0] y);
    pack = {x,y};
  endfunction

  task do_push(input [XW-1:0] x, input [YW-1:0] y, input bit with_pop);
    @(negedge clk);
      data_in = pack(x,y);
      push    = 1'b1;
      pop     = with_pop;
    @(negedge clk);
      push    = 1'b0;
      pop     = 1'b0;
  endtask

  task do_pop;
    @(negedge clk);
      pop  = 1'b1;
    @(negedge clk);
      pop  = 1'b0;
  endtask

  // hierarchical peek into memory (for ordering checks)
  wire [XW+YW-1:0] m0 = dut.mem[0];
  wire [XW+YW-1:0] m1 = dut.mem[1];
  wire [XW+YW-1:0] m2 = dut.mem[2];
  wire [XW+YW-1:0] m3 = dut.mem[3];

  initial begin
    $dumpfile("sim/tb_snake_body.vcd"); $dumpvars(0, tb_snake_body);

    // Reset
    repeat (3) @(posedge clk);
    reset = 0; @(posedge clk);
    if (length !== 0) $fatal(1, "Length should be 0 after reset");

    // Grow with three pushes: A,B,C  (head at mem[0])
    do_push(6'd10, 5'd1, 0);  // A
    if (length !== 1) $fatal(1, "Len != 1 after first push");
    do_push(6'd11, 5'd1, 0);  // B
    if (length !== 2) $fatal(1, "Len != 2 after second push");
    do_push(6'd12, 5'd1, 0);  // C
    if (length !== 3) $fatal(1, "Len != 3 after third push");

    // Check ordering (C,B,A) at mem[0..2]
    if (m0 !== pack(12,1) || m1 !== pack(11,1) || m2 !== pack(10,1))
      $fatal(1, "Ordering wrong after pushes: m0=%h m1=%h m2=%h", m0, m1, m2);

    // Move without growth: push D with pop=1 (length should stay 3)
    do_push(6'd13, 5'd1, 1);  // D
    if (length !== 3) $fatal(1, "Len changed on push+pop (should stay 3)");
    // Data_out should be the old tail (A)
    if (data_out !== pack(10,1)) $fatal(1, "data_out not old tail on push+pop");

    // Now head order should be D,C,B
    if (m0 !== pack(13,1) || m1 !== pack(12,1) || m2 !== pack(11,1))
      $fatal(1, "Ordering wrong after push+pop");

    // Pop only: should drop B (current tail), length->2
    do_pop();
    if (length !== 2) $fatal(1, "Len != 2 after pop only");
    if (data_out !== pack(11,1)) $fatal(1, "data_out not tail on pop-only");

    // Final head should be D,C in mem[0],mem[1]
    if (m0 !== pack(13,1) || m1 !== pack(12,1))
      $fatal(1, "Ordering wrong after pop-only");

    $display("PASS: snake_body basic push/pop/shift behavior OK");
    $finish;
  end
endmodule
