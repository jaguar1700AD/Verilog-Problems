`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    04:01:23 04/23/2019 
// Design Name: 
// Module Name:    D_latch_tb 
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
module D_latch_tb(
    );

	reg D; reg enable;
	wire Q; wire Q_bar;
	
	D_latch DUT(D, enable, Q, Q_bar);
	
	initial begin
		enable = 0; D = 0;
		#10 D = 1;
		#10 D = 0;
		#10 enable = 1;
		#10 D = 1;
		#10 D = 0;
		#10 $finish;
	end
	
endmodule
