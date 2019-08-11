`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:55:00 04/23/2019 
// Design Name: 
// Module Name:    D_latch 
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
module D_latch(
    input D,
    input enable,
    output Q,
    output Q_bar
    );
	
	wire Dn; wire Wa; wire Wb;
	
	not g1(Dn, D);
	and g2(Wa, enable, Dn);
	and g3(Wb, enable, D);
	nor g4(Q, Q_bar, Wa);
	nor g5(Q_bar, Q, Wb);

endmodule
