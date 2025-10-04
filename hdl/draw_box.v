module draw_box(
  input  [9:0] hcount,
  input  [9:0] vcount,
  output       box_on
);
  // Parameters for a 16×16 box at (100,100)
  parameter BOX_X    = 100;
  parameter BOX_Y    = 100;
  parameter BOX_SIZE = 16;

  assign box_on =
    (hcount >= BOX_X    && hcount <  BOX_X + BOX_SIZE) &&
    (vcount >= BOX_Y    && vcount <  BOX_Y + BOX_SIZE);
endmodule
