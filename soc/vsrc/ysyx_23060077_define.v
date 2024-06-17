
`define INST_WIDTH          32
`define DATA_WIDTH          32
`define CSR_WIDTH           12
`define REG_WIDTH            5
`define REG_COUNT           (1<<`REG_WIDTH)


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
`define CSR_M_CYCLE_ADDR    `CSR_ADDR_WIDTH'hb00    
`define CSR_MSTATUS_ADDR    `CSR_ADDR_WIDTH'h300
`define CSR_MIE_ADDR        `CSR_ADDR_WIDTH'h304
`define CSR_MTVEC_ADDR      `CSR_ADDR_WIDTH'h305    
`define CSR_MEPC_ADDR       `CSR_ADDR_WIDTH'h341
`define CSR_MCAUSE_ADDR     `CSR_ADDR_WIDTH'h342
`define CSR_MTVAL_ADDR      `CSR_ADDR_WIDTH'h343
`define CSR_MINSTRET_ADDR   `CSR_ADDR_WIDTH'hb02
`define CSR_MSCRATCH_ADDR   `CSR_ADDR_WIDTH'h340
`define CSR_MVENDORID_ADDR  `CSR_ADDR_WIDTH'hF11
`define CSR_MARCHID_ADDR    `CSR_ADDR_WIDTH'hF12

`define CSR_REG_WIDTH       4
`define CSR_M_CYCLE         `CSR_REG_WIDTH'd0    
`define CSR_MSTATUS         `CSR_REG_WIDTH'd1
`define CSR_MIE             `CSR_REG_WIDTH'd2
`define CSR_MTVEC           `CSR_REG_WIDTH'd3    
`define CSR_MEPC            `CSR_REG_WIDTH'd4
`define CSR_MCAUSE          `CSR_REG_WIDTH'd5
`define CSR_MTVAL           `CSR_REG_WIDTH'd6
`define CSR_MINSTRET        `CSR_REG_WIDTH'd7
`define CSR_MSCRATCH        `CSR_REG_WIDTH'd8
`define CSR_MVENDORID       `CSR_REG_WIDTH'd9
`define CSR_MARCHID         `CSR_REG_WIDTH'd10

`define MVENDORID       `DATA_WIDTH'h79737978
`define MARCHID         `DATA_WIDTH'h015FDE6D