module riscv_csr_regfile (
    input 	                            clk,
    input 	                            rst_n, 

    input       [`DATA_WIDTH-1:0]       imm,
    input  	    [`REG_WIDTH-1:0]        rs1,
    input       [`DATA_WIDTH-1:0]       rs1_data,

    input       [`CSR_OPT_WIDTH-1:0]    csr_opt,

    output      [`DATA_WIDTH-1:0]       csr_pc

);

always@(*)begin
    case(csr_opt)
        `CSR_OPT_EINST : begin 
            case(imm[11:0])
                12'b0000_0000_0000:begin // ecall

                end
                12'b0011_0000_0010:begin //mret

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




endmodule