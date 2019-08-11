# Verilog-Problems
Verilog Problems done as part of hardware lab

The Problems are:

1.    Write a Verilog code that contains two registers (data and count). The data register is an 8-bit register. The program checks the LSB of the data register to be set and terminates. If the LSB of the data is reset, then it performs logical right shift operations until the terminating condition is met. Find the number of shift operations performed on the random test data (at least 5 Data after a certain time interval) using the while loop and count register in this context.

2.    Design a 16*4 mux from using 4*2 mux.
Input consists of two arrays:
         a. Data consisting of an array of size 16.
         b. Select lines consisting of an array of size 4.
Implement 4*2 mux in Verilog and then call its module within the module for 16*4 mux.
Write test bench to simulate the behavior of the code.

3.    
            a.    Write structural Verilog code to implement Mealy and Moore FSM to find if the input contains '1001'. For example, if the input is 00101000, the output should be 0. If the input is 00100101, the output should be 1.
            b.    Implement the above Mealy and Moore FSM using behavioral Verilog code.

4.    Write a Verilog code that divides an 8-bit number by 4-bit number (Consider signed representation).

5.    Verify the distributive law over addition operator and multiplication operator. Note: Use booth's multiplier for performing the multiplication.
