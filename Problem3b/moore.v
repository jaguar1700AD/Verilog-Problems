`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:18:31 04/23/2019 
// Design Name: 
// Module Name:    moore 
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
module moore(
    input data,
	 input clk,
    output reg out
    );
	 
	 reg [2:0] curr_state;
	 reg [2:0] next_state;
	 
	 initial begin
		curr_state = 3'b000;
	 end
	 
	 always @*
	 begin
		case(curr_state)
			3'b000 : next_state <= (data ? 3'b001 : 3'b000);
			3'b001 : next_state <= (data ? 3'b001 : 3'b010);
			3'b010 : next_state <= (data ? 3'b001 : 3'b011);
			3'b011 : next_state <= (data ? 3'b100 : 3'b000);
			3'b100 : next_state <= (data ? 3'b100 : 3'b100);
		endcase
		
		if (curr_state == 3'b100)
			out <= 1;
		else
			out <= 0;
	 end
	 
	 always @(posedge clk)
	 begin
		curr_state <= next_state;
	 end
	 
endmodule
