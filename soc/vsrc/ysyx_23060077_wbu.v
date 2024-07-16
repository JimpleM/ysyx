`include"ysyx_23060077_define.v"
module ysyx_23060077_wbu(
	input 			[`YSYX_23060077_WBU_OPT_WIDTH-1:0]    wbu_opt_bus					,
	input       [`YSYX_23060077_DATA_WIDTH-1:0]       exu_result					,
	input  	    [`YSYX_23060077_DATA_WIDTH-1:0]       lsu_result					,
	input  	    [`YSYX_23060077_DATA_WIDTH-1:0]       csr_result					,

	output      	       															wbu_rd_wen_req			,
	output      [`YSYX_23060077_DATA_WIDTH-1:0]       wbu_result
);

wire exu_flag = wbu_opt_bus[`YSYX_23060077_WBU_EXU];
wire lsu_flag = wbu_opt_bus[`YSYX_23060077_WBU_LSU];
wire csr_flag = wbu_opt_bus[`YSYX_23060077_WBU_CSR];

assign wbu_rd_wen_req = exu_flag | lsu_flag | csr_flag;
assign wbu_result = 
({`YSYX_23060077_DATA_WIDTH{exu_flag}} & exu_result ) |
({`YSYX_23060077_DATA_WIDTH{lsu_flag}} & lsu_result	) |
({`YSYX_23060077_DATA_WIDTH{csr_flag}} & csr_result	) ;



// assign wbu_result = wbu_sys ? csr_result : (|lsu_opt) ? lsu_result : exu_result;

endmodule
