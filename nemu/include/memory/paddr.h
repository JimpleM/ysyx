/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#ifndef __MEMORY_PADDR_H__
#define __MEMORY_PADDR_H__

#include <common.h>

#define PMEM_LEFT  ((paddr_t)CONFIG_MBASE)
#define PMEM_RIGHT ((paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1)
#define RESET_VECTOR (PMEM_LEFT + CONFIG_PC_RESET_OFFSET)

#define SRAM_LEFT			0x0F000000
#define SRAM_RIGHT		0x0FFFFFFF
#define SRAM_MBASE		0x08000000
#define MROM_LEFT			0x20000000
#define MROM_RIGHT 		0x20000FFF
#define MROM_MBASE		0x1F000000
// SRAM 0x0F000000~0x0FFFFFFF  ---->  pmem 0x07000000~0x07FFFFFF
// MROM 0x20000000~0x20000FFF  ---->  pmem 0x01000000~0x01000FFF

/* convert the guest physical address in the guest program to host virtual address in NEMU */
uint8_t* guest_to_host(paddr_t paddr);
/* convert the host virtual address in NEMU to guest physical address in the guest program */
paddr_t host_to_guest(uint8_t *haddr);

static inline bool in_pmem(paddr_t addr) {
  if(SRAM_LEFT <= addr && addr <= SRAM_RIGHT){
		return 1;	
	}
  if(addr - CONFIG_MBASE < CONFIG_MSIZE){
    return 1;
  }
  return 0;
}

word_t paddr_read(paddr_t addr, int len);
void paddr_write(paddr_t addr, int len, word_t data);

#endif
