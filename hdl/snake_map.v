// -----------------------------------------------------------------------------
// Module: snake_map
// Purpose: Maintains a 2D occupancy map (grid) representing the Snake’s body.
//          Each cell of the grid stores whether it is occupied by the snake.
//          The map updates every game tick — setting bits when the snake moves
//          forward, clearing bits when the tail is popped, and checking for
//          self-collisions. It also provides an O(1) query interface for
//          drawing and collision detection.
// -----------------------------------------------------------------------------
module snake_map #(
  parameter XW=6, YW=5, GRID_W=40, GRID_H=30
)(
  input  wire             clk,
  input  wire             reset,

  input  wire             tick,         // One pulse per game step
  input  wire             eat,          // High when snake eats an apple (no tail pop)
  input  wire [XW+YW-1:0] head_xy,      // Current head position {x, y}
  input  wire [XW+YW-1:0] tail_xy,      // Tail position from snake_body.data_out

  input  wire [XW-1:0]    q_x,          // X query coordinate (for VGA rendering)
  input  wire [YW-1:0]    q_y,          // Y query coordinate (for VGA rendering)
  output wire             body_on,      // True if queried cell is occupied (O(1) lookup)

  input  wire [XW-1:0]    next_x,       // Predicted next head X (used for collision check)
  input  wire [YW-1:0]    next_y,       // Predicted next head Y (used for collision check)
  input  wire             will_pop,     // True when tail will be removed this tick (!eat)
  input  wire             tail_valid,   // True if there is at least one body segment
  output wire             self_hit_now  // True when head moves into occupied cell
);
  // 2D occupancy bitmap: each row (Y) contains GRID_W bits of X positions.
  // occ[y][x] == 1 indicates that the cell at (x, y) is occupied by the body.
  reg [GRID_W-1:0] occ [0:GRID_H-1];

  // Split concatenated coordinate vectors into separate X and Y components
  wire [XW-1:0] head_x = head_xy[XW+YW-1:YW];
  wire [YW-1:0] head_y = head_xy[YW-1:0];
  wire [XW-1:0] tail_x = tail_xy[XW+YW-1:YW];
  wire [YW-1:0] tail_y = tail_xy[YW-1:0];

  integer r;

  // Sequential logic: update the occupancy map each tick
  always @(posedge clk or posedge reset) begin
    if (reset) begin
      // Clear the entire map on reset
      for (r = 0; r < GRID_H; r = r + 1) 
        occ[r] <= {GRID_W{1'b0}};
    end else if (tick) begin
      // --- Add new head position ---
      // Create a body pixel if the snake already has a valid tail,
      // or if we’re growing (just ate an apple).
      if (tail_valid || eat)
        occ[head_y][head_x] <= 1'b1;

      // --- Remove tail position (on non-eat ticks) ---
      // If tail is valid, clear the corresponding cell.
      // If length == 0, also clear head cell to avoid stray trails.
      if (!eat) begin
        if (tail_valid)
          occ[tail_y][tail_x] <= 1'b0;
        else
          occ[head_y][head_x] <= 1'b0;  // Safety clear when empty
      end
    end
  end

  // Combinational row reads for safe concurrent access
  // (used by renderer and collision detection)
  reg [GRID_W-1:0] row_q;
  reg [GRID_W-1:0] row_next;
  always @* begin
    row_q    = occ[q_y];        // read entire row, then bit-select
    row_next = occ[next_y];
  end

  // Query: true if the requested (q_x, q_y) cell is part of the body
  assign body_on = row_q[q_x];

  // Self-collision detection
  // The head will collide if the next cell is already occupied,
  // except when the next cell happens to be the tail that’s being popped off.
  wire moving_into_tail = (next_x == tail_x) && (next_y == tail_y);
  wire occ_next_bit     = row_next[next_x];
  assign self_hit_now   = tick && occ_next_bit && !(will_pop && tail_valid && moving_into_tail);
endmodule
