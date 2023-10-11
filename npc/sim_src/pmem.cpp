#include <include/risc32_lib.h>

uint8_t pmem [PMEM_SIZE];


void riscv_pmem_read(int raddr, int *rdata, svBit ren){
	*rdata = 0x80000000;
}

void riscv_pmem_write(int waddr, int wdata, int wmask){

}