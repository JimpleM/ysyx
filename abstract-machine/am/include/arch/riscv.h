#ifndef ARCH_H__
#define ARCH_H__

#ifdef __riscv_e
#define NR_REGS 16
#else
#define NR_REGS 32
#endif

struct Context {
  // TODO: fix the order of these members to match trap.S
  uintptr_t gpr[NR_REGS], mcause, mstatus, mepc;
  void *pdir;
};

#ifdef __riscv_e
#define GPR1 gpr[15] // a5
#else
#define GPR1 gpr[17] // a7
#endif

#define GPR2 gpr[10]  //a0-a2
#define GPR3 gpr[11]
#define GPR4 gpr[12]
#define GPRx gpr[10]  //a0

#define PAGE_PRESENT  (1 << 0)
#define PAGE_READ     (1 << 1)
#define PAGE_WRITE    (1 << 2)
#define PAGE_EXEC     (1 << 3)
#define PAGE_USER     (1 << 4)
#define PAGE_GLOBAL   (1 << 5)
#define PAGE_ACCESS   (1 << 6)
#define PAGE_DIRTY    (1 << 7)

enum{
  INST_MISALIGNED,
  INST_ACCESS_FAULT,
  ILLEDGAL_INST,
  BREAKPOINT,
  LOAD_MISALIGNED,
  LOAD_FAULT,
  STORE_MISALIGNED,
  STORE_FAULT,
  ECALL_U,
  ECALL_S,
  ECALL = 10,
  ECALL_M,
  INST_PAGE_FAULT,
  LOAD_PAGE_FAULT,
  STORE_PAGE_FAULT = 15,
};
#endif
