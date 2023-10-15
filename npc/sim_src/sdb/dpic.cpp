

#include "common.h"

#include "Vriscv32__Dpi.h"
#include "verilated_dpi.h"


bool riscv32_rst = false;


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

extern "C" void riscv_pmem_read(int raddr, int *rdata, svBit ren){
	if(ren){
		*rdata = pmem_read((uint32_t)raddr,4);
		if(*rdata == 0x00100073){
			stop_flag = 1;
		}
	}
}

extern "C" void riscv_pmem_write(int waddr, int wdata, int wmask){
	pmem_write((uint32_t)waddr,(uint32_t)wdata,wmask);
}

