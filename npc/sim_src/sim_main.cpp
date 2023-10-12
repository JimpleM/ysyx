

#include "verilated.h"

#include "verilated_vcd_c.h"
#include "include/risc32_lib.h"

#define		eval_dump  top->eval(); tfp->dump(contextp->time());  contextp->timeInc(1);

bool riscv32_rst = false;

extern "C" void get_riscv32_rst(svBit rst_n) {
  if(rst_n){
	riscv32_rst = true;
  }else{
	riscv32_rst = false;
  }
}


int stop_flag = 0;

void riscv_pmem_read(int raddr, int *rdata, svBit ren){
	if(ren){
		*rdata = pmem_read((uint32_t)raddr,4);
		if(*rdata == 0x00100073){
			stop_flag = 1;
		}
	}
}

void riscv_pmem_write(int waddr, int wdata, int wmask){
	pmem_write((uint32_t)waddr,(uint32_t)wdata,wmask);
}

int main(int argc, char *argv[]){
	VerilatedContext* contextp = new VerilatedContext;
	contextp->commandArgs(argc, argv);
	Vriscv32* top = new Vriscv32(contextp);

	VerilatedVcdC* tfp = new VerilatedVcdC;
	contextp->traceEverOn(true);
	top->trace(tfp,0);
	tfp->open("wave.vcd");
// initialize
	top->clk = 0;
	top->i_rst_n = 1;
	eval_dump;
	init_npc(argc,argv);

	// int count = 0;

	while(!contextp->gotFinish()){
        top->clk = !top->clk;
		top->eval();

		if(top->clk && riscv32_rst){
			if(checkregs()){
				break;
			}
			difftest_step();

		}
		
		if(stop_flag == 1){
			break;
		}
		// count++;
		// if(count >40){
		// 	break;
		// }
	}
	
	// Log("nemu: %s at pc = " FMT_WORD,
    //       (nemu_state.state == NEMU_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED):
    //        (nemu_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
    //         ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
    //       nemu_state.halt_pc);
	eval_dump;
	top->clk = !top->clk;
	eval_dump;
	top->clk = !top->clk;
	eval_dump;
	eval_dump;
	delete top;
	tfp->close();
	delete contextp;
	return 0;
}
