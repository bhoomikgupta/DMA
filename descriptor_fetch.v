

module descriptor_fetch(clk,
                rstb,
                addr_1stdescp,
                dma_start,
                fetch_descp,
                addr_descp,
                length_descp,
                ack_fetch_descp,
                descpdata_valid,
                descp_dword0,
                descp_dword1,
                descp_dword2,
                descp_dword3,
                descpfifo_wren,
                despfifo_roomavail);
//********************************************************
input clk;
input rstb;// rerset signal either at posedge clock or neg edge reset
        // so this means while dma operation it is meant to be HIGH
input [31:0] addr_1stdescp; //(iput by software)address of first descriptor from where to start checking
input dma_start; //indiactes to start dma operation by software
output fetch_descp; //request to bus interface module
output [31:0] addr_descp; // address of descriptor where will be storing information in fifo descp
output [7:0] length_descp; //no. of block in each descriptor

input ack_fetch_descp;// acknowledge signal from bus interface module inidcatiing theta we can fetch info now

input descpdata_valid;// indicate valid descriptor or not(input by buus interface)
               // this isgnal can be removed bcz till now i dont get any a=signiifcance of that signal

input [31:0] descp_dword0; // start address for data transfer(indicaates empty location )
input [31:0] descp_dword1; // transfer count   
input [31:0] descp_dword2; // control owrd register
input [31:0] descp_dword3; //address for next descriptor
output descpfifo_wren; // when 1, write to descp fifo
input despfifo_roomavail; // indicate room available in fifo_descp

//*****************************************************************
reg [1:0] fetch_state,fetch_state_nxt;
reg fetch_descp,fetch_descp_nxt;
reg [31:0] addr_descp,addr_descp_nxt;
wire [7:0] length_descp;
wire valid_bit;
wire link_bit;
reg descpfifo_wren;
reg [1:0] counter,counter_nxt;
//****************************************************************
localparam IDLE = 2'b00,
        WAIT_ACK = 2'b01,
        WAIT_DESCP = 2'b10,
        CHECK_FIFOROOM = 2'b11;
//****************************************************************
assign length_descp ='d4; // descriptor dwords are 4 word long
assign valid_bit = descp_dword2[1];
assign link_bit = descp_dword2[0];
//****************************************************************
always @(*)
  begin
    fetch_state_nxt = fetch_state;
    fetch_descp_nxt = 1'b0;
    addr_descp_nxt = addr_descp;
    descpfifo_wren = 1'b0;
    counter_nxt = counter;
    
    case(fetch_state)
    IDLE: begin
        if(dma_start)begin
          fetch_descp_nxt = 1'b1;
          fetch_state_nxt = WAIT_ACK;
          addr_descp_nxt = addr_1stdescp;
        end
      end
    WAIT_ACK: begin
          if(ack_fetch_descp)begin
            fetch_descp_nxt = 1'b0;
            fetch_state_nxt = WAIT_DESCP;
          end
         else begin
          fetch_descp_nxt = 1'b1;
          addr_descp_nxt = addr_descp;
        end
      end
      
    WAIT_DESCP: begin
            if(descpdata_valid & valid_bit & link_bit) //fetch next descriptor
              begin
                descpfifo_wren = 1'b1;
                addr_descp_nxt = descp_dword3;
                fetch_state_nxt = CHECK_FIFOROOM;
                counter_nxt = 'd1;
               end
            else if(descpdata_valid & valid_bit & !link_bit) //terminate
              begin
                descpfifo_wren = 1'b1;
                fetch_state_nxt = IDLE;
              end
            else if(descpdata_valid & ! valid_bit) //refetch descriptor
              begin
                fetch_descp_nxt = 1'b1;
                fetch_state_nxt = WAIT_ACK;
                addr_descp_nxt = addr_descp; // keep the last descriptor
              end
            end
      CHECK_FIFOROOM: begin
      if(counter!= 'd0)
        counter_nxt = counter -1'b1;
      if((counter == 'd0) && despfifo_roomavail)
        begin
		  fetch_descp_nxt = 1'b1; // ftech next descriptor
          fetch_state_nxt = WAIT_ACK;
        end
      end
    
          
    endcase
  end
always @(posedge clk or negedge rstb)
  begin
    if(!rstb) begin
      fetch_state <= IDLE;
      fetch_descp <= 1'b0;
      addr_descp <= 'd0;
      counter <= 'd0;
    end
    else begin
      fetch_state <= fetch_state_nxt;
      fetch_descp <= fetch_descp_nxt;
      addr_descp <= addr_descp_nxt;
      counter <= counter_nxt;
    end
  end
endmodule