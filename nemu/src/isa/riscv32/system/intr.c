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

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  if(NO == ECALL){
    printf("cpu.csr[MSTATUS]:%x\n",cpu.csr[MSTATUS]);
    if(cpu.csr[MSTATUS] & MSTATUS_MPP){
      cpu.csr[MCAUSE] = ECALL_M;
    }else{
      // cpu.csr[MCAUSE] = ECALL_M;
      cpu.csr[MCAUSE] = ECALL_U;
    }
  }else{
    cpu.csr[MCAUSE] = NO;
  }
  cpu.csr[MEPC] = epc;
  cpu.csr[MSTATUS] |= MSTATUS_MPP;
  // cpu.csr[MSTATUS] |= (cpu.csr[MSTATUS] & MSTATUS_MIE) ? MSTATUS_MPIE : 0;
  // cpu.csr[MSTATUS] &= ~MSTATUS_MIE;

  // printf("mtvex:%x\n",cpu.csr[MTVEC]);
  #ifdef CONFIG_ETRACE
    printf("etrace: epc:%x mcause:%d\n",epc,NO);
  #endif
  return cpu.csr[MTVEC];
}

word_t isa_ret_intr(){
  cpu.csr[MSTATUS] &= ~MSTATUS_MPP;
  // cpu.csr[MSTATUS] |= (cpu.csr[MSTATUS] & MSTATUS_MPIE) ? MSTATUS_MIE : 0;
  // cpu.csr[MSTATUS] |= MSTATUS_MPIE;

  return cpu.csr[MEPC];
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
