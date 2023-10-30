`include"riscv_define.v"
module riscv_wbu(
    input       [`LSU_OPT_WIDTH-1:0]    lsu_opt,

    input       [`DATA_WIDTH-1:0]       exu_result,
    input  	    [`DATA_WIDTH-1:0]       lsu_result,
    output      [`DATA_WIDTH-1:0]       wbu_result
);

assign wbu_result = (lsu_opt == 2'd0) ? exu_result : lsu_result;


endmodule
