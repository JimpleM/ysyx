`include"riscv_define.v"
module riscv_decode #(
    DATA_WIDTH = 1
) (
    input          [6:0]             opcode,

    output  reg    [2:0]             alu_type,
    output  reg                      wen,
    output  reg    [ADDR_WIDTH-1:0]  addr,
    output  reg    [DATA_WIDTH-1:0]  wdata,
    output  reg    [DATA_WIDTH-1:0]  rdata
);


parameter   NR_KEY      = 11;
parameter   KEY_LEN     = 7;
parameter   DATA_LEN    = 11;

riscv_mux#(
    NR_KEY      (NR_KEY), 
    KEY_LEN     (KEY_LEN), 
    DATA_LEN    ()
)riscv_mux_decode(
  .key             (opcode),
  .default_out      (0),
  .out             ({alu_type}),
  .lut({    LUI   , {ALU_NONE},
            AUIPC , {ALU_PC_IMM},
            JAL   , {ALU_PC_IMM},
            JALR  , {ALU_PC_IMM},
            BRANCH, {ALU_PC_IMM},
            LOAD  , {ALU_IMM},
            STORE , {ALU_IMM},
            OP_IMM, {ALU_IMM},
            OP    , {ALU_PC_IMM},
            FENCE , {ALU_NONE},
            SYS   , {ALU_NONE}
  })
);

endmodule