module progLogic(clk, rst, switch, enter, addrWr, dataWr, wrEn);

input clk, rst;
input [7:0] switch;
input enter;

output reg [7:0] addrWr;
output reg [15:0] dataWr;
output reg wrEn;

reg [7:0] addrWrNext;
reg [15:0] dataWrNext;
reg wrEnNext;
reg enter_d;
reg [1:0] state, stateNext;
wire enter_pos;

assign enter_pos = enter & ~enter_d;


always@(posedge clk) begin
    addrWr <= addrWrNext;
    dataWr <= dataWrNext;
    wrEn   <= wrEnNext;
    state <= stateNext;
    enter_d <= enter;

end

always@(*)begin 
  addrWrNext = addrWr ;
  dataWrNext = dataWr ;
  wrEnNext = wrEn ;
  stateNext = state;

 
      if(rst)begin
        addrWrNext = 0;
        dataWrNext = 0;
        wrEnNext = 0;
        stateNext = 0;
       end
        else begin
          case(state)
        0: begin
            if(enter_pos) begin
                dataWrNext = {switch, 0};
                stateNext = 1;
            end
        end

        1: begin
            if(enter_pos) begin
                dataWrNext = {dataWr[15:8], switch};
                stateNext = 2;
                wrEnNext = 1;
            end
        end

        2: begin
            wrEnNext = 0;
            stateNext = 0;
            addrWrNext = addrWr + 1;
        end

        endcase

       end

end

endmodule