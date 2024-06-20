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

#include <isa.h>
#include <memory/paddr.h>

#define ITRACE_FP_DCACHE
#ifdef ITRACE_FP_DCACHE
extern FILE *itrace_fp;
char test[30];
#endif

word_t vaddr_ifetch(vaddr_t addr, int len) {
  return paddr_read(addr, len);
}

word_t vaddr_read(vaddr_t addr, int len) {
#ifdef ITRACE_FP_DCACHE
  if( addr < 0x10000000 || 0x10000100 < addr ){
    fprintf(itrace_fp,"l 0x%8x\n",addr);
  }
#endif
  return paddr_read(addr, len);
}

void vaddr_write(vaddr_t addr, int len, word_t data) {
  // Access Fault
  if(MROM_LEFT <= addr && addr <= MROM_RIGHT){
		panic("Access Fault! MROM address = " FMT_PADDR " can not write" , addr);
	}
#ifdef ITRACE_FP_DCACHE
  if( addr < 0x10000000 || 0x10000100 < addr ){
    fprintf(itrace_fp,"s 0x%8x\n",addr);
  }
#endif
  paddr_write(addr, len, data);
}
