module riscv_regfile (
    input                               clk,
    input                               rst_n,

    input       [`REG_WIDTH-1:0]        rs1_addr,
    output      [`DATA_WIDTH-1:0]       rs1_data,

    input       [`REG_WIDTH-1:0]        rs2_addr,
    output      [`DATA_WIDTH-1:0]       rs2_data,

    input                               rd_en,
    input       [`REG_WIDTH-1:0]        rd_addr,
    input       [`DATA_WIDTH-1:0]       rd_data
);

reg [`DATA_WIDTH-1:0] gpr [`REG_COUNT-1:0];

integer i;
initial begin
    for(i=0; i<`REG_COUNT; i=i+1)   gpr[i] = 0;
end

// read rs1
assign rs1_data = gpr[rs1_addr];

// read rs2
assign rs2_data = gpr[rs2_addr];

// write rd
riscv_dff #(
  .WIDTH(`DATA_WIDTH), 
  .RESET_VAL(32'd0)
)riscv_dff_pc(
    .clk    (clk),
    .rst_n  (rst_n),
    .wen    (rd_en),
    .din    (rd_data),
    .dout   (gpr[rd_addr])
  
);
// always @(posedge clk) begin
//     if (rd_en)begin
//         gpr[rd_addr] <= rd_data;
//     end 
// end

endmodule
