

#include "verilated.h"

#include "verilated_vcd_c.h"
#include "include/risc32_lib.h"

#define		eval_dump  top->eval(); tfp->dump(contextp->time());  contextp->timeInc(1);



void riscv_pmem_read(int raddr, int *rdata, svBit ren){
	if(ren){
		printf("read_addr:%x\n",raddr);
		*rdata = pmem_read((uint32_t)raddr,4);
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
	top->rst_n = 0;
	eval_dump;
	top->clk = 1;
	top->rst_n = 0;
	eval_dump;
	top->clk = 0;
	top->rst_n = 1;
	eval_dump;
	init_npc(argc,argv);


	while(!contextp->gotFinish()){
        top->clk = !top->clk;
	
		

		eval_dump;
	}
	
	delete top;
	tfp->close();
	delete contextp;
	return 0;
}
