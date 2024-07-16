`include"ysyx_23060077_define.v"

module ysyx_23060077_pre_decode(
	input       [`YSYX_23060077_INST_WIDTH-1:0]   		ifu_inst        ,

	output 			[`YSYX_23060077_PRE_OPT_WIDTH-1:0] 		ifu_predecode		
);
assign ifu_predecode[`YSYX_23060077_PRE_JAL   ] = (ifu_inst[6:0] == 7'b11011_11);
assign ifu_predecode[`YSYX_23060077_PRE_JALR  ] = (ifu_inst[6:0] == 7'b11001_11);
assign ifu_predecode[`YSYX_23060077_PRE_BRANCH] = (ifu_inst[6:0] == 7'b11000_11);
assign ifu_predecode[`YSYX_23060077_PRE_FENCE_I] = (ifu_inst[6:0] == 7'b00011_11)? ifu_inst[12] : 1'b0;
wire sys = (ifu_inst[6:0] == 7'b11100_11);
assign ifu_predecode[`YSYX_23060077_PRE_SYS   ] = sys;
assign ifu_predecode[`YSYX_23060077_PRE_ECALL ] = sys&(ifu_inst[14:12] == 3'b000)&(~(|ifu_inst[31:20]));
assign ifu_predecode[`YSYX_23060077_PRE_MRET  ] = sys&(ifu_inst[14:12] == 3'b000)&(ifu_inst[31:20] == 12'b0011_0000_0010);


endmodule