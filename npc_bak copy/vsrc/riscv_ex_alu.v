`include"riscv_define.v"
module riscv_ex_alu #(
    DATA_WIDTH = 32,
    INST_WIDTH = 32
) (
    input               [INST_WIDTH-1:0]    inst_id_to_ex,
    input       signed  [DATA_WIDTH-1:0]    alu_a_data_ex,
    input       signed  [DATA_WIDTH-1:0]    alu_b_data_ex,
    output reg 	signed  [DATA_WIDTH-1:0]    alu_out_data_ex,
    output reg                              zero_flag
);

wire [3:0]   funcode;

riscv_ex_funcode riscv_ex_funcode
(
    .inst_id_to_ex      (inst_id_to_ex),
    .funcode            (funcode)
);

wire [DATA_WIDTH-1:0]    u_alu_a;
wire [DATA_WIDTH-1:0]    u_alu_b;
wire [DATA_WIDTH-1:0]    add_data;
wire [DATA_WIDTH-1:0]    sub_data;

assign u_alu_a  = alu_a_data_ex;
assign u_alu_b  = alu_b_data_ex;
assign add_data = alu_a_data_ex + alu_b_data_ex;
assign sub_data = alu_a_data_ex - alu_b_data_ex;

assign zero_flag = (alu_out_data_ex == 'd0);

riscv_mux#(
    NR_KEY      (11), 
    KEY_LEN     (4), 
    DATA_LEN    (DATA_WIDTH)
)riscv_mux_ex_data(
  .key              (funcode),
  .default_out      (0),
  .out              (alu_out_data_ex),
  .lut({    4'b0000 , add_data,                                           
            4'b0001 , alu_a_data_ex << alu_b_data_ex[5:0],
            4'b0010 , alu_a_data_ex < alu_b_data_ex ? 'd1 : 'd0,
            4'b0011 , u_alu_a       < u_alu_b       ? 'd1 : 'd0,
            4'b0100 , alu_a_data_ex ^ alu_b_data_ex     ,
            4'b0101 , u_alu_a       >> u_alu_b[5:0],
            4'b0110 , alu_a_data_ex | alu_b_data_ex,
            4'b0111 , alu_a_data_ex & alu_b_data_ex,
            4'b1000 , sub_data,
            // 4'b1001 , ,
            // 4'b1010 , ,
            // 4'b1011 , ,
            // 4'b1100 , ,
            4'b1101 , alu_a_data_ex >> alu_b_data_ex[5:0],
            // 4'b1110 , ,
            4'b1111 , 'd0
  })
);

endmodule

module riscv_ex_funcode 
(
    input           [INST_WIDTH-1:0]    inst_id_to_ex,
    output reg 	    [3:0]               funcode
);
wire [6:0]   opcode;
assign opcode   = inst_id_to_ex[6:0];
riscv_mux#(
    NR_KEY      (11), 
    KEY_LEN     (7), 
    DATA_LEN    (4)
)riscv_mux_ex_data(
  .key              (opcode),
  .out              (funcode),
  .lut({    LUI   , {4'b1111},      // 4'b1111 no use
            AUIPC , {4'b1111},
            JAL   , {4'b1111},
            JALR  , {4'b1111},
            BRANCH, {4'b1000},      //用减法，根据结果和0标志位来完成大小判断
            LOAD  , {4'b1111},
            STORE , {4'b1111},
            OP_IMM, {             1'b0, inst_id_to_ex[14:12]},
            OP    , {inst_id_to_ex[30], inst_id_to_ex[14:12]},
            FENCE , {4'b1111},
            SYS   , {4'b1111}
  })
);
endmodule