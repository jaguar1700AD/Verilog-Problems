`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:26:22 04/23/2019 
// Design Name: 
// Module Name:    mealy_tb 
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
module mealy_tb(
    );
	
	reg data;
	reg clk; 
	wire out;
	
	mealy DUT(data, clk, out);
	
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
