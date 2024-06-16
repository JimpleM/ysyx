`include "ysyx_23060077_define.v"
`include"ysyx_23060077_axi_define.v"

module ysyx_23060077_pre_decode(
	input       [`INST_WIDTH-1:0]       ifu_inst           	,

	output 		 													ifu_jal 						,
	output 		 													ifu_jalr 						,
	output 		 													ifu_branch 					,
	output 															ifu_csr_ecall				,
	output 															ifu_csr_mret				,

	output 															ifu_jump			  

);

wire ifu_sys;
assign  ifu_branch      = (ifu_inst[6:0] == 7'b11000_11)    ? 1'b1 : 1'b0;
assign  ifu_jal         = (ifu_inst[6:0] == 7'b11011_11)       ? 1'b1 : 1'b0;
assign  ifu_jalr        = (ifu_inst[6:0] == 7'b11001_11)      ? 1'b1 : 1'b0;
assign 	ifu_sys   	    = (ifu_inst[6:0] == 7'b11100_11 && ifu_inst[14:12] == 3'b000);
assign  ifu_csr_ecall   = ifu_sys&(~(|ifu_inst[31:20]));
assign  ifu_csr_mret    = ifu_sys&(ifu_inst[31:20] == 12'b0011_0000_0010);

assign  ifu_jump        = ifu_branch | ifu_jal | ifu_jalr | ifu_csr_ecall | ifu_csr_mret;

// assign csr_ecall = (exu_inst[6:0] == `SYS && exu_inst[14:12] == 3'b000 && exu_inst[31:20] == 12'd0);
// assign csr_mret  = (exu_inst[6:0] == `SYS && exu_inst[14:12] == 3'b000 && exu_inst[31:20] == 12'b0011_0000_0010);
endmodule