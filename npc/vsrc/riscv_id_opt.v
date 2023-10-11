`include"riscv_define.v"
module riscv_id_opt(
    input 	    [`INST_WIDTH-1:0]       inst,
    output      [`ALU_OPT_WIDTH-1:0]    alu_opt,
    output      [`SRC_SEL_WIDTH-1:0]    src_sel,
    output      [`LSU_OPT_WIDTH-1:0]    lsu_opt,
    output      [2:0]                   func_code
);

assign func_code = inst[14:12];

riscv_mux#(
    .NR_KEY      (33), 
    .KEY_LEN     (17), 
    .DATA_LEN    (`ALU_OPT_WIDTH)
)riscv_mux_id_alu_opt(
  .key              ({inst[6:0],inst[14:12],inst[31:25]}),  //opcode + func_code + [31:25]
  .default_out      (`ALU_ADD),
  .out              ({alu_opt}),
  .lut({  {`LUI   , 3'b???, 7'b???_????}, {`ALU_ADD},   //lui
          {`AUIPC , 3'b???, 7'b???_????}, {`ALU_ADD},   //auipc
          {`JAL   , 3'b???, 7'b???_????}, {`ALU_ADD},   //jal
          {`JALR  , 3'b???, 7'b???_????}, {`ALU_ADD},   //jalr
          {`BRANCH, 3'b000, 7'b???_????}, {`ALU_SUB},   //beq
          {`BRANCH, 3'b001, 7'b???_????}, {`ALU_SUB},   //bne
          {`BRANCH, 3'b100, 7'b???_????}, {`ALU_SUB},   //blt
          {`BRANCH, 3'b101, 7'b???_????}, {`ALU_SUB},   //bge
          {`BRANCH, 3'b110, 7'b???_????}, {`ALU_SUBU},  //bltu
          {`BRANCH, 3'b111, 7'b???_????}, {`ALU_SUBU},  //bgeu
          {`LOAD  , 3'b???, 7'b???_????}, {`ALU_ADD},   //lb,lh,lw,lbu,lhu
          {`STORE , 3'b???, 7'b???_????}, {`ALU_ADD},   //sb,sh,sw
          {`OP_IMM, 3'b000, 7'b???_????}, {`ALU_ADD},   //addi
          {`OP_IMM, 3'b010, 7'b???_????}, {`ALU_SUB},   //slti
          {`OP_IMM, 3'b011, 7'b???_????}, {`ALU_SUBU},  //sltiu
          {`OP_IMM, 3'b100, 7'b???_????}, {`ALU_XOR},   //xori
          {`OP_IMM, 3'b110, 7'b???_????}, {`ALU_OR},    //ori
          {`OP_IMM, 3'b111, 7'b???_????}, {`ALU_AND},   //andi
          {`OP_IMM, 3'b001, 7'b000_0000}, {`ALU_SLL},   //slli
          {`OP_IMM, 3'b101, 7'b000_0000}, {`ALU_SRL},   //srli
          {`OP_IMM, 3'b101, 7'b010_0000}, {`ALU_SRA},   //srai
          {`OP    , 3'b000, 7'b000_0000}, {`ALU_ADD},   // add
          {`OP    , 3'b000, 7'b010_0000}, {`ALU_SUB},   // sub
          {`OP    , 3'b001, 7'b000_0000}, {`ALU_SLL},   // sll
          {`OP    , 3'b010, 7'b000_0000}, {`ALU_SLT},   // slt
          {`OP    , 3'b011, 7'b000_0000}, {`ALU_SLTU},  //sltu
          {`OP    , 3'b100, 7'b000_0000}, {`ALU_XOR},   // xor
          {`OP    , 3'b101, 7'b000_0000}, {`ALU_SRL},   // srl
          {`OP    , 3'b101, 7'b010_0000}, {`ALU_SRA},   // sra
          {`OP    , 3'b110, 7'b000_0000}, {`ALU_OR },   // or
          {`OP    , 3'b111, 7'b000_0000}, {`ALU_AND},   // and
          {`FENCE , 3'b???, 7'b???_????}, {`ALU_AND},
          {`SYS   , 3'b???, 7'b???_????}, {`ALU_AND}
  })
);

riscv_mux#(
    .NR_KEY      (11), 
    .KEY_LEN     (7), 
    .DATA_LEN    (`SRC_SEL_WIDTH)
)riscv_mux_id_src_sel(
    .key              (inst[6:0]),//opcode
    .default_out      (`SRC_SEL_RS1_IMM),
    .out              (lsu_opt),
    .lut({  `LUI   ,{`SRC_SEL_RS1_IMM},
            `AUIPC ,{`SRC_SEL_PC_IMM},
            `JAL   ,{`SRC_SEL_PC_4},
            `JALR  ,{`SRC_SEL_PC_4},
            `BRANCH,{`SRC_SEL_RS1_2},
            `LOAD  ,{`SRC_SEL_RS1_IMM},
            `STORE ,{`SRC_SEL_RS1_IMM},
            `OP_IMM,{`SRC_SEL_RS1_IMM},
            `OP    ,{`SRC_SEL_RS1_2},
            `FENCE ,{`SRC_SEL_RS1_IMM},
            `SYS   ,{`SRC_SEL_RS1_IMM}
  })
);


riscv_mux#(
    .NR_KEY      (2), 
    .KEY_LEN     (7), 
    .DATA_LEN    (`LSU_OPT_WIDTH)
)riscv_mux_id_lsu_opt(
    .key              ({inst[6:0]}),//opcode
    .default_out      (`LSU_OPT_NONE),
    .out              (lsu_opt),
    .lut({  `LOAD  ,{`LSU_OPT_LOAD},
            `STORE ,{`LSU_OPT_STORE}
  })
);

endmodule


