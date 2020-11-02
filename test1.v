`timescale 1ns / 10ps
module testbench_top ();
parameter CLKTB_HALF_PERIOD=2.5;
parameter RST_DEASSERT_DLY=100;

reg clk2x,rstb;
reg [31:0] addr_1stdescp;
reg dma_start,fetch_descp;
wire [31:0] addr_descp;
wire [7:0] length_descp;
reg ack_fetch_descp,descpdata_valid;
reg [31:0] descp_dword0,descp_dword1;
reg [31:0] descp_dword2,descp_dword3;
reg fetch_data;
wire [31:0] addr_data;
wire [7:0] length_data;
reg ack_fetch_data;
reg [31:0] datafifo_wrdata;
reg datafifo_datavalid,add_room;
reg [7:0] add_value;
wire [8:0] datafifo_dataavail1;
reg datafifo_rden;
wire [31:0] datafifo_rddata;

initial begin
        clk2x=1'b0;
        forever begin
    #CLKTB_HALF_PERIOD clk2x=~clk2x;
	 end
end
initial begin
	     rstb=1'b0;
	     #RST_DEASSERT_DLY rstb=1'b1;
end
	 


	// Instantiate the Unit Under Test (UUT)
	dmardtop dmardtop_0 (
		.clk(clk2x), 
		.rstb(rstb), 
		.addr_1stdescp(addr_1stdescp), 
		.dma_start(dma_start), 
		.fetch_descp(fetch_descp1), 
		.addr_descp(addr_descp), 
		.length_descp(length_descp), 
		.ack_fetch_descp(ack_fetch_descp), 
		.descpdata_valid(descpdata_valid), 
		.descp_dword0(descp_dword0), 
		.descp_dword1(descp_dword1), 
		.descp_dword2(descp_dword2), 
		.descp_dword3(descp_dword3), 
		.fetch_data(fetch_data1), 
		.addr_data(addr_data), 
		.length_data(length_data), 
		.ack_fetch_data(ack_fetch_data), 
		.datafifo_wrdata(datafifo_wrdata), 
		.datafifo_datavalid(datafifo_datavalid), 
		.add_room(add_room), 
		.add_value(add_value), 
		.datafifo_dataavail(datafifo_dataavail1), 
		.datafifo_rden(datafifo_rden), 
		.datafifo_rddata(datafifo_rddata)
	);
	reg [7:0] count_descp;
	reg link_bit;
	
	initial 
	begin
	repeat(3)
	begin
	@(posedge fetch_descp1)
	@(posedge clk2x);
	#1
	ack_fetch_descp=1'b1;
	@(posedge clk2x);
	#1
	ack_fetch_descp=1'b0;
	@(posedge clk2x);
	@(posedge clk2x);
	#1
	descpdata_valid=1'b1;
	@(posedge clk2x);
	#1
	descpdata_valid=1'b0;
	descp_dword0=descp_dword0+32'd16;
	descp_dword1=32'h0000_0020;
	descp_dword2={30'b0,1'b1,link_bit};
	descp_dword3=descp_dword3+4;
	@(posedge clk2x);
	#1;
	count_descp=count_descp+1'b1;
	if(count_descp=='d1)
	link_bit=1'b0;
	end
	end
	
	always @(posedge fetch_data1)
	begin
	@(posedge clk2x);
	@(posedge clk2x);
	#1
	ack_fetch_data=1'b1;
	datafifo_rden=1'b1;
	@(posedge clk2x);
	#1
	ack_fetch_data=1'b0;
	datafifo_rden=1'b0;
	end
   
	initial begin
		// Initialize Inputs
		count_descp=8'd0;
		link_bit=1'b1;
		addr_1stdescp=32'h0000_F000;
		dma_start=1'b0;
		ack_fetch_descp = 1'b0;
		descpdata_valid = 1'b0;
		descp_dword0 = 32'h0F00_0000;
		descp_dword1 = 32'd32;
		descp_dword2 = 32'h0000_0003;
		descp_dword3 = addr_1stdescp+4;
		ack_fetch_data = 1'b0;
		datafifo_wrdata = 32'h0000_0000;
		datafifo_datavalid = 1'b0;
		add_room = 1'b0;
		add_value = 8'd0;
		datafifo_rden = 1'b0;

		// Wait 100 ns for global reset to finish
		#500;
        
		// Add stimulus here
		@(posedge clk2x);
		#1;
		addr_1stdescp=32'h0000_F000;
		dma_start=1'b1;
		@(posedge clk2x);
		#1;
		dma_start=1'b0;
		@(posedge clk2x);
		@(posedge clk2x);
		#1
		@(posedge clk2x);
		#1
		repeat(17)
		begin @(posedge clk2x);
		end
		@(posedge clk2x);
		#1
		@(posedge clk2x);
		#1
		repeat(3) @(posedge clk2x);
		#1
		datafifo_datavalid=1'b1;
		datafifo_wrdata=32'h0000_0001;
		@(posedge clk2x);
		#1
		datafifo_wrdata=32'h0000_0002;
		@(posedge clk2x);
		#1
		datafifo_wrdata=32'h0000_0003;
		@(posedge clk2x);
		#1
		datafifo_wrdata=32'h0000_0004;
		@(posedge clk2x);
		#1
		datafifo_wrdata=32'h0000_0005;
		@(posedge clk2x);
		#1
		datafifo_wrdata=32'h0000_0006;
		@(posedge clk2x);
		#1
		datafifo_wrdata=32'h0000_0007;
		@(posedge clk2x);
		#1
		datafifo_wrdata=32'h0000_0008;
		@(posedge clk2x);
		#1
		datafifo_datavalid=1'b0;
		repeat(4) @(posedge clk2x);
		#1
		datafifo_datavalid=1'b1;
		datafifo_wrdata=32'h0000_0001;
		@(posedge clk2x);
		#1
		datafifo_wrdata=32'h0000_0002;
		@(posedge clk2x);
		#1
		datafifo_wrdata=32'h0000_0003;
		@(posedge clk2x);
		#1
		datafifo_wrdata=32'h0000_0004;
		@(posedge clk2x);
		#1
		datafifo_wrdata=32'h0000_0005;
		@(posedge clk2x);
		#1
		datafifo_wrdata=32'h0000_0006;
		@(posedge clk2x);
		#1
		datafifo_wrdata=32'h0000_0007;
		@(posedge clk2x);
		#1
		datafifo_wrdata=32'h0000_0008;
		@(posedge clk2x);
		#1
		datafifo_datavalid=1'b0;
		repeat(3) @(posedge clk2x);
		#40000;
		$finish;

	end
      
endmodule

