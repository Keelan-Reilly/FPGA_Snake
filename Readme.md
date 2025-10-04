# Snake_FPGA

A simple Snake game implemented in Verilog for the Basys 3 FPGA board.

The design runs fully in hardware and renders over VGA at 640×480.  
It includes modular components for VGA timing, debounced button input, LFSR-based apple generation, snake body FIFO, and head movement logic.  
Game logic is synchronised by a tick divider to control speed, and wrap-around movement is supported on a 40×30 grid.

Each module has a self-contained Verilog testbench verifying basic functionality, timing, and reset behaviour.  
The full top-level design was simulated with VGA output and will be deployed on hardware soon.