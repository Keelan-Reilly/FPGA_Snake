// tb/apple_gen_tb.v
`timescale 1ns/1ps

module tb_apple_gen;

  // Parameters (same as DUT defaults)
  localparam XW     = 6;
  localparam YW     = 5;
  localparam GRID_W = 40;
  localparam GRID_H = 30;
  localparam LFSR_W = 16;

  // DUT I/O
  reg                  clk   = 0;
  reg                  reset = 1;
  reg                  game_tick = 0;
  reg                  ate   = 0;
  wire [XW-1:0]        apple_x;
  wire [YW-1:0]        apple_y;

  // Clock: 50 MHz (20 ns period)
  always #10 clk = ~clk;

  // Device Under Test
  apple_gen #(
    .XW(XW), .YW(YW), .GRID_W(GRID_W), .GRID_H(GRID_H), .LFSR_W(LFSR_W)
  ) dut (
    .clk(clk),
    .reset(reset),
    .game_tick(game_tick),
    .ate(ate),
    .apple_x(apple_x),
    .apple_y(apple_y)
  );

    // Alias to internal for convenience
wire [LFSR_W-1:0] lfsr = dut.lfsr;

// Delay line for "previous" values
reg                game_tick_d;
reg [LFSR_W-1:0]   lfsr_prev;

always @(posedge clk) begin
  if (reset) begin
    game_tick_d <= 1'b0;
    lfsr_prev   <= {LFSR_W{1'bx}};
  end else begin
    // After a cycle where game_tick was high, lfsr MUST have changed
    if (game_tick_d) begin
      if (lfsr == lfsr_prev) $fatal(1, "LFSR didn't advance");
    end
    // Update delays for next cycle's check
    game_tick_d <= game_tick;
    lfsr_prev   <= lfsr;
  end
end

  // Helpers
  task tick_no_eat; begin
    @(negedge clk);
    ate       = 1'b0;
    game_tick = 1'b1;
    @(negedge clk);
    game_tick = 1'b0;
  end endtask

  task tick_and_eat; begin
    @(negedge clk);
    ate       = 1'b1;
    game_tick = 1'b1;
    @(negedge clk);
    ate       = 1'b0;
    game_tick = 1'b0;
  end endtask

  task idle_cycles(input integer n); integer i; begin
    for (i=0;i<n;i=i+1) @(posedge clk);
  end endtask

  // Bounds check
  task check_in_bounds; begin
    if (!(apple_x < GRID_W)) $fatal(1, "apple_x out of bounds: %0d", apple_x);
    if (!(apple_y < GRID_H)) $fatal(1, "apple_y out of bounds: %0d", apple_y);
  end endtask

  // Main stimulus
  integer i;
  reg [XW-1:0] last_x;
  reg [YW-1:0] last_y;
  integer changes;

  initial begin
    $dumpfile("sim/tb_apple_gen.vcd");
    $dumpvars(0, tb_apple_gen);

    $display("=== apple_gen TB start ===");

    // Hold reset a few cycles
    idle_cycles(4);
    reset <= 1'b1;
    idle_cycles(2);
    reset <= 1'b0;
    @(posedge clk);

    // After reset, seed should already be valid
    check_in_bounds();

    last_x = apple_x;
    last_y = apple_y;

    // 1) Tick without eat: position must NOT change
    tick_no_eat();
    check_in_bounds();
    if (apple_x !== last_x || apple_y !== last_y)
      $fatal(1, "Position changed on tick without eat: (%0d,%0d) -> (%0d,%0d)",
             last_x, last_y, apple_x, apple_y);

    // 2) Idle clocks without tick: must not change
    idle_cycles(10);
    if (apple_x !== last_x || apple_y !== last_y)
      $fatal(1, "Position changed without tick: (%0d,%0d) -> (%0d,%0d)",
             last_x, last_y, apple_x, apple_y);

    // 3) Multiple eats: must stay in bounds; expect at least one change overall
    changes = 0;
    for (i = 0; i < 16; i = i + 1) begin
      tick_and_eat();
      check_in_bounds();
      if (apple_x !== last_x || apple_y !== last_y) begin
        changes = changes + 1;
        $display("Eat %0d -> new apple at (%0d,%0d)", i, apple_x, apple_y);
      end else begin
        // Same coord can happen rarely; not a failure by itself.
        $display("Eat %0d -> same position (%0d,%0d), trying again", i, apple_x, apple_y);
      end
      last_x = apple_x;
      last_y = apple_y;

      //few idle cycles between eats
      idle_cycles(3);

      // test tick without eat between eats: should hold
      tick_no_eat();
      check_in_bounds();
      if (apple_x !== last_x || apple_y !== last_y)
        $fatal(1, "Changed on non-eat tick between eats at i=%0d", i);
    end

    if (changes == 0)
      $fatal(1, "Apple never changed position after 16 eats (unexpected/stuck)");

    $display("=== PASS: apple_gen basic behavior OK (changes=%0d) ===", changes);
    $finish;
  end

endmodule
