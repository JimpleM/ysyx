`include"riscv_define.vh"
module ysyx_23060077_riscv_ex_branch #(
    INST_WIDTH = 32
) (
    input               [INST_WIDTH-1:0]    inst_id_to_ex,
    input                                   alu_out_most_bit,
    input                                   rs1_most_bit,
    input                                   rs2_most_bit,
    input                                   zero_flag,
    output reg 	                            branch_out
);

wire [9:0]   branch_code;

assign branch_code = {inst_id_to_ex[6:0],inst_id_to_ex[14:12]};

wire unsigned_ans;
wire signed_ans;
//rs1 < rs2 (s)     结果为负,rs1和rs2同号    或者  rs1为负，rs2为正
assign signed_ans = (alu_out_most_bit & (~(rs1 ^ rs2))) | (rs1 & (~rs2));
//rs1 < rs2         结果最高位1,rs1和rs2最高位相同   或者rs1最高位位0，rs2为1
assign unsigned_ans = (alu_out_most_bit & (~(rs1 ^ rs2))) | ((~rs1) & rs2);
/*
example 
unsigned rs1 {1'b1,30'd0,1'b1} rs2 {32'd1}
ans {1'b1,31'd0} MSB为1并不满足rs1 < rs2
*/

ysyx_23060077_riscv_mux#(
    NR_KEY      (11), 
    KEY_LEN     (10), 
    DATA_LEN    (1)
)riscv_mux_branch(
  .key              (branch_code),
  .out              (alu_out_data_ex),
  .lut({    {7'b110_0111 ,3'b000} , zero_flag,      //beq                                       
            {7'b110_0111 ,3'b001} , !zero_flag,     //bne
            {7'b110_0111 ,3'b100} , signed_ans,     //blt 
            {7'b110_0111 ,3'b101} , !signed_ans,    //bge 
            {7'b110_0111 ,3'b110} , unsigned_ans,   //bltu
            {7'b110_0111 ,3'b111} , !unsigned_ans   //bgeu
  })
);

endmodule