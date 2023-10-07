#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "Vtop.h"
#include "verilated.h"

#include "verilated_vcd_c.h"

#include "verilated_dpi.h"
#include "Vour__Dpi.h"

int main(int argc, char ** argv, char** env){
	VerilatedContext* contextp = new VerilatedContext;
	contextp->commandArgs(argc, argv);
	Vtop* top = new Vtop(contextp);

	VerilatedVcdC* tfp = new VerilatedVcdC;
	contextp->traceEverOn(true);
	top->trace(tfp,0);
	tfp->open("wave.vcd");

	int count = 0;
	int value = 0;
	publicSetBool(value);

	while(!contextp->gotFinish()){
        int a = rand() % 2;
		int b = rand() % 2;
		top->a = a;
		top->a = b;
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
