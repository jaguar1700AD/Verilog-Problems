`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:42:12 04/23/2019 
// Design Name: 
// Module Name:    div 
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
module div(
     input  signed[7:0] dividend,
     input  signed[3:0] divisor,
     output reg signed[7:0] quotient,
     output reg signed[3:0] remainder
    );
 

	reg signed[7:0] temp_dividend;
	reg signed[3:0] temp_divisor;

	always@(dividend,divisor)
	begin 
		temp_dividend = dividend;
		temp_divisor = divisor;
      quotient = temp_dividend/ temp_divisor;
		remainder = temp_dividend - (quotient *temp_divisor);
        if(remainder <0) 
		  begin
			remainder = remainder + temp_divisor;
			quotient = quotient - 1;
			end
	end

endmodule
