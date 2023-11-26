module riscv_csr_clint (
    input 	                            clk,
    input 	                            rst_n, 

    input       [`DATA_WIDTH-1:0]       pc,

    input       [`DATA_WIDTH-1:0]       imm,
    input  	    [`REG_WIDTH-1:0]        rs1,
    input       [`DATA_WIDTH-1:0]       rs1_data,

    input       [`CSR_OPT_WIDTH-1:0]    csr_opt,

    output      [`DATA_WIDTH-1:0]       csr_pc

);

reg     [`DATA_WIDTH-1:0]       csr_mstatus_write_data  ;
reg     [`DATA_WIDTH-1:0]       csr_mepc_write_data     ;
reg     [`DATA_WIDTH-1:0]       csr_mcause_write_data   ;
reg                             csr_mstatus_write_valid ;
reg                             csr_mepc_write_valid    ;
reg                             csr_mcause_write_valid  ;
wire    [`DATA_WIDTH-1:0]       csr_mstatus_read_data   ;
wire    [`DATA_WIDTH-1:0]       csr_mepc_read_data      ;
wire    [`DATA_WIDTH-1:0]       csr_mcause_read_data    ;
wire    [`DATA_WIDTH-1:0]       csr_mtvec_read_data     ;

reg     [`DATA_WIDTH-1:0]       csr_write_data          ;
reg     [`CSR_REG_WIDTH-1:0]    csr_write_addr          ;
reg                             csr_write_valid         ;
reg     [`CSR_REG_WIDTH-1:0]    csr_read_addr           ;
wire    [`DATA_WIDTH-1:0]       csr_read_data           ;

assign csr_pc = csr_read_data;

always@(*)begin
    case(csr_opt)
        `CSR_OPT_EINST : begin 
            case(imm[11:0])
                12'b0000_0000_0000:begin // ecall
                    csr_mstatus_write_data  = 32'h00001800;
                    csr_mcause_write_data   = 32'd11;
                    csr_mepc_write_data     = pc;
                    csr_read_addr           = {20'd0,`CSR_MTVEC};
                end
                12'b0011_0000_0010:begin //mret
                    csr_read_addr           = {20'd0,`CSR_MEPC};
                    csr_mstatus_write_data  = csr_mstatus_read_data & ~(32'h0000_1800);
                end
                12'b0000_0000_0001:begin //ebreak

                end 
            endcase
        end
        `CSR_OPT_CSRRW : begin 

        end
        `CSR_OPT_CSRRS : begin 

        end
        `CSR_OPT_CSRRC : begin 

        end
    endcase
end


riscv_csr_regfile riscv_csr_regfile_u0(
    .clk                        (clk),
    .rst_n                      (rst_n),
    .csr_mstatus_write_data_i   (csr_mstatus_write_data ),
    .csr_mepc_write_data_i      (csr_mepc_write_data    ), 
    .csr_mcause_write_data_i    (csr_mcause_write_data  ),
    .csr_mstatus_write_valid_i  (csr_mstatus_write_valid),
    .csr_mepc_write_valid_i     (csr_mepc_write_valid   ),
    .csr_mcause_write_valid_i   (csr_mcause_write_valid ),
    .csr_mstatus_read_data_o    (csr_mstatus_read_data  ),
    .csr_mepc_read_data_o       (csr_mepc_read_data     ),
    .csr_mcause_read_data_o     (csr_mcause_read_data   ),
    .csr_mtvec_read_data_o      (csr_mtvec_read_data    ),
    .csr_write_data_i           (csr_write_data         ),
    .csr_write_addr_i           (csr_write_addr         ),
    .csr_write_valid_i          (csr_write_valid        ),
    .csr_read_addr_i            (csr_read_addr          ),
    .csr_read_data_o            (csr_read_data          )
);



endmodule