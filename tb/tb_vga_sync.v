// tb/vga_sync_tb.v
`timescale 1ns/1ps

module tb_vga_sync;
  // Clock & DUT wires
  reg        clk      = 0;
  wire [9:0] hcount, vcount;
  wire       hsync, vsync, video_on;
  wire       box_on;

  // 50 MHz clock
  always #10 clk = ~clk;

  // Device Under Test: VGA sync
  vga_sync dut (
    .clk      (clk),
    .hcount   (hcount),
    .vcount   (vcount),
    .hsync    (hsync),
    .vsync    (vsync),
    .video_on (video_on)
  );

  // Box-drawing logic (16×16 box at 100,100)
  draw_box #(
    .BOX_X    (100),
    .BOX_Y    (100),
    .BOX_SIZE (16)
  ) box_inst (
    .hcount (hcount),
    .vcount (vcount),
    .box_on (box_on)
  );

  // Dump & monitor
  initial begin
    $dumpfile("sim/vga_sync.vcd");
    $dumpvars(2, vga_sync_tb);

    $display("Starting simulation...");
    wait (box_on);
    $display("SUCCESS: box_on asserted at h=%0d, v=%0d, time=%t",
             hcount, vcount, $time);
    $finish;
  end

endmodule
