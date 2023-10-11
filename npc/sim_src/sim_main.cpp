
#include "Vtop.h"
#include "verilated.h"

#include "verilated_vcd_c.h"
#include "include/risc32_lib.h"

#define		eval_dump  top->eval(); tfp->dump(contextp->time());  contextp->timeInc(1);

int main(int argc, char *argv[]){
	VerilatedContext* contextp = new VerilatedContext;
	contextp->commandArgs(argc, argv);
	Vtop* top = new Vtop(contextp);

	VerilatedVcdC* tfp = new VerilatedVcdC;
	contextp->traceEverOn(true);
	top->trace(tfp,0);
	tfp->open("wave.vcd");
// initialize
	tfp->clk = 0;
	tfp->rst_n = 1;
	eval_dump;
	init_npc(argc,argv);


	while(!contextp->gotFinish()){
        tfp->clk = !tfp->clk;
	
		

		eval_dump;
	}
	
	delete top;
	tfp->close();
	delete contextp;
	return 0;
}
