`include"ysyx_23060077_define.v"
module ysyx_23060077_wbu(
	input       [`LSU_OPT_WIDTH-1:0]    lsu_opt							,
	input           										wbu_sys							,

	input       [`DATA_WIDTH-1:0]       exu_result					,
	input  	    [`DATA_WIDTH-1:0]       lsu_result					,
	input  	    [`DATA_WIDTH-1:0]       csr_result					,

	output      [`DATA_WIDTH-1:0]       wbu_result
);

assign wbu_result = wbu_sys ? csr_result : (|lsu_opt) ? lsu_result : exu_result;

endmodule
