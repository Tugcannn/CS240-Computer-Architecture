module calc(clk, rst, validIn, dataIn, dataOut);
input clk, rst, validIn;
input  [7:0] dataIn;
output reg [7:0] dataOut;

reg [1:0] state, stateNext;
reg [7:0] number, numberNext, dataOutNext;
reg [2:0] operation, operationNext;

reg validIn_d; // validIn delayed by single clk cycle (new)
wire validIn_pos; // positve edge of validIn (new)

assign validIn_pos = validIn & ~validIn_d; // Use this as the "enter" button (new)

always @(posedge clk) begin
    state       <= #1 stateNext;
    number      <= #1 numberNext;
    operation   <= #1 operationNext;
    dataOut     <= #1 dataOutNext;
    validIn_d   <= #1 validIn; // (new)
end

always @(*) begin
    stateNext     = state;
    numberNext    = number;
    operationNext = operation;
    dataOutNext   = dataOut;
    if(rst) begin
      stateNext = 0  ;
		numberNext = 0 ;
		operationNext = 0 ;
		dataOutNext = 0 ;
    end else begin
        case(state)
            0: // WAITING FIRST OPERAND
            begin 
               if ( validIn_pos == 0) begin 
					 dataOutNext = dataOut;
					 stateNext = 0;
					end
					else if  ( validIn_pos == 1) begin 
					 stateNext = 1;
					 dataOutNext = dataIn;
					 numberNext = dataIn;
					end
            end
            1: // WAITING OPERATION
            begin 
               if ( validIn_pos == 0) begin 
					 stateNext = 1;
					 dataOutNext = number;	
					end
					else if  ( validIn_pos == 1 && (dataIn == 3 || dataIn == 4 || dataIn == 5)) begin 
					       if (dataIn == 3) begin
							   dataOutNext = number * number;
								stateNext = 0;
							 end
                      else if (dataIn == 4) begin
							   dataOutNext = number + 2;
								stateNext = 0;
							 end
                      else if (dataIn == 5) begin
							   dataOutNext = number - 2;
								stateNext = 0;
							 end						 
					end
					else if  ( validIn_pos == 1 && (dataIn == 0 || dataIn == 1 || dataIn == 2)) begin
					  operationNext = dataIn;
					  dataOutNext = dataIn;
					  stateNext = 2;
					end
            end
            2: // WAITING SECOND OPERAND (IF NEEDED)
            begin 
               if ( validIn_pos == 0) begin 
					  stateNext = 2;
					  dataOutNext = operation;
					end
					else if ( validIn_pos == 1) begin 
					      
					      if (operation == 0) begin
							   dataOutNext = number * dataIn;
								stateNext = 0;
							end
                     else if (operation == 1) begin
							   dataOutNext = number + dataIn;
								stateNext = 0 ;
							end
                     else if (operation == 2) begin
							   dataOutNext = number - dataIn;
								stateNext = 0;
							end
					end
            end 
        endcase
    end
end
endmodule
