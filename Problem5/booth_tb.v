`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:40:47 04/23/2019 
// Design Name: 
// Module Name:    booth_tb 
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
module booth_tb(
    );
	
	reg [3:0] M;
   reg [3:0] Q;
   wire [7:0] A;

	booth_multiplier DUT(M, Q, A);
	
	initial begin
		M = 4'b0010; Q = 4'b0011;
		#10 M = 4'b0011; Q = 4'b1001;
		#10 M = 4'b0000; Q = 4'b0101;
		#10 $finish;
	end

endmodule
