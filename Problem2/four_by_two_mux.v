`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:06:57 04/23/2019 
// Design Name: 
// Module Name:    four_by_two_mux 
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
module four_by_two_mux(
    input [3:0] data,
    input [1:0] select,
    output reg out
    );
	 
	 always @(data or select)
	 begin
      case (select)
         2'b00 : out <= data[0];
         2'b01 : out <= data[1];
         2'b10 : out <= data[2];
         2'b11 : out <= data[3];
      endcase
	 end


endmodule
