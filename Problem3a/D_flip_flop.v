`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    04:12:22 04/23/2019 
// Design Name: 
// Module Name:    D_flip_flop 
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
module D_flip_flop(
    input D,
    input clk,
	 input rst, // Synchronous reset
    output Q,
    output Q_bar
    );
	
	wire P; wire P_bar;
	wire clk_n; wire pseudo_D; wire rst_n;
	
	not(clk_n, clk);
	not(rst_n, rst);
	
	and(pseudo_D, rst_n, D);
	D_latch g1(.D(pseudo_D), .enable(clk_n), .Q(P), .Q_bar(P_bar));
	D_latch g2(.D(P), .enable(clk), .Q(Q), .Q_bar(Q_bar));
	
endmodule
