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

// riscv_dff #(
//   .WIDTH(`DATA_WIDTH), 
//   .RESET_VAL(32'd0)
// )riscv_dff_reg(
//     .clk    (clk),
//     .rst_n  (rst_n),
//     .wen    (rd_en),
//     .din    (rd_data),
//     .dout   (gpr[rd_addr])
// );

assign gpr[0] = rd_en &&(rd_addr == 5'd0) ? rd_data : gpr[0];
assign gpr[1] = rd_en &&(rd_addr == 5'd1) ? rd_data : gpr[1];
assign gpr[2] = rd_en &&(rd_addr == 5'd2) ? rd_data : gpr[2];
assign gpr[3] = rd_en &&(rd_addr == 5'd3) ? rd_data : gpr[3];
assign gpr[4] = rd_en &&(rd_addr == 5'd4) ? rd_data : gpr[4];
assign gpr[5] = rd_en &&(rd_addr == 5'd5) ? rd_data : gpr[5];
assign gpr[6] = rd_en &&(rd_addr == 5'd6) ? rd_data : gpr[6];
assign gpr[7] = rd_en &&(rd_addr == 5'd7) ? rd_data : gpr[7];
assign gpr[8] = rd_en &&(rd_addr == 5'd8) ? rd_data : gpr[8];
assign gpr[9] = rd_en &&(rd_addr == 5'd9) ? rd_data : gpr[9];
assign gpr[10] = rd_en &&(rd_addr == 5'd10) ? rd_data : gpr[10];
assign gpr[11] = rd_en &&(rd_addr == 5'd11) ? rd_data : gpr[11];
assign gpr[12] = rd_en &&(rd_addr == 5'd12) ? rd_data : gpr[12];
assign gpr[13] = rd_en &&(rd_addr == 5'd13) ? rd_data : gpr[13];
assign gpr[14] = rd_en &&(rd_addr == 5'd14) ? rd_data : gpr[14];
assign gpr[15] = rd_en &&(rd_addr == 5'd15) ? rd_data : gpr[15];
assign gpr[16] = rd_en &&(rd_addr == 5'd16) ? rd_data : gpr[16];
assign gpr[17] = rd_en &&(rd_addr == 5'd17) ? rd_data : gpr[17];
assign gpr[18] = rd_en &&(rd_addr == 5'd18) ? rd_data : gpr[18];
assign gpr[19] = rd_en &&(rd_addr == 5'd19) ? rd_data : gpr[19];
assign gpr[20] = rd_en &&(rd_addr == 5'd20) ? rd_data : gpr[20];
assign gpr[21] = rd_en &&(rd_addr == 5'd21) ? rd_data : gpr[21];
assign gpr[22] = rd_en &&(rd_addr == 5'd22) ? rd_data : gpr[22];
assign gpr[23] = rd_en &&(rd_addr == 5'd23) ? rd_data : gpr[23];
assign gpr[24] = rd_en &&(rd_addr == 5'd24) ? rd_data : gpr[24];
assign gpr[25] = rd_en &&(rd_addr == 5'd25) ? rd_data : gpr[25];
assign gpr[26] = rd_en &&(rd_addr == 5'd26) ? rd_data : gpr[26];
assign gpr[27] = rd_en &&(rd_addr == 5'd27) ? rd_data : gpr[27];
assign gpr[28] = rd_en &&(rd_addr == 5'd28) ? rd_data : gpr[28];
assign gpr[29] = rd_en &&(rd_addr == 5'd29) ? rd_data : gpr[29];
assign gpr[30] = rd_en &&(rd_addr == 5'd30) ? rd_data : gpr[30];
assign gpr[31] = rd_en &&(rd_addr == 5'd31) ? rd_data : gpr[31];


// always @(posedge clk) begin
//     if (rd_en)begin
//         gpr[rd_addr] <= rd_data;
//     end 
// end


// for sim
import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
initial set_gpr_ptr(gpr);  // rf为通用寄存器的二维数组变量

endmodule
