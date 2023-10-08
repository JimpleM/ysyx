`include"riscv_define.vh"
module ysyx_23060077_riscv_id_opt(
    input 	    [`INST_WIDTH-1:0]       inst,
    output  	  [`ALU_OPT_WIDTH-1:0]    alu_opt,
    output  	  [`SRC_SEL_WIDTH-1:0]    src_sel,
    output  	  [`LSU_OPT_WIDTH-1:0]    lsu_opt
);


ysyx_23060077_riscv_mux#(
    NR_KEY      (11), 
    KEY_LEN     (10), 
    DATA_LEN    (`ALU_OPT_WIDTH+`SRC_SEL_WIDTH+`LSU_OPT_WIDTH)
)riscv_mux_decode(
  .key              ({inst[6:0],inst[14:12]}),  //opcode + func_code
  .out              ({rs1,rs2,rd,rd_wen}),
  .lut({  `LUI   , {},
          `AUIPC , {},
          `JAL   , {},
          `JALR  , {},
          `BRANCH, {},
          `LOAD  , {},
          `STORE , {},
          `OP_IMM, {},
          `OP    , {},
          `FENCE , {},
          `SYS   , {}
  })
);


endmodule