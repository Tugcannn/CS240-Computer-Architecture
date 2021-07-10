module knightRider(clk, rst, dataOut);

input clk, rst;
output reg [7:0] dataOut;

reg [21:0] counter, counterNext;
reg [ 7:0] dataOutNext;
reg  flag,flagNext;

parameter COUNT = 22'hF;

// registers
always @(posedge clk) begin
	counter <=  counterNext;
	dataOut <=  dataOutNext;
	flag <=  flagNext;
end

always @(*) begin
	dataOutNext = dataOut;
	counterNext = counter;
	flagNext = flag;
	if(rst) begin 
		//WRITE YOUR CODE HERE (3 Lines)
		 dataOutNext = 8'b10000000;
		 counterNext = 0;
		 flagNext = 0 ;
		
			
	end
	else if(counter == COUNT -1) begin
		//WRITE YOUR CODE HERE (as many lines as necessary)
		if( flagNext == 0 ) begin
		dataOutNext = {dataOut[0], dataOut[7:1]};
        counterNext = 0; 
		
		    if(dataOutNext == 8'b00000001) begin
			 flagNext = 1 ;
			 end
		 end
		
		else begin
		dataOutNext = {dataOut[6:0], dataOut[7]};
	   counterNext = 0;
		
          if(dataOutNext == 8'b10000000) begin
          flagNext = 0 ;
           end			  
		  end
	end
	else begin
		counterNext = counter +1;
	end
end

endmodule 

