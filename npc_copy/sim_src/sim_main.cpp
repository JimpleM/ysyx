#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "Vtop.h"
#include "verilated.h"

#include "verilated_vcd_c.h"

#include "verilated_dpi.h"
#include "Vtop__Dpi.h"

void mem_read(int pc, int *inst, svBit en){
	if(pc == 1){
		*inst = 111;
	}else{
		*inst = 0;
	}
}

int main(int argc, char ** argv, char** env){
	VerilatedContext* contextp = new VerilatedContext;
	contextp->commandArgs(argc, argv);
	Vtop* top = new Vtop(contextp);

	VerilatedVcdC* tfp = new VerilatedVcdC;
	contextp->traceEverOn(true);
	top->trace(tfp,0);
	tfp->open("wave.vcd");

	int count = 0;
	// int value = 0;

	while(!contextp->gotFinish()){
        int a = rand() % 5;
		int b = rand() % 5;
		top->a = a;
		top->b = b;
		top->eval();
		
		tfp->dump(contextp->time());
		contextp->timeInc(1);
		
		// assert(top->f == (y==3?(y==2?(y==1? 1:0):2):3));
		printf("%d+%d=%d\n",a,b,top->f);
	
		count++;
		if(count >10){
			break;
		}
	}
	
	delete top;
	tfp->close();
	delete contextp;
	return 0;
}
