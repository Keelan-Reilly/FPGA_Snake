// tb_snake_map.v
`timescale 1ns/1ps

module tb_snake_map;

  // ---- Params (Verilog: no $clog2) ----
  localparam GRID_W = 8;
  localparam GRID_H = 6;
  localparam XW = 3; // ceil(log2(8)) = 3
  localparam YW = 3; // ceil(log2(6)) = 3

  // ---- DUT I/O ----
  reg                  clk = 0;
  reg                  reset = 1;
  reg                  tick;
  reg                  eat;
  reg  [XW+YW-1:0]     head_xy;
  reg  [XW+YW-1:0]     tail_xy;
  reg  [XW-1:0]        q_x;
  reg  [YW-1:0]        q_y;
  wire                 body_on;
  reg  [XW-1:0]        next_x;
  reg  [YW-1:0]        next_y;
  reg                  will_pop;
  wire                 self_hit_now;

  // ---- Clock ----
  always #5 clk = ~clk; // 100 MHz

  // ---- DUT ----
  snake_map #(.XW(XW), .YW(YW), .GRID_W(GRID_W), .GRID_H(GRID_H)) dut (
    .clk(clk),
    .reset(reset),
    .tick(tick),
    .eat(eat),
    .head_xy(head_xy),
    .tail_xy(tail_xy),
    .q_x(q_x),
    .q_y(q_y),
    .body_on(body_on),
    .next_x(next_x),
    .next_y(next_y),
    .will_pop(will_pop),
    .self_hit_now(self_hit_now)
  );

  initial begin
    $dumpfile("sim/tb_snake_map.vcd");
    $dumpvars(0, tb_snake_map);
  end

  // ---------- Reference occupancy (same shape as DUT) ----------
  reg [GRID_W-1:0] occ_ref [0:GRID_H-1];

  task ref_clear;
    integer y;
    begin
      for (y=0; y<GRID_H; y=y+1) occ_ref[y] = {GRID_W{1'b0}};
    end
  endtask

  task ref_apply_tick;
    input eat_i;
    input integer hx, hy;
    input integer tx, ty;
    begin
      occ_ref[hy][hx] = 1'b1;            // previous head becomes body
      if (!eat_i) occ_ref[ty][tx] = 1'b0; // clear tail when popping
    end
  endtask

  task do_step;
    input integer hx, hy;     // head cell (becomes body)
    input integer nx, ny;     // next head cell (for collision query)
    input        eat_i;       // 1=grow, 0=pop
    input integer tx, ty;     // tail cell (valid when !eat)
    output       hit_flag;
    begin
      // Drive inputs (clip to widths)
      head_xy  = {hx[XW-1:0], hy[YW-1:0]};
      next_x   = nx[XW-1:0];
      next_y   = ny[YW-1:0];
      eat      = eat_i;
      will_pop = !eat_i;
      tail_xy  = {tx[XW-1:0], ty[YW-1:0]};

      // *** Let inputs settle before the clock edge ***
      #1;

      // Tick for 1 cycle
      tick = 1'b1; @(posedge clk);
      hit_flag = self_hit_now;
      tick = 1'b0;

      // Update reference (same order as DUT)
      ref_apply_tick(eat_i, hx, hy, tx, ty);

      // Ensure DUT NBAs are visible before any checks
      @(posedge clk);
      #1;
    end
  endtask

  // Scan entire bitmap and compare body_on
  task check_occ;
    input [192*8:1] msg; // string-ish
    integer x,y,err;
    begin
      err = 0;
      for (y=0; y<GRID_H; y=y+1) begin
        for (x=0; x<GRID_W; x=x+1) begin
          q_x = x[XW-1:0];
          q_y = y[YW-1:0];
          #1;
          if (body_on !== occ_ref[y][x]) begin
            $display("ERROR %0s: body_on mismatch at (%0d,%0d): got %0b exp %0b",
                     msg, x, y, body_on, occ_ref[y][x]);
            err = 1;
          end
        end
      end
      if (err) begin
        $display("FAILED %0s", msg);
        $stop;
      end else begin
        $display("PASS %0s: occupancy matches.", msg);
      end
    end
  endtask

  always @(posedge clk) if (tick) begin
    $display("[%0t] eat=%0b pop=%0b head=(%0d,%0d) tail=(%0d,%0d) next=(%0d,%0d)",
            $time, eat, will_pop,
            dut.head_x, dut.head_y, dut.tail_x, dut.tail_y, next_x, next_y);
    end

  // ---------- Test sequence ----------
  initial begin
    integer hit;
    integer hx, hy; // current head
    integer nx, ny; // next head
    integer tx, ty; // tail

    // Init
    tick = 0; eat = 0; will_pop = 0;
    head_xy = 0; tail_xy = 0; next_x = 0; next_y = 0; q_x = 0; q_y = 0;
    ref_clear();

    // Reset
    repeat (2) @(posedge clk);
    reset = 1;
    repeat (2) @(posedge clk);
    reset = 0;
    repeat (1) @(posedge clk);

    check_occ("after reset");

    // Start head at (2,2)
    hx = 2; hy = 2;

    // Step 1: eat (grow). Move to (3,2).
    nx = 3; ny = 2; tx = 2; ty = 2; // tail ignored on eat
    do_step(hx,hy, nx,ny, 1'b1, tx,ty, hit);
    if (hit) begin $display("Unexpected hit on grow step 1"); $stop; end
    check_occ("grow step 1");
    hx = nx; hy = ny;

    // Step 2: eat (grow). Move to (4,2).
    nx = 4; ny = 2; tx = 3; ty = 2;
    do_step(hx,hy, nx,ny, 1'b1, tx,ty, hit);
    if (hit) begin $display("Unexpected hit on grow step 2"); $stop; end
    check_occ("grow step 2");
    hx = nx; hy = ny;

    // Step 3: pop (no eat). Tail at oldest (2,2). Move to (5,2).
    nx = 5; ny = 2; tx = 2; ty = 2;
    do_step(hx,hy, nx,ny, 1'b0, tx,ty, hit);
    if (hit) begin $display("Unexpected hit on pop step 3"); $stop; end
    check_occ("pop step 3");
    hx = nx; hy = ny;

    // Step 4: Tail-exception — move into tail while popping it (no hit).
    // Current body cells should include (3,2) tail and (4,2).
    nx = 3; ny = 2; tx = 3; ty = 2; // moving into (3,2) while it vacates
    do_step(hx,hy, nx,ny, 1'b0, tx,ty, hit);
    if (hit) begin $display("Tail-exception incorrectly hit"); $stop; end
    check_occ("tail-exception step 4");
    hx = nx; hy = ny;

    // Step 5: Real self-hit — move into occupied (4,2) while popping elsewhere.
    nx = 4; ny = 2; tx = 3; ty = 2; // pop different cell; (4,2) remains occupied
    do_step(hx,hy, nx,ny, 1'b0, tx,ty, hit);
    if (!hit) begin $display("Expected self-hit did not trigger"); $stop; end
    $display("PASS: real self-hit step 5");

    $display("All tests passed ✅");
    $finish;
  end

endmodule
