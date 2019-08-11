`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:44:07 04/23/2019 
// Design Name: 
// Module Name:    sixteen_by_four_mux_tb 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module sixteen_by_four_mux_tb(
    );

	reg [15:0] data;
   reg [3:0] select;
   wire out;
	
	sixteen_by_four_mux DUT(data, select, out);
	
	integer i;
	initial begin
		data = 16'b1101001110100111;
		
		for(i = 0; i < 16; i = i + 1)
		begin
			#10 select = i;
		end
		
	end
	
endmodule
