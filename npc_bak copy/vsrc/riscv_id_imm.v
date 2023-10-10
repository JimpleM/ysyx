`include"riscv_define.vh"
module ysyx_23060077_riscv_id_imm(
    input 	    [6:0]               opcode,
    output  	[`DATA_WIDTH-1:0]   imm
);

wire [`DATA_WIDTH-1:0]  imm_typeI;
wire [`DATA_WIDTH-1:0]  imm_typeU;
wire [`DATA_WIDTH-1:0]  imm_typeS;
wire [`DATA_WIDTH-1:0]  imm_typeB;
wire [`DATA_WIDTH-1:0]  imm_typeJ;
wire [`DATA_WIDTH-1:0]  imm_typeR;
wire [`DATA_WIDTH-1:0]  imm_type_NONE;

assign imm_typeR        = {`DATA_WIDTH{1'b0}};
assign imm_type_NONE    = {`DATA_WIDTH{1'b0}};


ysyx_23060077_riscv_id_imm_ext #(
    .INPUT_WIDTH    (12)
)riscv_id_imm_ext_typeI(
    imm_in      (inst[31:20]),
    imm_out     (imm_typeI)
);
// TO MODIFIED
ysyx_23060077_riscv_id_imm_ext #(
    .INPUT_WIDTH    (32)
)riscv_id_imm_ext_typeU(
    imm_in      ({inst[31:12],{12{1'b0}}}),
    imm_out     (imm_typeU)
);

ysyx_23060077_riscv_id_imm_ext #(
    .INPUT_WIDTH    (12)
)riscv_id_imm_ext_typeS(
    imm_in      ({inst[31:25],inst[11:7]}),
    imm_out     (imm_typeS)
);

ysyx_23060077_riscv_id_imm_ext #(
    .INPUT_WIDTH    (13)
)riscv_id_imm_ext_typeB(
    imm_in      ({inst[31],inst[7],inst[30:25],inst[11:8],1'b0}),
    imm_out     (imm_typeB)
);

ysyx_23060077_riscv_id_imm_ext #(
    .INPUT_WIDTH    (21)
)riscv_id_imm_ext_typeJ(
    imm_in      ({inst[31],inst[19:12],inst[20],inst[30:21],1'b0}),
    imm_out     (imm_typeJ)
);

ysyx_23060077_riscv_mux#(
    .NR_KEY      (11), 
    .KEY_LEN     (7), 
    .DATA_LEN    (`DATA_WIDTH)
)riscv_mux_decode(
    .key              (opcode),
    .out              (imm),
    .lut({  `LUI   ,{imm_typeU},
            `AUIPC ,{imm_typeU},
            `JAL   ,{imm_typeJ},
            `JALR  ,{imm_typeI},
            `BRANCH,{imm_typeB},
            `LOAD  ,{imm_typeI},
            `STORE ,{imm_typeS},
            `OP_IMM,{imm_typeI},
            `OP    ,{imm_typeR},
            `FENCE ,{imm_type_NONE},
            `SYS   ,{imm_type_NONE}
  })
);

endmodule


module ysyx_23060077_riscv_id_imm_ext #(
    INPUT_WIDTH = 1
) (
    input 	    [INPUT_WIDTH-1:0]      imm_in,
    output  	[`DATA_WIDTH-1:0]     imm_out
);

assign imm_out = {{(`DATA_WIDTH-INPUT_WIDTH){imm_in[INPUT_WIDTH-1]}},imm_in};

endmodule