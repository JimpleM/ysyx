`include"riscv_define.v"
module riscv_ex_alu(
   input            [`ALU_OPT_WIDTH-1:0]    alu_opt,
    input           [`DATA_WIDTH-1:0]       alu_a_data,
    input           [`DATA_WIDTH-1:0]       alu_b_data,
    output                                  carry_flag,
    output  	    [`DATA_WIDTH-1:0]         alu_out_data
);

wire [`DATA_WIDTH-1:0] add_data;
wire [`DATA_WIDTH-1:0] sub_data;
wire [`DATA_WIDTH-1:0] usub_data;

assign add_data = alu_a_data + alu_b_data;
assign sub_data = $signed(alu_a_data) - $signed(alu_b_data);
//相当与变成有符号数进行减法，看最高bit
assign {carry_flag,usub_data} = {1'b0,alu_a_data} - {1'b0,alu_b_data};

riscv_mux#(
  .NR_KEY      (11), 
  .KEY_LEN     (4), 
  .DATA_LEN    (`DATA_WIDTH)
)riscv_mux_ex_data(
  .key              (alu_opt),
  .default_out      (0),
  .out              (alu_out_data),
  .lut({`ALU_ADD    , add_data,                                           
        `ALU_SUB    , $signed(alu_a_data) - $signed(alu_b_data),
        `ALU_SLL    , alu_a_data << alu_b_data[5:0],
        `ALU_SLT    , {{(`DATA_WIDTH-1){1'b0}},sub_data[`DATA_WIDTH-1]},
        `ALU_SLTU   , {{(`DATA_WIDTH-1){1'b0}},carry_flag},
        `ALU_XOR    , alu_a_data ^ alu_b_data,
        `ALU_SRL    , alu_a_data >> alu_b_data[5:0],
        `ALU_SRA    , {alu_a_data[`DATA_WIDTH-1],{alu_a_data[`DATA_WIDTH-2:0] >> alu_b_data[5:0]}},
        `ALU_OR     , alu_a_data | alu_b_data,
        `ALU_AND    , alu_a_data & alu_b_data,
        `ALU_SUBU   , usub_data
  })
);

endmodule
