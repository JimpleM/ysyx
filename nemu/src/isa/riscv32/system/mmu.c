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
#include <memory/vaddr.h>
#include <memory/paddr.h>

#define VPN1(va) (va >> 22)
#define VPN0(va) ((va >> 12) & 0x000003ff)
#define OFFSET(va) (va & 0x00000fff)

int isa_mmu_check(vaddr_t vaddr, int len, int type){
  // 只有最高1位为mode
  return (cpu.csr[SATP] >> 31);
}
extern NEMUState nemu_state;
paddr_t isa_mmu_translate(vaddr_t vaddr, int len, int type) {
  
  // SATP写入的时候左移了12位

  // paddr_t pde = (paddr_t *)(guest_to_host((paddr_t)(cpu.csr[SATP] << 12)));
  // assert(pde != NULL);

  // paddr_t *pte = (paddr_t *)(guest_to_host((paddr_t)(pde[VPN1(vaddr)])));
  // assert(pte != NULL);
  
  // paddr_t paddr = (paddr_t)((pte[VPN0(vaddr)]) | OFFSET(vaddr));
  // assert(vaddr>=0x40000000 && vaddr <= 0xa1200000);
  // // assert(vaddr == paddr);

  paddr_t pte1_addr = (cpu.csr[SATP] << 12) + VPN1(vaddr)*sizeof(pte_t);
  pte_t pte1;
  pte1.val = paddr_read(pte1_addr,sizeof(paddr_t));
  if(pte1.V == 0){
    // printf("vaddr: 0x%x, pte1: 0x%x\n",vaddr,pte1.val);
    Assert(0,"vaddr: 0x%x, pte1: 0x%x\n",vaddr,pte1.val);
    nemu_state.state = NEMU_ABORT;
    return vaddr;
  }

  paddr_t pte0_addr = (pte1.ppn << 10) + VPN0(vaddr)*sizeof(pte_t);
  pte_t pte0;
  pte0.val = paddr_read(pte0_addr,sizeof(paddr_t));



  return (pte0.ppn << 10) + OFFSET(vaddr);
}

