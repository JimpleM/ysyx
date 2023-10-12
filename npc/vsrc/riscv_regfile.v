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

wire  [`REG_WIDTH-1:0]        rd_addr_t;
wire                          rd_en_t;

// write rd
riscv_dff #(
  .WIDTH(6), 
  .RESET_VAL(0)
)riscv_dff_reg_t(
    .clk    (clk),
    .rst_n  (rst_n),
    .wen    (1'b1),
    .din    ({rd_en,rd_addr}),
    .dout   ({rd_en_t,rd_addr_t})
);


genvar i;
generate
    for(i=0;i<32;i++){
        if(i == rd_addr){
            riscv_dff #(
            .WIDTH(`DATA_WIDTH), 
            .RESET_VAL(32'd0)
            )riscv_dff_reg(
                .clk    (clk),
                .rst_n  (rst_n),
                .wen    (rd_en),
                .din    (rd_data),
                .dout   (gpr[i])
            );
        }
    }
endgenerate
// always @(posedge clk) begin
//     if (rd_en)begin
//         gpr[rd_addr] <= rd_data;
//     end 
// end


// for sim
import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
initial set_gpr_ptr(gpr);  // rf为通用寄存器的二维数组变量

endmodule
