#include "include/risc32_lib.h"

uint8_t pmem[PMEM_SIZE] PG_ALIGN = {};

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - PMEM_LEFT; }

static inline word_t host_read(void *addr, int len) {
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    // IFDEF(CONFIG_ISA64, case 8: return *(uint64_t *)addr);
    // default: MUXDEF(CONFIG_RT_CHECK, assert(0), return 0);
    default: assert(0);
  }
}

static inline void host_write(void *addr, int len, word_t data) {
  switch (len) {
    case 1: *(uint8_t  *)addr = data; return;
    case 2: *(uint16_t *)addr = data; return;
    case 4: *(uint32_t *)addr = data; return;
    // IFDEF(CONFIG_ISA64, case 8: *(uint64_t *)addr = data; return);
    // IFDEF(CONFIG_RT_CHECK, default: assert(0));
    default: assert(0);
  }
}

static uint32_t pmem_read(int addr, int len){
    uint32_t ret = host_read(guest_to_host(addr), len);
    return ret;
}

static void pmem_write(int addr, int data, int len){
    host_write(guest_to_host(addr), len, data);
}