`include"ysyx_23060077_define.v"
module ysyx_23060077_wbu(
	input       [`YSYX_23060077_LSU_OPT_WIDTH-1:0]    lsu_opt							,
	input           																	wbu_sys							,

	input       [`YSYX_23060077_DATA_WIDTH-1:0]       exu_result					,
	input  	    [`YSYX_23060077_DATA_WIDTH-1:0]       lsu_result					,
	input  	    [`YSYX_23060077_DATA_WIDTH-1:0]       csr_result					,

	output      [`YSYX_23060077_DATA_WIDTH-1:0]       wbu_result
);

assign wbu_result = wbu_sys ? csr_result : (|lsu_opt) ? lsu_result : exu_result;

endmodule
