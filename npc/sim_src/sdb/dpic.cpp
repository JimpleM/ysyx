

#include "common.h"

#include "pmem.h"

#include "Vriscv32__Dpi.h"
#include "verilated_dpi.h"


bool riscv32_rst = false;
int stop_flag = 0;

uint32_t cpu_pc;
uint32_t *cpu_gpr = NULL;


extern "C" void set_pc_ptr(int pc) {
  cpu_pc = (uint32_t) pc;
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint32_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

extern "C" void get_riscv32_rst(svBit rst_n) {
  if(rst_n){
	riscv32_rst = true;
  }else{
	riscv32_rst = false;
  }
}

int addr;
int data;

extern "C" void riscv_pmem_read(int raddr, int *rdata, svBit ren){
	if(ren){
		*rdata = pmem_read((uint32_t)raddr,4);
		if(*rdata == 0x00100073){
			stop_flag = 1;
		}
#ifdef CONFIG_MTRACE
	if(addr != raddr && data != *rdata){
		if(raddr >= CONFIG_MTRACE_START_ADDR && raddr <= CONFIG_MTRACE_END_ADDR){
			// printf("read address:%08x data:%08x\n",raddr,*rdata);
		}
		addr = raddr;
		data = *rdata;
	}
#endif
	}
}

extern "C" void riscv_pmem_write(int waddr, int wdata, int wmask){
	pmem_write((uint32_t)waddr,(uint32_t)wdata,wmask);
#ifdef CONFIG_MTRACE
	if(addr != waddr && data != wdata){
		if(waddr >= CONFIG_MTRACE_START_ADDR && waddr <= CONFIG_MTRACE_END_ADDR){
			printf("write address:%08x data:%08x\n",waddr,wdata);
		}
		addr = waddr;
		data = wdata;
	}
#endif
	
}

