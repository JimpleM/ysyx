module riscv_csr_regfile (
    input                               clk,
    input                               rst_n,
    //每个寄存器单独的通道
    input       [`DATA_WIDTH-1:0]       csr_mstatus_write_data_i,
    input       [`DATA_WIDTH-1:0]       csr_mepc_write_data_i,
    input       [`DATA_WIDTH-1:0]       csr_mcause_write_data_i,

    input                               csr_mstatus_write_valid_i,
    input                               csr_mepc_write_valid_i,
    input                               csr_mcause_write_valid_i,

    output      [`DATA_WIDTH-1:0]       csr_mstatus_read_data_o,
    output      [`DATA_WIDTH-1:0]       csr_mepc_read_data_o,
    output      [`DATA_WIDTH-1:0]       csr_mcause_read_data_o,
    output      [`DATA_WIDTH-1:0]       csr_mtvec_read_data_o,

    //csr寄存器读写通道
    input       [`DATA_WIDTH-1:0]       csr_write_data_i,
    input       [`CSR_REG_WIDTH-1:0]    csr_write_addr_i,
    input                               csr_write_valid_i,

    input       [`CSR_REG_WIDTH-1:0]    csr_read_addr_i,
    output      [`DATA_WIDTH-1:0]       csr_read_data_o,

);

wire    [`DATA_WIDTH-1:0]   mstatus_din     = (csr_mstatus_write_valid_i) ? (csr_mstatus_write_data_i) : csr_write_data_i ;
wire    [`DATA_WIDTH-1:0]   mepc_din        = (csr_mepc_write_valid_i)    ? (csr_mepc_write_data_i)    : csr_write_data_i;
wire    [`DATA_WIDTH-1:0]   mcause_din      = (csr_mcause_write_valid_i)  ? (csr_mcause_write_data_i)  : csr_write_data_i;
wire    [`DATA_WIDTH-1:0]   mtvec_din       = (csr_mtvec_write_data_i)  ;

wire    [`DATA_WIDTH-1:0]   mstatus_dout   ;
wire    [`DATA_WIDTH-1:0]   mepc_dout      ;
wire    [`DATA_WIDTH-1:0]   mcause_dout    ;
wire    [`DATA_WIDTH-1:0]   mtvec_dout     ;

reg mstatus_en;
reg mepc_en   ;
reg mcause_en ;
reg mtvec_en  ;

always@(*)begin
    mstatus_en  = csr_mstatus_write_valid_i ; 
    mepc_en     = csr_mepc_write_data_i     ; 
    mcause_en   = csr_mcause_write_valid_i  ;
    mtvec_en    = 1'b0                      ;
    case(csr_read_addr_i)
        `CSR_MEPC   : mstatus_en = csr_write_data_i;
        `CSR_MSTATUS: mepc_en    = csr_write_data_i;
        `CSR_MCAUSE : mcause_en  = csr_write_data_i;
        `CSR_MTVEC  : mtvec_en   = csr_write_data_i;
        default     : ;
    endcase
end

reg [`DATA_WIDTH-1:0] csr_read_data;
always@(*)begin
    case(csr_write_addr_i)
        `CSR_MEPC   : csr_read_data = mstatus_dout   ;
        `CSR_MSTATUS: csr_read_data = mepc_dout      ;
        `CSR_MCAUSE : csr_read_data = mcause_dout    ;
        `CSR_MTVEC  : csr_read_data = mtvec_dout     ;
        default     : csr_read_data = `DATA_WIDTH'b0 ;
    endcase
end

assign csr_mstatus_read_data_o  = mstatus_dout ;
assign csr_mepc_read_data_o     = mepc_dout    ;
assign csr_mcause_read_data_o   = mcause_dout  ;
assign csr_mtvec_read_data_o    = mtvec_dout   ;

riscv_dff #(
  .WIDTH        (`DATA_WIDTH), 
  .RESET_VAL    (`CSR_MSTATUS_DEFAULT)
)riscv_dff_csr_mstatus(
    .clk    (clk),
    .rst_n  (rst_n),
    .wen    (mstatus_en),
    .din    (mstatus_din),
    .dout   (mstatus_dout)
);

riscv_dff #(
  .WIDTH        (`DATA_WIDTH), 
  .RESET_VAL    (`DATA_WIDTH'b0)
)riscv_dff_csr_mcause(
    .clk    (clk),
    .rst_n  (rst_n),
    .wen    (mcause_en),
    .din    (mcause_din),
    .dout   (mcause_dout)
);

riscv_dff #(
  .WIDTH        (`DATA_WIDTH), 
  .RESET_VAL    (`DATA_WIDTH'b0)
)riscv_dff_csr_mpec(
    .clk    (clk),
    .rst_n  (rst_n),
    .wen    (mepc_en),
    .din    (mpec_din),
    .dout   (mpec_dout)
);

riscv_dff #(
  .WIDTH        (`DATA_WIDTH), 
  .RESET_VAL    (`DATA_WIDTH'b0)
)riscv_dff_csr_mtvec(
    .clk    (clk),
    .rst_n  (rst_n),
    .wen    (mtvec_en),
    .din    (mtvec_din),
    .dout   (mtvec_dout)
);

endmodule
