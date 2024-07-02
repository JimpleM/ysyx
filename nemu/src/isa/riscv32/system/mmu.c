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

paddr_t isa_mmu_translate(vaddr_t vaddr, int len, int type) {
  
  // SATP写入的时候左移了12位
  paddr_t *pde = (paddr_t *)(guest_to_host((paddr_t)(cpu.csr[SATP] << 12)));
  assert(pde != NULL);

  paddr_t *pte = (paddr_t *)(guest_to_host((paddr_t)(pde[VPN1(vaddr)])));
  assert(pte != NULL);

  paddr_t paddr = (paddr_t)(pte[VPN0(vaddr)] | OFFSET(vaddr));

  assert(vaddr == paddr);

  return paddr;
}

