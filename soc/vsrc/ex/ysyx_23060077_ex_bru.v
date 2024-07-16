module ysyx_23060077_ex_bru(
  input       [`YSYX_23060077_ALU_OPT_WIDTH-1:0] 	alu_opt_bus			,
  input       							   										zero_flag      	,
	input                                         	signed_flag    	,
  input                                         	unsigned_flag  	,
  output                                     			branch_taken    
);

// SUB: 	BIT0=INST_BNE 	~BIT0=INST_BEQ
// SLT: 	BIT0=INST_BGE 	~BIT0=INST_BLT
// SLTU: 	BIT0=INST_BGEU 	~BIT0:INST_BLTU
wire branch = alu_opt_bus[`YSYX_23060077_ALU_BRANCH];

assign branch_taken = 
(branch & alu_opt_bus[`YSYX_23060077_ALU_SUB ]  & ~alu_opt_bus[`YSYX_23060077_ALU_BRU_FUNC3 ] &  zero_flag     ) |
(branch & alu_opt_bus[`YSYX_23060077_ALU_SUB ]  &  alu_opt_bus[`YSYX_23060077_ALU_BRU_FUNC3 ] & ~zero_flag     ) |
(branch & alu_opt_bus[`YSYX_23060077_ALU_SLT ]  & ~alu_opt_bus[`YSYX_23060077_ALU_BRU_FUNC3 ] &  signed_flag   ) |
(branch & alu_opt_bus[`YSYX_23060077_ALU_SLT ]  &  alu_opt_bus[`YSYX_23060077_ALU_BRU_FUNC3 ] & ~signed_flag   ) |
(branch & alu_opt_bus[`YSYX_23060077_ALU_SLTU ] & ~alu_opt_bus[`YSYX_23060077_ALU_BRU_FUNC3 ] &  unsigned_flag ) |
(branch & alu_opt_bus[`YSYX_23060077_ALU_SLTU ] &  alu_opt_bus[`YSYX_23060077_ALU_BRU_FUNC3 ] & ~unsigned_flag ) ;


endmodule