`include"riscv_define.v"
module riscv_idu(
    input 	    [`INST_WIDTH-1:0]       inst,

    output                              branch,
    output                              jal,
    output                              jalr,

    output  	[`REG_WIDTH-1:0]        rd,
    output  	                        rd_wen,
    output  	[`REG_WIDTH-1:0]        rs1,
    output  	[`REG_WIDTH-1:0]        rs2,


    output      [`DATA_WIDTH-1:0]       imm,

    output      [`ALU_OPT_WIDTH-1:0]    alu_opt,
    output      [`SRC_SEL_WIDTH-1:0]    src_sel,
    output      [`LSU_OPT_WIDTH-1:0]    lsu_opt,
    output      [2:0]                   func_code

);

assign  branch  = (inst[6:0] == `BRANCH)    ? 1'b1 : 1'b0;
assign  jal     = (inst[6:0] == `JAL)       ? 1'b1 : 1'b0;
assign  jalr    = (inst[6:0] == `JALR)      ? 1'b1 : 1'b0;

riscv_id_reg riscv_id_reg_idu(
    .inst       (inst),
    .rd         (rd),
    .rd_wen     (rd_wen),
    .rs1        (rs1),
    .rs2        (rs2)
);

riscv_id_imm riscv_id_imm_idu(
    .inst      (inst),
    .imm       (imm)
);

riscv_id_opt riscv_id_opt_idu(
    inst        (inst     ),
    alu_opt     (alu_opt  ),
    src_sel     (src_sel  ),
    lsu_opt     (lsu_opt  ),
    func_code   (func_code)
);

endmodule
