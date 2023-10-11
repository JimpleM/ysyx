#include "include/risc32_lib.h"

uint8_t pmem[PMEM_SIZE] = {};

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - PMEM_LEFT; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + PMEM_LEFT; }

word_t host_read(void *addr, int len) {
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    // IFDEF(CONFIG_ISA64, case 8: return *(uint64_t *)addr);
    // default: MUXDEF(CONFIG_RT_CHECK, assert(0), return 0);
    default: assert(0);
  }
}

void host_write(void *addr, int len, word_t data) {
  switch (len) {
    case 1: *(uint8_t  *)addr = data; return;
    case 2: *(uint16_t *)addr = data; return;
    case 4: *(uint32_t *)addr = data; return;
    // IFDEF(CONFIG_ISA64, case 8: *(uint64_t *)addr = data; return);
    // IFDEF(CONFIG_RT_CHECK, default: assert(0));
    // default: assert(0);
  }
}

uint32_t pmem_read(uint32_t addr, int len){
    printf("%x %d\n",addr,len);
    printf("%p\n",pmem);
    printf("%p\n",guest_to_host(addr),len);
    uint32_t ret = host_read(guest_to_host(addr), len);
    printf("%x\n",ret);
    return ret;
}

void pmem_write(uint32_t addr, uint32_t data, int len){
    host_write(guest_to_host(addr), len, data);
}