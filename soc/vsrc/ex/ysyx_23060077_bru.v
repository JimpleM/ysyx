module ysyx_23060077_bru(
  input       [`YSYX_23060077_DATA_WIDTH-1:0]   adder_sum 		  ,
	input                                         adder_carry 	  ,
  input                                         adder_overflow  ,

  input                                         branch          ,
  input       [2:0]                             funct3          ,
  output  reg                                   branch_taken    
);

// 将每个bit或起来取反
wire zero_flag    = ~(|adder_sum);
wire slt_signed   = adder_sum[`YSYX_23060077_DATA_WIDTH-1] ^ adder_overflow;
wire slt_unsigned = ~adder_carry;

always @(*) begin
	case({branch,funct3})
		{1'b1,3'b000} : branch_taken = zero_flag                    ;
		{1'b1,3'b001} : branch_taken = !zero_flag                   ;
		{1'b1,3'b100} : branch_taken = slt_signed & (~zero_flag)    ;
		{1'b1,3'b101} : branch_taken = !slt_signed | zero_flag      ;
		{1'b1,3'b110} : branch_taken = slt_unsigned & (~zero_flag)  ;
		{1'b1,3'b111} : branch_taken = !slt_unsigned | zero_flag    ;
		default:    		branch_taken = 'd0; 
	endcase
end


endmodule