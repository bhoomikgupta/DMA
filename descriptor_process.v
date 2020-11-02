
module descriptor_process(
     clk,
     rstb,
     descp_available,
     descriptor,
     descp_rden,
     fetch_data,
     addr_data,
     length_data,
     ack_fetch_data,
     datafifo_room,
     subtract_room
    );
input		clk;
input 	rstb;
input		descp_available;
input	[63:0]	descriptor;
output	descp_rden;
output fetch_data;
output [31:0] addr_data;
output [7:0]  length_data;
input		ack_fetch_data;
input [7:0] datafifo_room;
output		subtract_room;
reg [2:0] proc_state,proc_state_nxt;
reg fetch_data,fetch_data_nxt;
reg [31:0] addr_data,addr_data_nxt;
reg[7:0]	length_data,length_data_nxt;
reg	descp_rden;
wire [31:0]	transfer_count;
reg [31:0] remain_lenth,remain_lenth_nxt;
wire [31:0] begin_addr;
reg subtract_room,subtract_room_nxt;
localparam IDLE	=3'b000,
           INIT_ATTR	=3'b001,
			  DECIDE_LENGTH	=3'b010,
			  ASSERT_REQ	=3'b011,
			  WAIT_ACK	=3'b100;
parameter		PKT_LENGTH='d8;
assign begin_addr	=descriptor[31:0];
assign transfer_count	=descriptor[63:32];
always@(*)
begin
proc_state_nxt	=proc_state;
fetch_data_nxt	=1'b0;
addr_data_nxt	=addr_data;
descp_rden	=1'b0;
remain_lenth_nxt=remain_lenth;
length_data_nxt=length_data;
subtract_room_nxt=1'b0;

case(proc_state)
IDLE:begin
     if(descp_available)begin
	           descp_rden	=1'b1;
				  proc_state_nxt	=INIT_ATTR;
		end
end
INIT_ATTR:begin
       remain_lenth_nxt	=transfer_count;
		 addr_data_nxt	=begin_addr;
		 proc_state_nxt	=DECIDE_LENGTH;
end
DECIDE_LENGTH:begin
  proc_state_nxt	=ASSERT_REQ;
  if(remain_lenth>=PKT_LENGTH)
    length_data_nxt=PKT_LENGTH;
  else
    length_data_nxt=remain_lenth;
end
ASSERT_REQ:begin
if(datafifo_room>=length_data)
 begin
      fetch_data_nxt	=1'b1;
		addr_data_nxt	=addr_data;
		length_data_nxt=length_data;
		subtract_room_nxt=1'b1;
		remain_lenth_nxt=remain_lenth-length_data;
		proc_state_nxt	=WAIT_ACK;
 end
end
WAIT_ACK:begin
  if(ack_fetch_data)
    begin
	       fetch_data_nxt	=1'b0;
			 if(remain_lenth=='d0)
			  begin
			  proc_state_nxt=IDLE;
			  end
			 else
			  begin
			    proc_state_nxt	=DECIDE_LENGTH;
				 addr_data_nxt=addr_data +{length_data,2'b00};
				 end
	 end
	else
	 begin
	       fetch_data_nxt=1'b1;
			 addr_data_nxt	=addr_data;
			 length_data_nxt=length_data;
	 end
 end
 default:begin end
endcase		  
end
always@(posedge clk or negedge rstb)
 begin
       if(!rstb)
		   begin
			      proc_state <=IDLE;
					fetch_data <=1'b0;
					addr_data  <='d0;
					length_data <='d0;
					remain_lenth <='d0;
					subtract_room <=1'b0;
			end
		 else
		   begin
			proc_state <=proc_state_nxt;
					fetch_data <=fetch_data_nxt;
					addr_data  <=addr_data_nxt;
					length_data <=length_data_nxt;
					remain_lenth <=remain_lenth_nxt;
					subtract_room <=subtract_room_nxt;
			end
	end
endmodule
