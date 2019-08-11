`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:33:28 04/23/2019 
// Design Name: 
// Module Name:    moore_tb 
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
module moore_tb(
    );
	
	reg data;
	reg clk; 
	wire out;
	
	moore DUT(data, clk, out);
	
	initial begin
		clk = 1'b0;
		forever #5 clk = ~clk; 
	end
	
	initial begin
		#2 data = 1;
		#1 data = 0;
		#1 data = 1;
		#10 data = 0;
		#10 data = 0;
		#10 data = 1;
		#10 data = 0;
		#10 data = 0;
		#10 $finish;
	end

endmodule
