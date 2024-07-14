module ysyx_23060077_bru(
  input       							   									zero_flag      	,
	input                                         signed_flag    	,
  input                                         unsigned_flag  	,

  input                                         branch          ,
  input       [2:0]                             funct3          ,
  output  reg                                   branch_taken    
);


always @(*) begin
	case({branch,funct3})
		{1'b1,3'b000} : branch_taken = zero_flag      ;
		{1'b1,3'b001} : branch_taken = !zero_flag     ;
		{1'b1,3'b100} : branch_taken = signed_flag    ;
		{1'b1,3'b101} : branch_taken = !signed_flag   ;
		{1'b1,3'b110} : branch_taken = unsigned_flag  ;
		{1'b1,3'b111} : branch_taken = !unsigned_flag ;
		default:    		branch_taken = 'd0; 
	endcase
end


endmodule