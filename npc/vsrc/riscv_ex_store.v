`include"riscv_define.vh"
module ysyx_23060077_riscv_ex_store #(
    DATA_WIDTH = 32,
    INST_WIDTH = 32
) (
    input               [INST_WIDTH-1:0]    inst_id_to_ex,
    input               [DATA_WIDTH-1:0]    alu_a_data_ex,
    input               [DATA_WIDTH-1:0]    alu_b_data_ex,
    output reg 	        [DATA_WIDTH-1:0]    alu_out_data_ex,
    output reg                              zero_flag
);

wire [3:0]   funcode;


ysyx_23060077_riscv_mux#(
    NR_KEY      (11), 
    KEY_LEN     (4), 
    DATA_LEN    (DATA_WIDTH)
)riscv_mux_ex_data(
  .key              (funcode),
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

module ysyx_23060077_riscv_ex_funcode 
(
    input           [INST_WIDTH-1:0]    inst_id_to_ex,
    output reg 	    [3:0]               funcode
);
wire [6:0]   opcode;
assign opcode   = inst_id_to_ex[6:0];
ysyx_23060077_riscv_mux#(
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