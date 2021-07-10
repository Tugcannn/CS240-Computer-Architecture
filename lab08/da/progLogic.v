module progLogic(clk, rst, switch, enter, addrWr, dataWr, wrEn);

input clk, rst;
input [7:0] switch;
input enter;

wire [7:0] addrWr;
wire [15:0] dataWr;
wire wrEn;