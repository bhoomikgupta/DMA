module asynch_fifo #(parameter FIFO_PTR = 4,FIFO_WIDTH=32)
(wrclk,rstb_wrclk,write_en,write_data,snapshot_wrptr,rollback_wrptr,reset_wrptr,rdclk,
					rstb_rdclk,read_en,read_data,snapshot_rdptr,rollback_rdptr,reset_rdptr,fifo_full,fifo_empty,room_avail,data_avail);


//input parameters(for writing of data)
input wrclk,rstb_wrclk,write_en,snapshot_wrptr,rollback_wrptr,reset_wrptr;
input [FIFO_WIDTH-1:0] write_data;

//input parameters (for reading of data)
input rdclk,rstb_rdclk,read_en,snapshot_rdptr,rollback_rdptr,reset_rdptr;


//output parameters
output [FIFO_WIDTH-1:0] read_data;
output  fifo_full;
output  fifo_empty;
output  [FIFO_PTR:0] room_avail;
output  [FIFO_PTR:0] data_avail;

//local parameters declaration
localparam FIFO_DEPTH = (1<<FIFO_PTR);
localparam FIFO_TWICEDEPTH_MINUS1=(2*FIFO_DEPTH)-1;
//register and wires declaration
reg [FIFO_PTR:0] wr_ptr_wab,wr_ptr_wab_nxt;
reg [FIFO_PTR:0] room_avail;
wire [FIFO_PTR:0] room_avail_nxt;
reg [FIFO_PTR:0] wr_ptr_snapshot_value;
wire [FIFO_PTR:0] wr_ptr_snapshot_value_nxt;
reg fifo_full;
wire fifo_full_nxt;
wire [FIFO_PTR-1:0] wr_ptr;

reg [FIFO_PTR:0] rd_ptr_wab,rd_ptr_wab_nxt;
reg [FIFO_PTR:0] data_avail;
wire [FIFO_PTR:0] data_avail_nxt;
reg [FIFO_PTR:0] rd_ptr_snapshot_value;
wire [FIFO_PTR:0] rd_ptr_snapshot_value_nxt;
reg fifo_empty;
wire fifo_empty_nxt;
wire [FIFO_PTR-1:0] rd_ptr;

always@(*)
begin
	wr_ptr_wab_nxt=wr_ptr_wab;
	if(reset_wrptr)
		wr_ptr_wab_nxt='d0;
	else if(rollback_wrptr)
		wr_ptr_wab_nxt=wr_ptr_snapshot_value;
	else if(write_en &&(wr_ptr_wab == FIFO_TWICEDEPTH_MINUS1))
		wr_ptr_wab_nxt='d0;
	else if(write_en)
		wr_ptr_wab_nxt=wr_ptr_wab+1;
end
//take a snapshot of write pointer that can
//be used to reload it later
assign wr_ptr_snapshot_value_nxt=snapshot_wrptr ? wr_ptr_wab:wr_ptr_snapshot_value;
always@(posedge wrclk or negedge rstb_wrclk)
begin
	if(!rstb_wrclk)
		begin
			wr_ptr_wab <='d0;
			wr_ptr_snapshot_value <='d0;
		end
	else
		 begin
			wr_ptr_wab <= wr_ptr_wab_nxt;
			wr_ptr_snapshot_value <= wr_ptr_snapshot_value_nxt;
		end
	end
//convert the binary wr ptr to gray, flop it and then pass it to read domain

reg [FIFO_PTR:0] wr_ptr_wab_gray;
wire [FIFO_PTR:0]	wr_ptr_wab_gray_nxt;

//instantiate the module
binary_to_gray #(.PTR (FIFO_PTR)) binary_to_gray_wr
					(.binary_value (wr_ptr_wab_nxt),
					.gray_value (wr_ptr_wab_gray_nxt));
always@(posedge wrclk or negedge rstb_wrclk)
begin
	if (!rstb_wrclk)
		wr_ptr_wab_gray <='d0;
	else
		wr_ptr_wab_gray <=wr_ptr_wab_gray_nxt;
	end
reg [FIFO_PTR:0] wr_ptr_wab_gray_sync1;
reg [FIFO_PTR:0] wr_ptr_wab_gray_sync2;	

//synchronize wr_ptr_wab_gray into read clock domain
always@(posedge rdclk or negedge rstb_rdclk)
begin
	if(!rstb_rdclk)
		begin
			wr_ptr_wab_gray_sync1 <='d0;
			wr_ptr_wab_gray_sync2 <='d0;
		end
	else
		begin
			wr_ptr_wab_gray_sync1 <= wr_ptr_wab_gray;
			wr_ptr_wab_gray_sync2 <= wr_ptr_wab_gray_sync1;
		end
	end
	
//convert wr_ptr_wab_gray_sync2 back to binary form

reg [FIFO_PTR:0] wr_ptr_wab_rdclk;
wire[FIFO_PTR:0] wr_ptr_wab_rdclk_nxt;

gray_to_binary #(.PTR(FIFO_PTR)) gray_to_binary_wr
					(.gray_value (wr_ptr_wab_gray_sync2),
					.binary_value (wr_ptr_wab_rdclk_nxt));
					
always@(posedge rdclk or negedge rstb_rdclk)
begin
	if(!rstb_rdclk)
		wr_ptr_wab_rdclk <='d0;
	else
		wr_ptr_wab_rdclk <=wr_ptr_wab_rdclk_nxt;
	end
	
//read pointer control logic

always@(*)
begin
	rd_ptr_wab_nxt = rd_ptr_wab;
	
	if(reset_rdptr)
		rd_ptr_wab_nxt = 'd0;
	else if(rollback_rdptr)
		rd_ptr_wab_nxt = rd_ptr_snapshot_value;
	else if(read_en && (rd_ptr_wab == FIFO_TWICEDEPTH_MINUS1))
		rd_ptr_wab_nxt='d0;
	else if(read_en)
		rd_ptr_wab_nxt = rd_ptr_wab+1;
	end
	
