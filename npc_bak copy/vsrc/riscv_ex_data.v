`include"riscv_define.v"
module riscv_ex_data #(
    DATA_WIDTH = 32,
    INST_WIDTH = 32
) (
    input       [INST_WIDTH-1:0]        inst_id_to_ex,

    input 	    [DATA_WIDTH-1:0]        rs1_data_id_to_ex,
    input 	    [DATA_WIDTH-1:0]        rs2_data_id_to_ex,
    input 	    [DATA_WIDTH-1:0]        imm_id_to_ex,

    output reg 	[DATA_WIDTH-1:0]        alu_a_data_ex,
    output reg 	[DATA_WIDTH-1:0]        alu_b_data_ex
);

wire [6:0]   opcode;
assign opcode 	= inst[6:0];

riscv_mux#(
    NR_KEY      (11), 
    KEY_LEN     (7), 
    DATA_LEN    (DATA_WIDTH+DATA_WIDTH)
)riscv_mux_ex_data(
  .key              (opcode),
  .out              ({alu_a_data_ex, alu_b_data_ex}),
  .lut({    LUI   , {rs1_data_id_to_ex, rs2_data_id_to_ex},
            AUIPC , {rs1_data_id_to_ex, rs2_data_id_to_ex},
            JAL   , {rs1_data_id_to_ex, rs2_data_id_to_ex},
            JALR  , {rs1_data_id_to_ex, rs2_data_id_to_ex},
            BRANCH, {rs1_data_id_to_ex, rs2_data_id_to_ex},
            LOAD  , {rs1_data_id_to_ex, imm_id_to_ex},
            STORE , {rs1_data_id_to_ex, imm_id_to_ex},
            OP_IMM, {rs1_data_id_to_ex, imm_id_to_ex},
            OP    , {rs1_data_id_to_ex, rs2_data_id_to_ex},
            FENCE , {rs1_data_id_to_ex, rs2_data_id_to_ex},
            SYS   , {rs1_data_id_to_ex, rs2_data_id_to_ex}
  })
);

endmodule