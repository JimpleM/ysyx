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
#include <cpu/difftest.h>
#include "../local-include/reg.h"

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  for(int i=0; i<32; i++){
    // 由于mstatus还没弄，先用这种方式避过difftest
    // if(gpr(6) == 0x00001800){
    //   continue;
    // }
    if(gpr(i) != ref_r->gpr[i]){
      printf("%d: ref:0x%08x dut:0x%08x  \n",i,ref_r->gpr[i],gpr(i));
      return false;
    }
  }
  if(ref_r->pc != pc){
     printf("ref:0x%08x  dut:0x%08x  \n",ref_r->pc,pc);
    return false;
  }

  if(ref_r->csr[0] != cpu.csr[0]){
     printf("MSTATUS :ref:0x%08x  dut:0x%08x  \n",ref_r->csr[0],cpu.csr[0]);
    return false;
  }
  if(ref_r->csr[1] != cpu.csr[1]){
     printf("MTVEC   :ref:0x%08x  dut:0x%08x  \n",ref_r->csr[1],cpu.csr[1]);
    return false;
  }
  if(ref_r->csr[2] != cpu.csr[2]){
     printf("MEPC    :ref:0x%08x  dut:0x%08x  \n",ref_r->csr[2],cpu.csr[2]);
    return false;
  }
  if(ref_r->csr[3] != cpu.csr[3]){
     printf("MCAUSE  :ref:0x%08x  dut:0x%08x  \n",ref_r->csr[3],cpu.csr[3]);
    return false;
  }
  if(ref_r->csr[4] != cpu.csr[4]){
     printf("SATP    :ref:0x%08x  dut:0x%08x  \n",ref_r->csr[4],cpu.csr[4]);
    return false;
  }
  return true;
}

void isa_difftest_attach() {
}
