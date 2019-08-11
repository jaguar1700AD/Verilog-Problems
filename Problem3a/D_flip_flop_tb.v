`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    04:15:56 04/23/2019 
// Design Name: 
// Module Name:    D_flip_flop_tb 
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
module D_flip_flop_tb(
    );
	 
	 reg D; reg clk; reg rst;
	 wire Q; wire Q_bar;
	 
	 D_flip_flop DUT(D, clk, rst, Q, Q_bar);
	 
	 initial begin
		clk = 0; rst = 0;
		forever #10 clk = ~clk; // T = 20ns
	 end
	 
	 initial begin
		D = 0;
		#7 D = 1;
		#7 D = 0;
		#7 D = 1;
		#7 D = 0;
		#7 D = 1;
		#7 D = 1;
		#7 rst = 1; 
		#7 $finish;
	 end


endmodule
