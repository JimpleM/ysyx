

#include "common.h"
#include <assert.h>
#include "pmem.h"
#include "device_lib.h"

// #include "VysyxSoCFull__Dpi.h"
#include "verilated_dpi.h"


bool riscv32_rst = false;
int stop_flag = 0;
// 有外设读取的情况
uint32_t device_flag = 0;

uint32_t cpu_pc;
uint32_t cpu_inst;
uint32_t *cpu_gpr = NULL;
uint32_t *cpu_csr = NULL;

extern NPCState npc_state;
extern VysyxSoCFull* top;

extern "C" void flash_read(uint32_t addr, uint32_t *data) {
	assert(0); 
}
extern "C" void mrom_read(uint32_t addr, uint32_t *data) {
	if(addr >= 0x20000000 && addr <= 0x20000fff){
		uint32_t raddr = addr;
		*data = pmem_read((uint32_t)raddr,4);
		// if(*data == 0x0000006f){
		// 	*data = 0x00100073;
		// }
		printf("%08x %08x\n",addr,*data);
	}else{
		panic("address =  0x%8x  is out of bound",addr);
	}

}

extern "C" void set_axi_resp(int b_resp,int r_resp){
	if(b_resp){
		npc_state.state = NPC_ABORT;
		printf("axi write errors, err_code: %d!\n",b_resp);
	}
	if(r_resp){
		npc_state.state = NPC_ABORT;
		printf("axi write errors, err_code: %d!\n",r_resp);
	}
}

extern "C" void set_pc_ptr(int pc,int inst,svBit valid){
	if(valid){
		cpu_pc = (uint32_t) pc;
		cpu_inst = (uint32_t) inst;
	}
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint32_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

extern "C" void set_csr_ptr(const svOpenArrayHandle r) {
  cpu_csr = (uint32_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

extern "C" void get_riscv32_rst(svBit reset) {
  if(reset){
	riscv32_rst = true;
	// printf("reseting\n");
  }else{
	riscv32_rst = false;
  }
}

extern "C" void riscv_pmem_read(int raddr, int *rdata, svBit ren){
	if(ren){
		if(in_pmem(raddr)){
			// printf("%8x\n",raddr);
			*rdata = pmem_read((uint32_t)raddr,4);
			if(*rdata == 0x00100073){
				stop_flag = 1;
			}
			// if(raddr == 0x80001200){ //gpr 13
			// 	stop_flag = 1;
			// }
		}else{
			device_flag = 1;
			// printf("%8x\n",raddr);
			*rdata = device_read((uint32_t) raddr);
		}

#ifdef CONFIG_MTRACE
	if(top->clock == 0){
		if(raddr >= CONFIG_MTRACE_START_ADDR && raddr <= CONFIG_MTRACE_END_ADDR){
			printf("read address:%08x data:%08x\n",raddr,*rdata);
		}
	}
#endif
	}else{
		*rdata = 0;
	}
}

extern "C" void riscv_pmem_write(int waddr, int wdata, int wmask,svBit wen){
	if(wen){
		// printf("%8x\n",waddr);
		if(in_pmem(waddr)){
			pmem_write((uint32_t)waddr,(uint32_t)wdata,wmask);
		}else{
			device_write((uint32_t) waddr, (uint32_t) wdata);
		}
	}
#ifdef CONFIG_MTRACE
	if(top->clock == 0){
		if(waddr >= CONFIG_MTRACE_START_ADDR && waddr <= CONFIG_MTRACE_END_ADDR){
			printf("write address:%08x data:%08x\n",waddr,wdata);
		}
	}
#endif
	
}

extern "C" void riscv_uart_write(int wdata,svBit wen){
	if(wen){
		uart_write(wdata);
	}
}

