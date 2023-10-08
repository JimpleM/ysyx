`include"riscv_define.vh"
module ysyx_23060077_riscv_id_reg(
    input 	    [`INST_WIDTH-1:0]       inst,
    output reg 	[`REG_ADDR_WIDTH-1:0]   rs1,
    output reg 	[`REG_ADDR_WIDTH-1:0]   rs2,
    output reg 	[`REG_ADDR_WIDTH-1:0]   rd,
    output reg 	                        rd_wen
);
wire [`REG_WIDTH-1:0] reg_zero;
assign reg_zero = {`REG_WIDTH{1'b0}}

ysyx_23060077_riscv_mux#(
  .NR_KEY      (11), 
  .KEY_LEN     (7), 
  .DATA_LEN    (`REG_WIDTH+`REG_WIDTH+REG_WIDTH+1)
)riscv_mux_decode(
  .key                (inst[6:0]),
  .out                ({rs1,rs2,rd,rd_wen}),
  .lut({    `LUI   ,  {reg_zero   , reg_zero   , inst[11:7], 1'b1},
            `AUIPC ,  {reg_zero   , reg_zero   , inst[11:7], 1'b1},
            `JAL   ,  {reg_zero   , reg_zero   , inst[11:7], 1'b1},
            `JALR  ,  {inst[19:15], reg_zero   , inst[11:7], 1'b1},
            `BRANCH,  {inst[19:15], inst[24:10], reg_zero  , 1'b0},
            `LOAD  ,  {inst[19:15], reg_zero   , inst[11:7], 1'b1},
            `STORE ,  {inst[19:15], inst[24:10], reg_zero  , 1'b0},
            `OP_IMM,  {inst[19:15], reg_zero   , inst[11:7], 1'b1},
            `OP    ,  {inst[19:15], inst[24:10], inst[11:7], 1'b1},
            `FENCE ,  {reg_zero   , reg_zero   , reg_zero  , 1'b0},
            `SYS   ,  {inst[19:15], reg_zero   , inst[11:7], 1'b0}
  })
);


endmodule