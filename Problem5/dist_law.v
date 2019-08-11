`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:05:54 04/23/2019 
// Design Name: 
// Module Name:    dist_law 
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
module dist_law(
    input signed[3:0] a,
    input signed[3:0] b,
    input signed[3:0] c,
    output signed[7:0] out1,
    output signed[7:0] out2
    );
	 
	 wire [3:0] w1;
	 assign w1 = b + c;
	 booth_multiplier g1(.M(w1), .Q(a), .A(out1));
	 
	 wire [7:0] w21; wire [7:0] w22;
	 booth_multiplier g21(.M(a), .Q(b), .A(w21));
	 booth_multiplier g22(.M(a), .Q(c), .A(w22));
	 assign out2 = w21 + w22;

endmodule
