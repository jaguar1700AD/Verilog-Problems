`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:15:14 04/23/2019 
// Design Name: 
// Module Name:    four_by_two_mux_tb 
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
module four_by_two_mux_tb(
    );
	reg [3:0] data;
   reg [1:0] select;
   wire out;
	
	four_by_two_mux DUT(data, select, out);
	
	initial begin
		data = 4'b1101;
		
		#100 select = 2'b00;
		#100 select = 2'b01;
		#100 select = 2'b10;
		#100 select = 2'b11;
		
	end

endmodule
