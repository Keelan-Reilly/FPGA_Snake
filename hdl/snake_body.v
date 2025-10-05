module snake_body #(
  parameter XW      = 6,         // bits for cell_x
  parameter YW      = 5,         // bits for cell_y
  parameter MAX_LEN = 128        // max snake length
)(
  input  wire              clk,
  input  wire              reset,
  input  wire              push,        // insert new head at mem[0]
  input  wire              pop,         // drop tail (no pop when growing)
  input  wire [XW+YW-1:0]  data_in,     // {head_x, head_y}
  output reg  [XW+YW-1:0]  data_out,    // tail value being popped
  output reg  [7:0]        length,       // current length
  output wire              tail_valid
);

  localparam W = XW+YW;
  assign tail_valid = (length != 0);

  // storage
  reg [W-1:0] mem [0:MAX_LEN-1];

  // tail combinational read (safe when length>0)
  wire [W-1:0] tail_val = (length != 0) ? mem[length-1] : {W{1'b0}};

  integer i;

  always @(posedge clk or posedge reset) begin
    if (reset) begin
      length   <= 8'd0;
      data_out <= {W{1'b0}};
      // for (i = 0; i < MAX_LEN; i = i + 1) mem[i] <= {W{1'b0}};
    end else begin
      // default: hold outputs
      data_out <= data_out;

      // --- SHIFT / INSERT ---
      if (push) begin
        // shift valid window up by one; constant-bound loop for synthesis
        for (i = MAX_LEN-1; i > 0; i = i - 1) begin
          if (i <= length) begin
            mem[i] <= mem[i-1];
          end
        end
        mem[0] <= data_in;
      end

      // --- POP / DATA_OUT ---
      if (pop && (length != 0)) begin
        data_out <= tail_val;  // old tail (before length changes)
      end

      // --- LENGTH UPDATE ---
      case ({push, pop})
        2'b10: begin
          if (length < MAX_LEN) length <= length + 1'b1; // grow
          else                  length <= length;        // saturate
        end
        2'b01: begin
          if (length != 0)      length <= length - 1'b1; // shrink
          else                  length <= 8'd0;
        end
        default: begin
          length <= length; // 00 or 11: unchanged
        end
      endcase
    end
  end
endmodule