`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:27:33 04/22/2019 
// Design Name: 
// Module Name:    prob1_tb 
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
module prob1_tb(
    );
		
	reg clk;
	reg rst;
	reg [7:0] data_in;
	wire [2:0] count_out;
	
	prob1 DUT(data_in, clk, rst, count_out);
	
	initial 
	begin
		clk = 1'b0; 
		forever #1 clk = ~clk;
	end
	
	initial
	begin
		rst = 0;
		data_in = 8'b00101101; rst = 1; #1; rst = 0;
		#20 data_in = 8'b01001100; rst = 1; #1; rst = 0;
		#20 data_in = 8'b00100000; rst = 1; #1; rst = 0;
		#20 data_in = 8'b11101100; rst = 1; #1; rst = 0;
		#20 data_in = 8'b10000000; rst = 1; #1; rst = 0;
		#20 $finish;	
	end

endmodule
