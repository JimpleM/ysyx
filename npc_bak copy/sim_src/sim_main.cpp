#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "Vtop.h"
#include "verilated.h"

#include "verilated_vcd_c.h"

int main(int argc, char ** argv, char** env){
	VerilatedContext* contextp = new VerilatedContext;
	contextp->commandArgs(argc, argv);
	Vtop* top = new Vtop(contextp);

	VerilatedVcdC* tfp = new VerilatedVcdC;
	contextp->traceEverOn(true);
	top->trace(tfp,0);
	tfp->open("wave.vcd");

	int count = 0;

	while(!contextp->gotFinish()){
        int y = rand() %4;
		top->a = 228;
        top->y = y;
		top->eval();
		
		tfp->dump(contextp->time());
		contextp->timeInc(1);
		
		// assert(top->f == (y==3?(y==2?(y==1? 1:0):2):3));
	
		count++;
		if(count >100){
			break;
		}
	}
	
	delete top;
	tfp->close();
	delete contextp;
	return 0;
}
