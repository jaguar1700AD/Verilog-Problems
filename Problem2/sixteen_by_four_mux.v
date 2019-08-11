`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:30:31 04/23/2019 
// Design Name: 
// Module Name:    sixteen_by_four_mux 
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
module sixteen_by_four_mux(
    input [15:0] data,
    input [3:0] select,
    output out
    );
	 
	 wire [3:0] W;
	 
	four_by_two_mux mux0(.data(data[3:0]), .select(select[1:0]), .out(W[0]));
	four_by_two_mux mux1(.data(data[7:4]), .select(select[1:0]), .out(W[1]));
	four_by_two_mux mux2(.data(data[11:8]), .select(select[1:0]), .out(W[2]));
	four_by_two_mux mux3(.data(data[15:12]), .select(select[1:0]), .out(W[3]));
	
	four_by_two_mux mux4(.data(W[3:0]), .select(select[3:2]), .out(out));
	 
endmodule
