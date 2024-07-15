#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

bool vme_init(void* (*pgalloc_f)(int), void (*pgfree_f)(void*)) {
  return false;
}

void protect(AddrSpace *as) {
}

void unprotect(AddrSpace *as) {
}

void map(AddrSpace *as, void *va, void *pa, int prot) {
}

Context *ucontext(AddrSpace *as, Area kstack, void *entry) {
  // 从栈中分配空间并初始化
  Context *c = (Context *)((uintptr_t)kstack.end - sizeof(Context));
  memset(c,0,sizeof(Context));

  assert(kstack.end - (void *)c == sizeof(Context));

  c->mepc = (uintptr_t) entry;
  c->mstatus = 0x1800;

  return c;
}
