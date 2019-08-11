`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:11:27 04/23/2019 
// Design Name: 
// Module Name:    dist_law_tb 
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
module dist_law_tb(
    );
	 
	 reg [3:0] a;
    reg [3:0] b;
    reg [3:0] c;
    wire [7:0] out1;
    wire [7:0] out2;
	 
	 dist_law DUT(a, b, c, out1, out2);
	 
	 initial begin // Give b and c such that b + c is a 4 bit signed binary number (between -8 and +7)
		a = 4'b1001; b = 4'b0010; c = 4'b1111; // 2, -1
		#10 a = 4'b1011; b = 4'b0101; c = 4'b1000; // 5, -8 
		#10 a = 4'b1000; b = 4'b1010; c = 4'b0110; // -6, 6
		#10 $finish;
	 end


endmodule
