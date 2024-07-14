module ysyx_23060077_bru(
  input       							   										zero_flag      	,
	input                                         	signed_flag    	,
  input                                         	unsigned_flag  	,
  input                                         	branch          ,
  input       [`YSYX_23060077_ALU_OPT_WIDTH-1:0] 	alu_opt_bus			,
  output                                     			branch_taken    
);

assign branch_taken = 
(branch & alu_opt_bus[`YSYX_23060077_ALU_SUB ]  & ~alu_opt_bus[`YSYX_23060077_ALU_BRU ] &  zero_flag     ) |
(branch & alu_opt_bus[`YSYX_23060077_ALU_SUB ]  &  alu_opt_bus[`YSYX_23060077_ALU_BRU ] & ~zero_flag     ) |
(branch & alu_opt_bus[`YSYX_23060077_ALU_SLT ]  & ~alu_opt_bus[`YSYX_23060077_ALU_BRU ] &  signed_flag   ) |
(branch & alu_opt_bus[`YSYX_23060077_ALU_SLT ]  &  alu_opt_bus[`YSYX_23060077_ALU_BRU ] & ~signed_flag   ) |
(branch & alu_opt_bus[`YSYX_23060077_ALU_SLTU ] & ~alu_opt_bus[`YSYX_23060077_ALU_BRU ] &  unsigned_flag ) |
(branch & alu_opt_bus[`YSYX_23060077_ALU_SLTU ] &  alu_opt_bus[`YSYX_23060077_ALU_BRU ] & ~unsigned_flag ) ;



// always @(*) begin
// 	case({branch,funct3})
// 		{1'b1,3'b000} : branch_taken = zero_flag      ;
// 		{1'b1,3'b001} : branch_taken = !zero_flag     ;
// 		{1'b1,3'b100} : branch_taken = signed_flag    ;
// 		{1'b1,3'b101} : branch_taken = !signed_flag   ;
// 		{1'b1,3'b110} : branch_taken = unsigned_flag  ;
// 		{1'b1,3'b111} : branch_taken = !unsigned_flag ;
// 		default:    		branch_taken = 'd0; 
// 	endcase
// end


endmodule