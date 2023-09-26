module ysyx_23060077_riscv_decode #(
    DATA_WIDTH = 1
) (
    input         [6:0]             opcode,

    output                           en,
    output                           wen,
    output         [ADDR_WIDTH-1:0]  addr,
    output         [DATA_WIDTH-1:0]  wdata,
    output  reg   [DATA_WIDTH-1:0]  rdata
);

`define     LUI     01101_11    // lui
`define     auipc   00101_11    // auipc
`define     jal     11011_11    // jal
`define     jalr    11001_11    // jalr 
`define     beq     00101_11    // beq,bne,blt,bge,bltu,bgeu
`define     lb      00000_11    // lb,lh,lw,lbu,lhu
`define     sb      01000_11    // sb,sh,sw
`define     addi    01000_11    // addi,slti,sltiu,xori,ori,andi,slli,srli,srai
`define     add     01100_11    // add,sub,sll,slt,sltu,xor,srl,sra,or,and
`define     fence   00011_11    // fence fence.i
`define     ecall   11100_11    // ecall,ebreak,csrrw,csrrs,csrrc,csrrwi,cssrrsi,csrrci



endmodule