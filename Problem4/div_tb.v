`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:43:55 04/23/2019 
// Design Name: 
// Module Name:    div_tb 
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
module div_tb(
    );
	 
	 reg [7:0] a;
    reg [3:0] b;
    wire [7:0] c;
	 wire [3:0] d;
	 
	 div DUT(.dividend(a), .divisor(b), .quotient(c), .remainder(d));
	
	initial begin // Divisor (b) should not be nagative
		a = 8'b00011010; b = 4'b0101; // 26 / 5
		#10 a = 8'b00011011; b = 4'b0100; // 27 / 4 
		#10 a = 8'b10011010; b = 4'b0111; // -102 / 7 
		#10 a = 8'b10011010; b = 4'b0010; // -102 / 2
		#10 $finish;
	end

endmodule
