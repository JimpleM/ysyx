
`define INST_WIDTH          32
`define DATA_WIDTH          32
`define CSR_WIDTH           12
`define REG_WIDTH            5


// `define USING_DPI_C     // use for make sta


// opcode
`define LUI     7'b01101_??     //lui
`define AUIPC   7'b00101_??     //auipc
`define JAL     7'b11011_??     //jal
`define JALR    7'b11001_??     //jalr
`define BRANCH  7'b11000_??     //beq,bne,blt,bge,bltu,bgeu
`define LOAD    7'b00000_1?     //lb,lh,lw,lbu,lhu
`define STORE   7'b01000_??     //sb,sh,sw
`define OP_IMM  7'b00100_??     //addi,slti,sltiu,xori,ori,andi,slli,srli,srai
`define OP      7'b01100_??     //add,sub,sll,slt,ltu,xor,srl,sra,or,and
`define FENCE   7'b00011_??     //fence,fence.i
`define SYS     7'b11100_??     //ecall,ebreak,csrrw,csrrs,csrrc,csrrwi,cssrrsi,csrrci  

`define ALU_OPT_WIDTH      4
`define ALU_NONE        `ALU_OPT_WIDTH'd0
`define ALU_ADD         `ALU_OPT_WIDTH'd1
`define ALU_SUB         `ALU_OPT_WIDTH'd2
`define ALU_SLL         `ALU_OPT_WIDTH'd3
`define ALU_SLT         `ALU_OPT_WIDTH'd4
`define ALU_SLTU        `ALU_OPT_WIDTH'd5
`define ALU_XOR         `ALU_OPT_WIDTH'd6
`define ALU_SRL         `ALU_OPT_WIDTH'd7
`define ALU_SRA         `ALU_OPT_WIDTH'd8
`define ALU_OR          `ALU_OPT_WIDTH'd9
`define ALU_AND         `ALU_OPT_WIDTH'd10
`define ALU_SUBU        `ALU_OPT_WIDTH'd11

`define SRC_SEL_WIDTH      2
`define SRC_SEL_RS1_IMM `SRC_SEL_WIDTH'd0
`define SRC_SEL_PC_IMM  `SRC_SEL_WIDTH'd1
`define SRC_SEL_RS1_2   `SRC_SEL_WIDTH'd2
`define SRC_SEL_PC_4    `SRC_SEL_WIDTH'd3


`define LSU_OPT_WIDTH      2
`define LSU_OPT_NONE    `LSU_OPT_WIDTH'd0
`define LSU_OPT_LOAD    `LSU_OPT_WIDTH'd1
`define LSU_OPT_STORE   `LSU_OPT_WIDTH'd2
`define LSU_OPT_SYS     `LSU_OPT_WIDTH'd3


// csr reg addr
`define CSR_ADDR_WIDTH      12
`define CSR_REG_WIDTH       3


`define AXI_ADDR_WIDTH          32
`define AXI_DATA_WIDTH          64
`define AXI_PORT_WIDTH          3

`define AXI_RESP_WIDTH          2
`define AXI_ID_WIDTH            4
`define AXI_LEN_WIDTH           8

`define AXI_SIZE_WIDTH          3
`define AXI_SIZE_1              `AXI_SIZE_WIDTH'b000
`define AXI_SIZE_2              `AXI_SIZE_WIDTH'b001
`define AXI_SIZE_4              `AXI_SIZE_WIDTH'b010
`define AXI_SIZE_8              `AXI_SIZE_WIDTH'b011

`define AXI_BURST_WIDTH         2
`define AXI_BURST_FIXED         `AXI_BURST_WIDTH'b00
`define AXI_BURST_INCR          `AXI_BURST_WIDTH'b01
`define AXI_BURST_WRAP          `AXI_BURST_WIDTH'b10

`define AXI_STRB_WIDTH          8

`define AXI_W_STATE_WIDTH       2        
`define AXI_R_STATE_WIDTH       2        
`define AXI_ARB_STATE_WIDTH     2

`define AXI_UART_ADDR           32'ha00003f8
`define AXI_SRAM_ADDR           32'h8???_????
`define AXI_CLINT_ADDR          32'h0200_????