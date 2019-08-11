`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:37:21 04/23/2019 
// Design Name: 
// Module Name:    booth_multiplier 
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
module booth_multiplier(

	 input signed[3:0] M,
    input signed[3:0] Q,
    output signed[7:0] A
    
	 );
   
	reg signed[7:0] A;
	 reg signed[7:0] out;
	 
	 integer n;
	 reg q1, q0;
	 reg signed[3:0] M1;
	
	 always @(M, Q)
	 begin
	 
	 q1 = Q[0];
	 q0 = 1'd0;
	 out[3:0] = Q;
	 out[7:4] = 4'd0;
	 M1 = -M;
	 for(n = 4; n >= 1; n = n - 1)
	 begin
		if (q1 == 0)
		begin
			if (q0 == 1)
			begin
				out[7:4] = out[7:4] + M;
			end
		end
		if (q1 == 1)
		begin
			if (q0 == 0)
			begin
				out[7:4] = out[7:4] + M1;
			end
		end
		q0 = out[0];
		out = out >> 1;
		out[7] = out[6];
		q1 = out[0];
			
	 end
	 
	 A = out;
	 
	 end

endmodule
