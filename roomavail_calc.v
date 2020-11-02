
module roomavail_calc(
     clk,
     rstb,
     subtract_room,
     subtract_value,
     add_room,
     add_value,
     datafifo_room
    );
input  clk;
input  rstb;
input  subtract_room;
input [7:0] subtract_value;
input   add_room;
input [7:0] add_value;
output [7:0] datafifo_room;
reg [7:0] datafifo_room,datafifo_room_nxt;
parameter FIFO_DEPTH='d128;
always @(*)
 begin
       datafifo_room_nxt=datafifo_room;
		 if(subtract_room & !add_room)
		    datafifo_room_nxt=datafifo_room-subtract_value;
		else if(!subtract_room & add_room)
		    datafifo_room_nxt=datafifo_room +add_value;
		else if(subtract_room &add_room)
		    datafifo_room_nxt=(datafifo_room-subtract_value)+add_value;
end
always @(posedge clk or negedge rstb)
  begin
  if(!rstb)
           datafifo_room<=FIFO_DEPTH;
  else
           datafifo_room<=datafifo_room_nxt;
  end
endmodule
