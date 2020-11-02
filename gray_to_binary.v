
module gray_to_binary #(parameter PTR=4)
       (gray_value,
		 binary_value
		 );
input [PTR:0]gray_value;
output [PTR:0]binary_value;
wire [PTR:0]binary_value;
		 
		

assign binary_value[PTR]=gray_value[PTR];
genvar i;
generate for (i=0;i<(PTR);i=i+1)begin :binary_gray

assign binary_value[i]=binary_value[i+1]^gray_value[i];
end
endgenerate

assign binary_value[PTR]=gray_value[PTR];
endmodule
