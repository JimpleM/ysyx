`include"ysyx_23060077_define.v"

module ysyx_23060077_pre_decode(
	input       [`YSYX_23060077_INST_WIDTH-1:0]   		ifu_inst        ,

	output 			[`YSYX_23060077_PRE_OPT_WIDTH-1:0] 		ifu_predecode		
	// output 		 																		ifu_jal 						,
	// output 		 																		ifu_jalr 						,
	// output 		 																		ifu_branch 					,
	// output 																				ifu_sys							,
	// output 																				ifu_csr_ecall				,
	// output 																				ifu_csr_mret				,
	// output 																				ifu_jump
);
assign ifu_predecode[`YSYX_23060077_PRE_JAL   ] = (ifu_inst[6:0] == 7'b11011_11);
assign ifu_predecode[`YSYX_23060077_PRE_JALR  ] = (ifu_inst[6:0] == 7'b11001_11);
assign ifu_predecode[`YSYX_23060077_PRE_BRANCH] = (ifu_inst[6:0] == 7'b11000_11);
wire sys = (ifu_inst[6:0] == 7'b11100_11);
assign ifu_predecode[`YSYX_23060077_PRE_SYS   ] = sys;
assign ifu_predecode[`YSYX_23060077_PRE_ECALL ] = sys&(ifu_inst[14:12] == 3'b000)&(~(|ifu_inst[31:20]));
assign ifu_predecode[`YSYX_23060077_PRE_MRET  ] = sys&(ifu_inst[14:12] == 3'b000)&(ifu_inst[31:20] == 12'b0011_0000_0010);


// assign  ifu_branch      = 
// assign  ifu_jal         = 
// assign  ifu_jalr        = 
// assign 	ifu_sys   	    = 
// assign  ifu_csr_ecall   = 
// assign  ifu_csr_mret    = 

// assign  ifu_jump        = ifu_branch | ifu_jal | ifu_jalr | ifu_csr_ecall | ifu_csr_mret;

// assign csr_ecall = (exu_inst[6:0] == `SYS && exu_inst[14:12] == 3'b000 && exu_inst[31:20] == 12'd0);
// assign csr_mret  = (exu_inst[6:0] == `SYS && exu_inst[14:12] == 3'b000 && exu_inst[31:20] == 12'b0011_0000_0010);
endmodule