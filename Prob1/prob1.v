`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:39:41 04/22/2019 
// Design Name: 
// Module Name:    prob1 
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
module prob1(
    input [7:0] data_in,
	 input clk,
	 input rst,
    output [2:0] count_out
    );
	 
	 reg finished;
	 reg [2:0] count;
	 reg [7:0] data;
	 
	 /*
	 integer i;
	 initial begin
		count = 3'b000;
		finished = 0;
		data[7:0] = data_in[7:0];
	 end
	*/
		
	 assign count_out[2:0] = count[2:0];
	 
	 /*
	 always @(posedge clk or posedge rst)
	 begin
		if (data[0] == 0 && finished == 0)
		begin
			count <= count + 1;
			data <= data >> 1;
		end
		else if (rst == 1)
		begin
			count <= 3'b000;
			finished <= 0;
			data <= data_in;
		end
		else
		begin
			finished <= 1;
		end
	 end
	*/
	
	always @(posedge clk or posedge rst)
	begin
		if (rst == 1) begin
			count <= 3'b000;
			finished <= 0;
			data <= data_in;
		end
		else begin
			if (data[0] == 0 && finished == 0)begin
				count <= count + 1;
				data <= data >> 1;
			end
			else begin
				finished <= 1;
			end
		end
	end

endmodule
