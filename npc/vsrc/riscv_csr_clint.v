module riscv_csr_regfile (
    input 	                            clk,
    input 	                            rst_n, 

    input       [`DATA_WIDTH-1:0]       imm,
    input  	    [`REG_WIDTH-1:0]        rs1,
    input       [`DATA_WIDTH-1:0]       rs1_data,

    input       [`CSR_OPT_WIDTH-1:0]    csr_opt,

);

always(*)begin
    case(csr_opt)
        
    endcase
end




endmodule