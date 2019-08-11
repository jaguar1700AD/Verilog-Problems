`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:24:42 04/23/2019 
// Design Name: 
// Module Name:    mealy 
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
module mealy(
		input data,
		input clk,
		input rst, // Synchronous reset
		output out
    );
	 
	 wire [2:0] curr_state; wire [2:0] curr_state_bar;
	 wire [2:0] next_state;
	 wire data_bar;
	 
	 not(data_bar, data);
	
	 wire w2;
	 and(w2, curr_state[1], curr_state[0], data);
	 or(next_state[2], curr_state[2], w2);
	 
	 wire w11;
	 and(w11, curr_state[1], curr_state_bar[0], data_bar);
	 wire w12;
	 and(w12, curr_state_bar[1], curr_state[0], data_bar);
	 or(next_state[1], w11, w12);
	 
	 wire w01;
	 and(w01, curr_state[1], curr_state_bar[0]);
	 wire w02;
	 and(w02, curr_state_bar[2], curr_state_bar[1], data);
	 or(next_state[0], w01, w02);
	 
	 D_flip_flop F2(.D(next_state[2]), .clk(clk), .rst(rst), .Q(curr_state[2]), .Q_bar(curr_state_bar[2]));
	 D_flip_flop F1(.D(next_state[1]), .clk(clk), .rst(rst), .Q(curr_state[1]), .Q_bar(curr_state_bar[1]));
	 D_flip_flop F0(.D(next_state[0]), .clk(clk), .rst(rst), .Q(curr_state[0]), .Q_bar(curr_state_bar[0]));
	 
	wire w_out;
	and(w_out, curr_state_bar[2], curr_state[1], curr_state[0], data);
	or(out, w_out, curr_state[2]);

endmodule
