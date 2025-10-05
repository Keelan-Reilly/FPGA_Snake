// snake_map.v — Verilog-2001 safe
module snake_map #(
  parameter XW=6, YW=5, GRID_W=40, GRID_H=30
)(
  input  wire             clk,
  input  wire             reset,

  input  wire             tick,         // one pulse per game step
  input  wire             eat,          // 1 when head is on apple (no tail pop)
  input  wire [XW+YW-1:0] head_xy,      // {head_x, head_y}
  input  wire [XW+YW-1:0] tail_xy,      // from snake_body.data_out when pop

  input  wire [XW-1:0]    q_x,
  input  wire [YW-1:0]    q_y,
  output wire             body_on,      // O(1) draw query

  input  wire [XW-1:0]    next_x,
  input  wire [YW-1:0]    next_y,
  input  wire             will_pop,     // !eat at this tick
  input  wire             tail_valid,
  output wire             self_hit_now  // true only on tick
);
  // occ[y][x]
  reg [GRID_W-1:0] occ [0:GRID_H-1];

  wire [XW-1:0] head_x = head_xy[XW+YW-1:YW];
  wire [YW-1:0] head_y = head_xy[YW-1:0];
  wire [XW-1:0] tail_x = tail_xy[XW+YW-1:YW];
  wire [YW-1:0] tail_y = tail_xy[YW-1:0];

  integer r;
  // clear tail only when a real tail exists; avoid leaving trails at length==0
  always @(posedge clk or posedge reset) begin
    if (reset) begin
      for (r = 0; r < GRID_H; r = r + 1) occ[r] <= {GRID_W{1'b0}};
    end else if (tick) begin
      // Create a body pixel iff we already have length>0, or we are growing now.
      if (tail_valid || eat)
        occ[head_y][head_x] <= 1'b1;

      // Pop tail on non-eat ticks. If length==0, clear the same cell to prevent a trail.
      if (!eat) begin
        if (tail_valid)
          occ[tail_y][tail_x] <= 1'b0;
        else
          occ[head_y][head_x] <= 1'b0;  // belt & braces: no body while length==0
      end
    end
  end

  // --- SAFE memory reads (procedural) ---
  reg [GRID_W-1:0] row_q;
  reg [GRID_W-1:0] row_next;
  always @* begin
    row_q    = occ[q_y];        // read entire row, then bit-select
    row_next = occ[next_y];
  end

  assign body_on = row_q[q_x];

  // Self-hit: occupied next cell unless it’s exactly the tail on a pop tick
  wire moving_into_tail = (next_x == tail_x) && (next_y == tail_y);
  wire occ_next_bit     = row_next[next_x];
  assign self_hit_now   = tick && occ_next_bit && !(will_pop && tail_valid && moving_into_tail);
endmodule
