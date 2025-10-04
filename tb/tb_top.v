`timescale 1ns/1ps
module tb_top;

  // 100 MHz clk & reset button
  reg clk   = 0;
  reg btnC  = 1;   // reset
  reg btnU  = 0, btnD = 0, btnL = 0, btnR = 0;

  wire hsync, vsync;
  wire [3:0] vgaRed, vgaGreen, vgaBlue;


  top #(.TICKS_PER_SEC(1000)) dut (
    .clk  (clk),
    .btnC (btnC),
    .btnU (btnU), .btnD (btnD), .btnL (btnL), .btnR (btnR),
    .hsync(hsync), .vsync(vsync),
    .vgaRed(vgaRed), .vgaGreen(vgaGreen), .vgaBlue(vgaBlue)
  );

  always #5 clk = ~clk; // 100 MHz

  // taps
  wire        game_tick = dut.td.game_tick;
  wire [5:0]  head_x    = dut.sh.head_x;
  wire [4:0]  head_y    = dut.sh.head_y;
  wire [5:0]  apple_x   = dut.ag.apple_x;
  wire [4:0]  apple_y   = dut.ag.apple_y;
  wire [7:0]  snake_len = dut.sb.length;
  wire        video_on  = dut.vga.video_on;
  wire        game_over = dut.game_over;

  // VCD
  initial begin
    $dumpfile("sim/tb_top.vcd");
    $dumpvars(0, tb_top);
    #100 btnC = 0; // release reset
  end

  // helper: one-shot a button for exactly one tick edge
  task press_right; begin btnU=0; btnD=0; btnL=0; btnR=1; @(posedge game_tick); btnR=0; end endtask
  task press_left;  begin btnU=0; btnD=0; btnL=1; btnR=0; @(posedge game_tick); btnL=0; end endtask
  task press_up;    begin btnU=1; btnD=0; btnL=0; btnR=0; @(posedge game_tick); btnU=0; end endtask
  task press_down;  begin btnU=0; btnD=1; btnL=0; btnR=0; @(posedge game_tick); btnD=0; end endtask

  // steer to apple using buttons: re-evaluate both axes every tick
  initial begin
    @(negedge btnC);
    @(posedge game_tick);

    while (head_x != apple_x || head_y != apple_y) begin
      if (head_y < apple_y)       press_down();
      else if (head_y > apple_y)  press_up();
      else if (head_x < apple_x)  press_right();
      else if (head_x > apple_x)  press_left();
      // one press per tick; the task waits for posedge game_tick
    end

    //on the apple's cell; wait one more tick to actually "eat"
    @(posedge game_tick);
  end

  // printer
  integer tick_count = 0;
  initial begin
    $display("TICK | head (x,y) | apple (x,y) | len | vid | over");
    forever @(posedge game_tick) begin
      tick_count = tick_count + 1;
      $display("%4d |   %2d,%2d   |    %2d,%2d    |  %2d |  %b  |  %b",
        tick_count, head_x, head_y, apple_x, apple_y, snake_len, video_on, game_over);
    end
  end

  // stop after N ticks
  localparam integer MAX_TICKS = 200;
  initial begin
    repeat (MAX_TICKS) @(posedge game_tick);
    $display("** Reached %0d ticks, stopping **", MAX_TICKS);
    $finish;
  end

  // safety timeout
  initial begin
    repeat (20_000_000) @(posedge clk);
    $display("** TIMEOUT **");
    $finish;
  end

  // optional: stop on game_over
  initial begin
    @(posedge game_over);
    #20;
    $display("** GAME OVER at tick %0d, time %t **", tick_count, $time);
    $finish;
  end

endmodule
