module projectCPU2021(
  clk,
  rst,
  wrEn,
  data_fromRAM,
  addr_toRAM,
  data_toRAM,
  PC,
  W
);

parameter SIZE = 13;

input clk, rst;

input wire [15:0] data_fromRAM;
output reg [15:0] data_toRAM;
output reg wrEn;

// 12 can be made smaller so that it fits in the FPGA
output reg [12:0] addr_toRAM;    
output reg [12:0] PC; // This has been added as an output for TB purposes 
output reg [15:0] W; // This has been added as an output for TB purposes

// Your design goes in here
reg [SIZE-1:0] PCNext;
reg [ 2:0] opcode, opcodeNext;
reg [12:0] operand1,operand1Next;
reg [ 2:0] state, stateNext;
reg [15:0] wNext;

always @(posedge clk)begin
	state    <= #1 stateNext;
	PC       <= #1 PCNext;
	opcode   <= #1 opcodeNext;
	operand1 <= #1 operand1Next;
	W        <= #1 wNext;
end

always @*begin
	stateNext    = state;
	PCNext       = PC;
	opcodeNext   = opcode;
	operand1Next = operand1;
	addr_toRAM   = 0;
	wrEn         = 0;
	data_toRAM   = 0;
	wNext        = W;

if(rst)
	begin
	stateNext    = 0;
	PCNext       = 0;
	opcodeNext   = 0;
	operand1Next = 0;
	addr_toRAM   = 0;
	wrEn         = 0;
	data_toRAM   = 0;
	wNext        = 0;
	end
else
	case(state)
		 0: begin         // "addr_toRAM = 0" => read first memory location 
				PCNext       = PC;
				opcodeNext   = opcode;
				operand1Next = 0;
				addr_toRAM   = PC;
				wrEn         = 0;
				data_toRAM   = 0;
				wNext        = W;
				stateNext    = 1;				
	    end
		 1: begin // take opcode and request W
		      PCNext       = PC;
				opcodeNext   = data_fromRAM[15:13];
				operand1Next = data_fromRAM[12:0];
				wrEn         = 0;
				data_toRAM   = 0;
			 	wNext        = W;
				if (operand1Next == 0 ) begin
					addr_toRAM = 2; 
					stateNext = 5;
				end	
			   else begin 
               addr_toRAM = operand1Next;      					
					if(opcodeNext == 3'b000) // ADD
						stateNext = 2;
					else if(opcodeNext == 3'b001) // NAND
						stateNext = 2;
					else if(opcodeNext == 3'b010) // SRRL
						stateNext = 2;
					else if(opcodeNext == 3'b011) // GE
						stateNext = 2;
					else if(opcodeNext == 3'b100) // SZ
						stateNext = 3;
					else if(opcodeNext == 3'b101) // CP2W
						stateNext = 2;
					else if(opcodeNext == 3'b110) // CPfW
						stateNext = 2;
					else if(opcodeNext == 3'b111) // JMP
						stateNext = 4;
				end	
	   end
		2: begin         // take *A 
			  PCNext       = PC + 1;
			  opcodeNext = opcode;
			  operand1Next = operand1;
			  stateNext = 0;
			  if (opcode == 3'b110) begin // CPfW
					wrEn = 1;
					addr_toRAM = operand1;
					data_toRAM = W;	
           end
           else begin
					wrEn = 0;			  
					if(opcode == 3'b000)  // ADD
						wNext = W + data_fromRAM;
					else if(opcode == 3'b001) // NAND
						wNext = ~(W & data_fromRAM);
					else if(opcode == 3'b010) begin // SRRL
						if(data_fromRAM < 16) 
							wNext = W >> data_fromRAM;
						else if(data_fromRAM >= 16 && data_fromRAM < 32)
							wNext = W << data_fromRAM[3:0];
						else if(data_fromRAM >= 32 && data_fromRAM < 48)
						   wNext = ((W >> data_fromRAM[3:0]) | (W << (16 - data_fromRAM[3:0]))); 
						else
 						   wNext = ((W << data_fromRAM[3:0]) | (W >> (16 - data_fromRAM[3:0]))); 			
			      end		
			      else if(opcode == 3'b011) // GE
						wNext = W >= data_fromRAM;
               else if(opcode == 3'b101) // CP2W
						wNext = data_fromRAM;
           end					
		end
		3:	begin
			opcodeNext   = opcode;
			operand1Next = operand1;
			wrEn         = 0;
			data_toRAM   = 0;
			stateNext    = 0;
			if (data_fromRAM == 0) 
		     PCNext = PC + 2; 
            else 
 			  PCNext = PC + 1;
		end
      4: begin
			PCNext       = data_fromRAM;
			opcodeNext   = opcode;
			operand1Next = operand1;
			wrEn         = 0;
			data_toRAM   = 0;
		   stateNext    = 0;			 
      end
		5: begin
			PCNext       = PC;
			opcodeNext   = opcode;
			if(opcode == 3'b000) // ADD
				stateNext = 2;
			else if(opcode == 3'b001) // NAND
				stateNext = 2;
		    else if(opcode == 3'b010) // SRRL
				stateNext = 2;
			else if(opcode == 3'b011) // GE
				stateNext = 2;
			else if(opcode == 3'b100) // SZ
				stateNext = 3;
			else if(opcode == 3'b101) // CP2W
				stateNext = 2;
			else if(opcode == 3'b110) // CPfW
				stateNext = 2;
			else if(opcode == 3'b111) // JMP
				stateNext = 4;
			operand1Next = data_fromRAM;
			wrEn         = 0;
			data_toRAM   = 0;
            addr_toRAM   = data_fromRAM;			
		end
      default: begin
        stateNext    = 0;
        PCNext       = 0;
        opcodeNext   = 0;
        operand1Next = 0;
        addr_toRAM   = 0;
        wrEn         = 0;
        data_toRAM   = 0;
		wNext        = 0;
      end		
	endcase
end	
endmodule
