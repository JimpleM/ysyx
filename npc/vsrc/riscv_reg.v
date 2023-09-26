module ysyx_23060077_riscv_reg #(
    ADDR_WIDTH = 1, 
    DATA_WIDTH = 1
) (
    input                           clk,

    input                           rs1_en,
    input         [ADDR_WIDTH-1:0]  rs1_addr,
    output  reg   [DATA_WIDTH-1:0]  rs1_data,

    input                           rs2_en,
    input         [ADDR_WIDTH-1:0]  rs2_addr,
    output  reg   [DATA_WIDTH-1:0]  rs2_data,

    input                           rd_en,
    input         [ADDR_WIDTH-1:0]  rd_addr,
    output  reg   [DATA_WIDTH-1:0]  rd_data
);

reg [DATA_WIDTH-1:0] memory [2**(ADDR_WIDTH)-1:0];

// read rs1
always @(posedge clk) begin
    if (rs1_en)begin
        rs1_data <= memory[rs1_addr];
    end 
end

// read rs2
always @(posedge clk) begin
    if (rs2_en)begin
        rs2_data <= memory[rs2_addr];
    end 
end

// write rd
always @(posedge clk) begin
    if (rd_en)begin
        memory[rd_addr] <= rd_data;
    end 
end

endmodule