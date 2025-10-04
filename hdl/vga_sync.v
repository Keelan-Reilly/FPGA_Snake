module vga_sync(
    input clk,
    output reg [9:0] hcount,
    output reg [9:0] vcount,
    output reg hsync,
    output reg vsync,
    output reg video_on
);

// zero the counters in simulation
initial begin
  hcount = 0;
  vcount = 0;
end

// Simplified VGA timings for 640x480 @ 60Hz
parameter H_MAX = 800;
parameter V_MAX = 525;
parameter H_VISIBLE = 640;
parameter V_VISIBLE = 480;
parameter H_SYNC_START = 656;
parameter H_SYNC_END = 752;
parameter V_SYNC_START = 490;
parameter V_SYNC_END = 492;

always @(posedge clk) begin
    if (hcount == H_MAX - 1) begin
        hcount <= 0;
        if (vcount == V_MAX - 1)
            vcount <= 0;
        else
            vcount <= vcount + 1;
    end else begin
        hcount <= hcount + 1;
    end

    hsync    <= ~(hcount >= H_SYNC_START && hcount < H_SYNC_END);
    vsync    <= ~(vcount >= V_SYNC_START && vcount < V_SYNC_END);
    video_on <= (hcount < H_VISIBLE) && (vcount < V_VISIBLE);
end

endmodule
