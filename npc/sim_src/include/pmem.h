#ifndef __PMEM_H__
#define __PMEM_H__


#include "common.h"


//pmem
uint8_t* guest_to_host(paddr_t paddr);
uint32_t pmem_read(uint32_t addr, int len);
void pmem_write(uint32_t addr, uint32_t data, int len);

#endif





