`include"ysyx_23060077_define.v"
module ysyx_23060077_wbu(
	input 																						clock 							,
	input 																						reset 							,

	input 			[`YSYX_23060077_WBU_OPT_WIDTH-1:0]    wbu_opt_bus					,
	input       [`YSYX_23060077_DATA_WIDTH-1:0]       exu_result					,
	input  	    [`YSYX_23060077_DATA_WIDTH-1:0]       lsu_result					,
	input  	    [`YSYX_23060077_DATA_WIDTH-1:0]       csr_result					,

	input 																						ex_to_wb						,

	output      	       															wbu_rd_wen					,
	output      [`YSYX_23060077_DATA_WIDTH-1:0]       wbu_result
);

wire exu_flag = wbu_opt_bus[`YSYX_23060077_WBU_EXU];
wire lsu_flag = wbu_opt_bus[`YSYX_23060077_WBU_LSU];
wire csr_flag = wbu_opt_bus[`YSYX_23060077_WBU_CSR];

wire wbu_rd_wen_req = exu_flag | lsu_flag | csr_flag;
assign wbu_result = 
({`YSYX_23060077_DATA_WIDTH{exu_flag}} & exu_result ) |
({`YSYX_23060077_DATA_WIDTH{lsu_flag}} & lsu_result	) |
({`YSYX_23060077_DATA_WIDTH{csr_flag}} & csr_result	) ;

reg  wbu_doing;
assign wbu_rd_wen = wbu_rd_wen_req & wbu_doing;
always @(posedge clock) begin
	if(reset)begin
		wbu_doing <= 'd0;
	end
	else begin
		if(ex_to_wb)begin
			wbu_doing <= 'd1;
		end
		else begin
			wbu_doing <= 'd0;
		end
	end
end

// assign wbu_result = wbu_sys ? csr_result : (|lsu_opt) ? lsu_result : exu_result;

endmodule
