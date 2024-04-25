`include"riscv_define.v"
module riscv_wbu(
    input       [`LSU_OPT_WIDTH-1:0]    lsu_opt,

    input       [`DATA_WIDTH-1:0]       exu_result,
    input  	    [`DATA_WIDTH-1:0]       lsu_result,
    input  	    [`DATA_WIDTH-1:0]       csr_result,
    output      [`DATA_WIDTH-1:0]       wbu_result
);

assign wbu_result = (lsu_opt == `LSU_OPT_NONE) ? exu_result : (lsu_opt == `LSU_OPT_SYS) ? csr_result : lsu_result;


endmodule
