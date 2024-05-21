`include"ysyx_23060077_riscv_define.v"
module ysyx_23060077_riscv_id_opt(
    input 	    [6:0]                   opcode,
    input 	    [2:0]                   funct3,
    input 	    [6:0]                   funct7,
    output  reg [`ALU_OPT_WIDTH-1:0]    alu_opt,
    output      [`SRC_SEL_WIDTH-1:0]    src_sel,
    output      [`LSU_OPT_WIDTH-1:0]    lsu_opt
);

always @(*)begin
    alu_opt = `ALU_NONE;
    case(opcode)    
        `LUI   :begin alu_opt = `ALU_ADD;       end     //lui
        `AUIPC :begin alu_opt = `ALU_ADD;       end     //auipc
        `JAL   :begin alu_opt = `ALU_ADD;       end     //jal
        `JALR  :begin alu_opt = `ALU_ADD;       end     //jalr
        `BRANCH:begin 
            case(funct3)
                3'b000 :begin alu_opt = `ALU_SUB ;  end     //beq
                3'b001 :begin alu_opt = `ALU_SUB ;  end     //bne
                3'b100 :begin alu_opt = `ALU_SLT ;  end     //blt
                3'b101 :begin alu_opt = `ALU_SLT ;  end     //bge
                3'b110 :begin alu_opt = `ALU_SLTU;  end     //bltu
                3'b111 :begin alu_opt = `ALU_SLTU;  end     //bgeu
                default : alu_opt = `ALU_NONE;
            endcase
        end
        `LOAD  :begin alu_opt = `ALU_NONE;    end            //lb,lh,lw,lbu,lhu
        `STORE :begin alu_opt = `ALU_NONE;    end            //sb,sh,sw
        `OP_IMM:begin 
            case(funct3)
                3'b000 :begin alu_opt = `ALU_ADD;   end//addi
                3'b010 :begin alu_opt = `ALU_SUB;   end//slti
                3'b011 :begin alu_opt = `ALU_SLTU;  end//sltiu
                3'b100 :begin alu_opt = `ALU_XOR;   end//xori
                3'b110 :begin alu_opt = `ALU_OR;    end//ori
                3'b111 :begin alu_opt = `ALU_AND;   end//andi
                3'b001 :begin alu_opt = `ALU_SLL;   end//slli
                3'b101 :begin                          
                    case(funct7)                       
                        7'b000_0000 : begin alu_opt = `ALU_SRL;     end //srli
                        7'b010_0000 : begin alu_opt = `ALU_SRA;     end //srai
                        default : alu_opt = `ALU_NONE;
                    endcase
                end
                default : alu_opt = `ALU_NONE;
            endcase
        end
        `OP    :begin 
            case(funct3)
                3'b000:begin
                    case(funct7)
                        7'b000_0000 : begin alu_opt = `ALU_ADD;     end // add
                        7'b010_0000 : begin alu_opt = `ALU_SUB;     end // sub
                        default : alu_opt = `ALU_NONE;
                    endcase                                            
                end                                                    
                3'b001:begin alu_opt = `ALU_SLL;end                    // sll
                3'b010:begin alu_opt = `ALU_SLT;end                    // slt  
                3'b011:begin alu_opt = `ALU_SLTU;end                   //sltu
                3'b100:begin alu_opt = `ALU_XOR;end                    // xor
                3'b101:begin                                           
                    case(funct7)                                       
                        7'b000_0000 : begin alu_opt = `ALU_SRL;     end // srl
                        7'b010_0000 : begin alu_opt = `ALU_SRA;     end // sra
                        default : alu_opt = `ALU_NONE;
                    endcase
                end
                3'b110:begin alu_opt = `ALU_OR ;end                     // or
                3'b111:begin alu_opt = `ALU_AND;end                     // and
                default : alu_opt = `ALU_NONE;
            endcase
        end
        `FENCE :begin alu_opt = `ALU_AND; end
        `SYS   :begin alu_opt = `ALU_AND; end
        default : alu_opt = `ALU_NONE;
    endcase

end


ysyx_23060077_riscv_mux#(
    .NR_KEY      (11), 
    .KEY_LEN     (7), 
    .DATA_LEN    (`SRC_SEL_WIDTH)
)riscv_mux_id_src_sel(
    .key              (opcode),//opcode
    .default_out      (`SRC_SEL_RS1_IMM),
    .out              (src_sel),
    .lut({  `LUI   ,{`SRC_SEL_RS1_IMM},
            `AUIPC ,{`SRC_SEL_PC_IMM},
            `JAL   ,{`SRC_SEL_PC_4},
            `JALR  ,{`SRC_SEL_PC_4},
            `BRANCH,{`SRC_SEL_RS1_2},
            `LOAD  ,{`SRC_SEL_RS1_IMM},
            `STORE ,{`SRC_SEL_RS1_IMM},
            `OP_IMM,{`SRC_SEL_RS1_IMM},
            `OP    ,{`SRC_SEL_RS1_2},
            `FENCE ,{`SRC_SEL_RS1_IMM},
            `SYS   ,{`SRC_SEL_RS1_IMM}
  })
);


ysyx_23060077_riscv_mux#(
    .NR_KEY      (3), 
    .KEY_LEN     (7), 
    .DATA_LEN    (`LSU_OPT_WIDTH)
)ysyx_23060077_riscv_mux_id_lsu_opt(
    .key              ({opcode}),//opcode
    .default_out      (`LSU_OPT_NONE),
    .out              (lsu_opt),
    .lut({  `LOAD  ,{`LSU_OPT_LOAD},
            `STORE ,{`LSU_OPT_STORE},
            `SYS   ,{`LSU_OPT_SYS}
  })
);

endmodule


