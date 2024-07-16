
`define YSYX_23060077_INST_WIDTH        32
`define YSYX_23060077_DATA_WIDTH        32
`define YSYX_23060077_REG_WIDTH          5

`define YSYX_23060077_AXI_ADDR_WIDTH    32
`define YSYX_23060077_AXI_DATA_WIDTH    64

`define YSYX_23060077_PRE_OPT_WIDTH      6
`define YSYX_23060077_PRE_JAL           'd0
`define YSYX_23060077_PRE_JALR          'd1
`define YSYX_23060077_PRE_BRANCH        'd2
`define YSYX_23060077_PRE_SYS           'd3
`define YSYX_23060077_PRE_ECALL         'd4
`define YSYX_23060077_PRE_MRET          'd5

`define YSYX_23060077_ALU_OPT_WIDTH      17
`define YSYX_23060077_ALU_ADD           'd0
`define YSYX_23060077_ALU_SUB           'd1
`define YSYX_23060077_ALU_SLL           'd2
`define YSYX_23060077_ALU_SLT           'd3
`define YSYX_23060077_ALU_SLTU          'd4
`define YSYX_23060077_ALU_XOR           'd5
`define YSYX_23060077_ALU_SRL           'd6
`define YSYX_23060077_ALU_SRA           'd7
`define YSYX_23060077_ALU_OR            'd8
`define YSYX_23060077_ALU_AND           'd9
`define YSYX_23060077_ALU_PC            'd10
`define YSYX_23060077_ALU_BRANCH        'd11
`define YSYX_23060077_ALU_BRU_FUNC3     'd12
`define YSYX_23060077_ALU_MUL           'd13
`define YSYX_23060077_ALU_DIV           'd14
`define YSYX_23060077_ALU_MULDIV_BIT0   'd15
`define YSYX_23060077_ALU_MULDIV_BIT1   'd16


`define YSYX_23060077_SRC_SEL_WIDTH      2
// src_sel[1] to select pc + imm / pc +4 
// src_sel[0] to select src1 + src2 / src1 + imm 
// special: in idu, jal need to modified src1 into pc
// SRC_SEL_4_IMM     `YSYX_23060077_SRC_SEL_WIDTH'b00
// SRC_SEL_4_SRC2    `YSYX_23060077_SRC_SEL_WIDTH'b01
// SRC_SEL_IMM_IMM   `YSYX_23060077_SRC_SEL_WIDTH'b10
// SRC_SEL_IMM_SRC2  `YSYX_23060077_SRC_SEL_WIDTH'b11


`define YSYX_23060077_EXU_OPT_WIDTH      10
`define YSYX_23060077_EX_LSU_LOAD       'd0
`define YSYX_23060077_EX_LSU_STORE      'd1
`define YSYX_23060077_EX_SYS            'd2
`define YSYX_23060077_EX_CSR_ECALL      'd3
`define YSYX_23060077_EX_CSR_MRET       'd4
`define YSYX_23060077_EX_FUN3_BIT2      'd5
`define YSYX_23060077_EX_00             'd6
`define YSYX_23060077_EX_01             'd7
`define YSYX_23060077_EX_10             'd8
`define YSYX_23060077_EX_11             'd9

`define YSYX_23060077_WBU_OPT_WIDTH       3
`define YSYX_23060077_WBU_EXU           'd0
`define YSYX_23060077_WBU_LSU           'd1
`define YSYX_23060077_WBU_CSR           'd2




