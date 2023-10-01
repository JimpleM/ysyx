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

// this is not consistent with uint8_t
// but it is ok since we do not access the array directly
static const uint32_t img [] = {
  // 0x00000297,  // auipc t0,0
  // 0x00028823,  // sb  zero,16(t0)
  // 0x0102c503,  // lbu a0,16(t0)
  // 0x00100073,  // ebreak (used as nemu_trap)
  // 0xdeadbeef,  // some data
    0x00000413 , 
    0x00009117 , 
    0xffc10113 , 
    0x0f0000ef , 
    0x00050463 , 
    0x00008067 , 
    0xffc10113 , 
    0x00100513 , 
    0x00112023 , 
    0x0cc000ef , 
    0xfe410113 , 
    0x00000797 , 
    0x0f478793 , 
    0x00f12423 , 
    0x00000797 , 
    0x1e878793 , 
    0x00112c23 , 
    0x00812a23 , 
    0x00912823 , 
    0x00f12223 , 
    0x00012623 , 
    0x00412783 , 
    0x00812403 , 
    0x00000497 , 
    0x1c448493 , 
    0x0007a783 , 
    0x00f12023 , 
    0x00012783 , 
    0x0004a503 , 
    0x00042683 , 
    0x00448493 , 
    0x00a78533 , 
    0x40d50533 , 
    0x00153513 , 
    0xf89ff0ef , 
    0x00000797 , 
    0x1b478793 , 
    0x00440413 , 
    0xfc979ae3 , 
    0x00c12783 , 
    0x00100513 , 
    0x00878413 , 
    0x00812623 , 
    0xf65ff0ef , 
    0x00412783 , 
    0x00478793 , 
    0x00f12223 , 
    0x00812783 , 
    0x02078793 , 
    0x00f12423 , 
    0x04000793 , 
    0xf8f414e3 , 
    0x00100513 , 
    0xf3dff0ef , 
    0x01812083 , 
    0x01412403 , 
    0x01012483 , 
    0x00000513 , 
    0x01c10113 , 
    0x00008067 , 
    0x00050513 , 
    0x00100073 , 
    0x0000006f , 
    0xffc10113 , 
    0x00000517 , 
    0x01c50513 , 
    0x00112023 , 
    0xf1dff0ef , 
    0x00050513 , 
    0x00100073 , 
    0x0000006f , 
};

static void restart() {
  /* Set the initial program counter. */
  cpu.pc = RESET_VECTOR;

  /* The zero register is always 0. */
  cpu.gpr[0] = 0;
}

void init_isa() {
  /* Load built-in image. */
  memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));

  /* Initialize this virtual computer system. */
  restart();
}
