`timescale 1ns / 1ps

module dmardtop(clk,rstb,
				   addr_1stdescp,
					dma_start,fetch_descp,
					addr_descp,length_descp,
					ack_fetch_descp,
					descpdata_valid,
					descp_dword0,
					descp_dword1,
					descp_dword2,
					descp_dword3,
					fetch_data,addr_data,
					length_data,ack_fetch_data,
					datafifo_wrdata,
					datafifo_datavalid,
					add_room,add_value,
					datafifo_dataavail,
					datafifo_rden,
					datafifo_rddata);
input clk;
input rstb;
input [31:0] addr_1stdescp;
input dma_start;
output fetch_descp;
output [31:0] addr_descp;
output [7:0] length_descp;
input ack_fetch_descp;
input descpdata_valid;
input [31:0] descp_dword0;
input [31:0] descp_dword1;
input [31:0] descp_dword2;
input [31:0] descp_dword3;
output fetch_data;
output [31:0] addr_data;
output [7:0] length_data;
input ack_fetch_data;
input [31:0] datafifo_wrdata;
input datafifo_datavalid; // when 1 write to data fifo
input add_room;
input [7:0] add_value;
output [8:0] datafifo_dataavail;
input datafifo_rden;
output [31:0] datafifo_rddata;
//****************************************************************
parameter DESCPFIFO_PTR = 4,
			 DESCPFIFO_WIDTH = 64;
parameter DATAFIFO_PTR = 8,
			 DATAFIFO_WIDTH = 32;

wire descpfifo_wren;
wire despfifo_roomavail;
wire descp_available;
wire descp_rden;
wire [7:0] datafifo_roomavail;
wire subtract_room;
wire [7:0] length_data;
wire [(DESCPFIFO_WIDTH-1):0] descpfifo_wrdata;
wire descpfifo_full;
wire descpfifo_empty;
wire [(DESCPFIFO_WIDTH-1):0] descpfifo_rddata;
wire [8:0] datafifo_dataavail;

assign despfifo_roomavail = !descpfifo_full;
assign descp_available = !descpfifo_empty;
assign descpfifo_wrdata = {descp_dword1,descp_dword0};

descriptor_fetch descriptor_fetch_0
	(.clk (clk),
	 .rstb (rstb),
	 .addr_1stdescp (addr_1stdescp),
	 .dma_start (dma_start),
	 .fetch_descp (fetch_descp),
	 .addr_descp (addr_descp),
	 .length_descp (length_descp),
	 .ack_fetch_descp (ack_fetch_descp),
	 .descpdata_valid (descpdata_valid),
	 .descp_dword0 (descp_dword0),
	 .descp_dword1 (descp_dword1),
	 .descp_dword2 (descp_dword2),
	 .descp_dword3 (descp_dword3),
	 .descpfifo_wren (descpfifo_wren),
	 .despfifo_roomavail (despfifo_roomavail));
	
descriptor_process descriptor_process_0
	(.clk (clk),
	 .rstb (rstb),
	 .descp_available (descp_available),
	 .descriptor (descpfifo_rddata),
	 .descp_rden (descp_rden),
	 .fetch_data (fetch_data),
	 .addr_data (addr_data),
	 .length_data (length_data),
	 .ack_fetch_data (ack_fetch_data),
	 .datafifo_room (datafifo_roomavail),
	 .subtract_room (subtract_room));
	 
roomavail_calc roomavail_calc_0
	(.clk (clk),
	 .rstb (rstb),
	 .subtract_room (subtract_room),
	 .subtract_value (length_data),
	 .add_room (add_room),
	 .add_value (add_value),
	 .datafifo_room (datafifo_roomavail));
	 
asynch_fifo #(.FIFO_PTR (DESCPFIFO_PTR), 
              .FIFO_WIDTH (DESCPFIFO_WIDTH))
				asynch_fifo_hdr
				(.wrclk (clk),
				 .rstb_wrclk (rstb),
				 .write_en (descpfifo_wren),
				 .write_data (descpfifo_wrdata),
				 .snapshot_wrptr (1'b0),
				 .rollback_wrptr (1'b0),
				 .reset_wrptr (1'b0),
				 .rdclk (clk),
				 .rstb_rdclk (rstb),
				 .read_en (descp_rden),
				 .read_data (descpfifo_rddata),
				 .snapshot_rdptr (1'b0),
				 .rollback_rdptr (1'b0),
				 .reset_rdptr (1'b0),
				 .fifo_full (descpfifo_full),
				 .fifo_empty (descpfifo_empty),
				 .room_avail (),
				 .data_avail ());
				 
				 
asynch_fifo #(.FIFO_PTR (DATAFIFO_PTR), 
              .FIFO_WIDTH (DATAFIFO_WIDTH))
				asynch_fifo_data
				(.wrclk (clk),
				 .rstb_wrclk (rstb),
				 .write_en (datafifo_datavalid),
				 .write_data (datafifo_wrdata),
				 .snapshot_wrptr (1'b0),
				 .rollback_wrptr (1'b0),
				 .reset_wrptr (1'b0),
				 .rdclk (clk),
				 .rstb_rdclk (rstb),
				 .read_en (datafifo_rden),
				 .read_data (datafifo_rddata),
				 .snapshot_rdptr (1'b0),
				 .rollback_rdptr (1'b0),
				 .reset_rdptr (1'b0),
				 .fifo_full (datafifo_full),
				 .fifo_empty (datafifo_empty),
				 .room_avail (),
				 .data_avail (datafifo_dataavail));

endmodule