//take a snapshot of the read pointer  that can be  used to reload later

assign rd_ptr_snapshot_value_nxt=snapshot_rdptr ? rd_ptr_wab : rd_ptr_snapshot_value;

always@(posedge rdclk or negedge rstb_rdclk)
begin
	if(!rstb_rdclk)
		begin
			rd_ptr_wab <= 'd0;
			rd_ptr_snapshot_value <='d0;
		end
	else
	begin
		rd_ptr_wab <= rd_ptr_wab_nxt;
		rd_ptr_snapshot_value <= rd_ptr_snapshot_value_nxt;
	end
end

//convert the binary  rd_ptr to gray and then pass it to write clock domain
reg [FIFO_PTR:0] rd_ptr_wab_gray;
wire [FIFO_PTR:0] rd_ptr_wab_gray_nxt;

binary_to_gray #(.PTR(FIFO_PTR)) binary_to_gray_rd
					(.binary_value (rd_ptr_wab_nxt),
					.gray_value (rd_ptr_wab_gray_nxt));
					
always@(posedge rdclk or negedge rstb_rdclk)
begin
	if(!rstb_rdclk)
		rd_ptr_wab_gray <= 'd0;
	else
		rd_ptr_wab_gray <= rd_ptr_wab_gray_nxt;
	end

//synchronize rd_ptr_wab_gray into write clock domain
 reg [FIFO_PTR:0] rd_ptr_wab_gray_sync1;
 reg [FIFO_PTR:0] rd_ptr_wab_gray_sync2;

always@(posedge wrclk or negedge rstb_wrclk)
begin
	if(!rstb_wrclk)
		begin
			rd_ptr_wab_gray_sync1 <= 'd0;
			rd_ptr_wab_gray_sync2 <= 'd0;
		end
	else
		begin
			rd_ptr_wab_gray_sync1 <= rd_ptr_wab_gray;
			rd_ptr_wab_gray_sync2 <= rd_ptr_wab_gray_sync1;
		end
end

//convert rd_ptr_wab_gray_sync2 back to binary form

reg [FIFO_PTR:0] rd_ptr_wab_wrclk;
wire [FIFO_PTR:0] rd_ptr_wab_wrclk_nxt;

gray_to_binary #(.PTR(FIFO_PTR)) gray_to_binary_rd
					(.gray_value (rd_ptr_wab_gray_sync2),
					.binary_value (rd_ptr_wab_wrclk_nxt));
always@(posedge wrclk or negedge rstb_wrclk)
begin
	if(!rstb_wrclk)
		rd_ptr_wab_wrclk <= 'd0;
	else
		rd_ptr_wab_wrclk <= rd_ptr_wab_wrclk_nxt;
end
assign wr_ptr = wr_ptr_wab[FIFO_PTR-1:0];
assign rd_ptr = rd_ptr_wab[FIFO_PTR-1:0];

//sram memory instantiation
sram #(.FIFO_PTR (FIFO_PTR),
		.FIFO_WIDTH (FIFO_WIDTH)) sram_0
		(.wrclk (wrclk),
		 .wren (write_en),
		 .wrptr (wr_ptr),
		 .wrdata (write_data),
		 .rdclk (rdclk),
		 .rden (read_en),
		 .rdptr (rd_ptr),
		 .rddata (read_data));
		 
//generate fifo_full pointer equal,but the wrap around bits are different

assign fifo_full_nxt = (wr_ptr_wab_nxt[FIFO_PTR]!=rd_ptr_wab_wrclk_nxt[FIFO_PTR]) && (wr_ptr_wab_nxt[FIFO_PTR-1:0] == rd_ptr_wab_wrclk_nxt[FIFO_PTR-1:0]);

assign room_avail_nxt = (wr_ptr_wab[FIFO_PTR] == rd_ptr_wab_wrclk_nxt[FIFO_PTR]) ? (FIFO_DEPTH-(wr_ptr_wab[FIFO_PTR-1:0]-rd_ptr_wab_wrclk[FIFO_PTR-1:0])):(rd_ptr_wab_wrclk[FIFO_PTR-1:0]-wr_ptr_wab[FIFO_PTR-1:0]);

//generate fifo_empty: pointers are equal including the wrap around bits

assign fifo_empty_nxt = (rd_ptr_wab_nxt[FIFO_PTR:0] == wr_ptr_wab_rdclk_nxt[FIFO_PTR:0]);
assign data_avail_nxt = (rd_ptr_wab[FIFO_PTR] == wr_ptr_wab_rdclk[FIFO_PTR]) ? (wr_ptr_wab_rdclk[FIFO_PTR-1:0]-rd_ptr_wab[FIFO_PTR-1:0]):(FIFO_DEPTH-rd_ptr_wab[FIFO_PTR-1:0]-wr_ptr_wab_rdclk[FIFO_PTR-1:0]);

always@(posedge wrclk or negedge rstb_wrclk)	 
begin
	if(!rstb_wrclk)
		begin
			fifo_full <= 1'b0;
			room_avail <= 'd0;
		end
	else
		begin
			fifo_full <= fifo_full_nxt;
			room_avail <= room_avail_nxt;
		end
end

always@(posedge rdclk or negedge rstb_rdclk)
begin
	if(!rstb_rdclk)
		begin
			fifo_empty <= 1'b1;
			data_avail <= 'd0;
		end
	else
		begin
			fifo_empty <= fifo_empty_nxt;
			data_avail <= data_avail_nxt;
		end
end
endmodule