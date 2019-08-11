`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:05:26 04/23/2019 
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
			3'b000 : begin next_state <= (data ? 3'b001 : 3'b000); out <= 0; end
			3'b001 : begin next_state <= (data ? 3'b001 : 3'b010); out <= 0; end
			3'b010 : begin next_state <= (data ? 3'b001 : 3'b011); out <= 0; end
			3'b011 : begin next_state <= (data ? 3'b100 : 3'b000); out <= (data ? 1 : 0); end
			3'b100 : begin next_state <= (data ? 3'b100 : 3'b100); out <= 1; end
		endcase
	 end
	 
	 always @(posedge clk)
	 begin
		curr_state <= next_state;
	 end

endmodule
