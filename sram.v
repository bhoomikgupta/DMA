module sram #(  parameter FIFO_PTR = 4,FIFO_WIDTH= 16,A_MAX = 2**(FIFO_PTR))
 
  (wrclk,wren,wrptr,wrdata,
  
  rdclk,rden ,rdptr, rddata);
    // Write port
  input                wrclk;
  input  [FIFO_PTR-1:0] wrptr;
  input  [FIFO_WIDTH-1:0] wrdata;
  input                wren;

  // Read port
  input           rdclk   ;
  input  [FIFO_PTR-1:0] rdptr;
  input                rden;
  output [FIFO_WIDTH-1:0] rddata;
  
  reg    [FIFO_WIDTH-1:0] rddata;
  
  // Memory as multi-dimensional array
  reg [FIFO_WIDTH-1:0] memory [A_MAX-1:0];

  // Write data to memory
  always @(posedge wrclk) begin
    if (wren) begin
      memory[wrptr] <= wrdata;
		
    end
  end

  // Read data from memory
  always @(posedge rdclk) begin
   if (rden) begin
    rddata <= memory[rdptr];
	 end
  end

endmodule