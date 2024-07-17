

#include "common.h"
#include <assert.h>
#include "pmem.h"
#include "device_lib.h"
#include "difftest.h"


bool riscv32_rst = false;
int stop_flag = 0;
// 有外设读取的情况
uint32_t device_flag = 0;

uint32_t cpu_pc;
uint32_t cpu_inst;
uint32_t *cpu_gpr = NULL;
uint32_t *cpu_csr = NULL;

extern NPCState npc_state;
extern TOP_NAME* top;

uint32_t lst_inst = 0;
uint64_t inst_type_counter[64][2]; // 0 store inst number, 1 store clock

uint64_t ifu_inst_counter = 0;
uint64_t lsu_read_clock = 0;
uint64_t lsu_write_clock = 0;
uint64_t exu_data_counter = 0;

uint64_t Icache_access_counter[2];	// 0 store times, 1 clock
uint64_t Icache_miss_counter[2];
uint64_t ifu_jump_stall_counter[4][2];

#define PG_ALIGN __attribute((aligned(4096)))

extern uint8_t flash_mem [FLASH_SIZE];
extern uint8_t psram_mem [PSRAM_SIZE];

extern "C" void psram_read(uint32_t addr, uint32_t *data) {
	if(addr >= 0 && addr <= PSRAM_SIZE){
		*data = host_read(psram_mem+addr,4);
		// printf("psram read addr=%08x data=%08x\n",addr,*data);
	}else{
		panic("psram address =  0x%8x  is out of bound",addr);
	}
}
extern "C" void psram_write(uint32_t addr, uint32_t data,uint32_t mask) {
	if(addr >= 0 && addr <= PSRAM_SIZE){
		uint32_t wdata = data >> ((8-mask)*4);
		host_write(psram_mem+addr,mask/2,wdata);
		// *(uint32_t *)(psram_mem+addr) = data;
		// printf("psram write addr=%08x data=%08x %08x mask=%d\n",addr,wdata,data,mask/2);
	}else{
		panic("psram address =  0x%8x  is out of bound",addr);
	}
}

extern "C" void flash_read(uint32_t addr, uint32_t *data) {
	if(addr >= 0 && addr <= FLASH_SIZE){
		uint32_t raddr = addr&0xFFFFFFFC;
		*data = *(uint32_t *)(flash_mem+addr);
		// *data = pmem_read((uint32_t)raddr,4);
		// if(*data == 0x0000006f){
		// 	*data = 0x00100073;
		// }
		// printf("flash read addr=%08x data=%08x\n",addr,*data);
	}else{
		panic("flash address =  0x%8x  is out of bound",addr);
	}
}
extern "C" void mrom_read(uint32_t addr, uint32_t *data) {
	if(addr >= 0x20000000 && addr <= 0x20000fff){
		uint32_t raddr = addr&0xFFFFFFFC;
		*data = pmem_read((uint32_t)raddr,4);
		// if(*data == 0x0000006f){
		// 	*data = 0x00100073;
		// }
		// printf("%08x %08x\n",addr,*data);
	}else{
		panic("mrom address =  0x%8x  is out of bound",addr);
	}
}
extern "C" void device_skip(svBit ren,uint32_t raddr, svBit wen,uint32_t waddr) {
	if(ren){
		if(in_device(raddr)){
			// printf("skip");
			device_flag = 1;
		}
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

extern "C"  void inst_type_count(int inst){
	uint32_t opcode = (inst & 0x0000007F) >> 1;
	if(opcode < 64){
		if(lst_inst != inst){
			inst_type_counter[opcode][0]++;
			lst_inst = inst;
		}
		inst_type_counter[opcode][1]++;
	}
}


extern "C"  void ifu_inst_arrived(){
	ifu_inst_counter++;
}

extern "C"  void lsu_read_data(){
	lsu_read_clock++;
}
extern "C"  void lsu_write_data(){
	lsu_write_clock++;
}

extern "C"  void exu_data_finished(){
	exu_data_counter++;
}

extern "C"  void Icache_access(svBit valid){
	if(valid){
		Icache_access_counter[0]++;
	}
	Icache_access_counter[1]++;
}

extern "C"  void Icache_miss(svBit valid){
	if(valid){
		Icache_miss_counter[0]++;
	}
	Icache_miss_counter[1]++;
}

extern "C"  void ifu_jump_stall(int index, svBit valid){
	if(valid){
		ifu_jump_stall_counter[index][0]++;
	}
	ifu_jump_stall_counter[index][1]++;
}

//后面的函数已弃用

extern "C" void riscv_pmem_read(int raddr, int *rdata, svBit ren){
	if(ren){
		if(in_pmem(raddr)){
			*rdata = pmem_read((uint32_t)raddr,4);
			// printf("read: %8x %8x\n",raddr,*rdata);
			if(*rdata == 0x00100073){
				stop_flag = 1;
			}
			// if(raddr == 0x80001200){ //gpr 13
			// 	stop_flag = 1;
			// }
		}
		else{
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
		if(in_pmem(waddr)){
			// printf("write : %8x %8x\n",waddr,wdata);
			pmem_write((uint32_t)waddr,(uint32_t)wdata,(1 << wmask));
		}else{
			// device_count++;
			// if(device_count == 3){
			// printf("write : %8x %8x\n",waddr,wdata);
				device_write((uint32_t) waddr, (uint32_t) wdata);
			// 	device_count = 0;
			// }
			
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

