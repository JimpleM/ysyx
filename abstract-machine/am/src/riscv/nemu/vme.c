#include <am.h>
#include <nemu.h>
#include <klib.h>

static AddrSpace kas = {};
static void* (*pgalloc_usr)(int) = NULL;
static void (*pgfree_usr)(void*) = NULL;
int vme_enable = 0;

static Area segments[] = {      // Kernel memory mappings
  NEMU_PADDR_SPACE
};

#define USER_SPACE RANGE(0x40000000, 0x80000000)

static inline void set_satp(void *pdir) {
  uintptr_t mode = 1ul << (__riscv_xlen - 1);
  asm volatile("csrw satp, %0" : : "r"(mode | ((uintptr_t)pdir >> 12)));
}

static inline uintptr_t get_satp() {
  uintptr_t satp;
  asm volatile("csrr %0, satp" : "=r"(satp));
  // printf("get_satp satp:%x\n",satp << 12);
  return satp << 12;
}

bool vme_init(void* (*pgalloc_f)(int), void (*pgfree_f)(void*)) {
  pgalloc_usr = pgalloc_f;
  pgfree_usr = pgfree_f;
  printf("pgalloc:%d Byte\n",PGSIZE);
  kas.ptr = pgalloc_f(PGSIZE);
  int i;
  for (i = 0; i < LENGTH(segments); i ++) {
    void *va = segments[i].start;
    printf("vme_init: as->ptr:%x va:[%x %x]\n",kas.ptr,segments[i].start,segments[i].end);
    for (; va < segments[i].end; va += PGSIZE) {
      map(&kas, va, va, PAGE_READ|PAGE_WRITE|PAGE_EXEC|PAGE_USER);
    }
  }

  set_satp(kas.ptr);
  vme_enable = 1;

  return true;
}

void protect(AddrSpace *as) {
  PTE *updir = (PTE*)(pgalloc_usr(PGSIZE));
  as->ptr = updir;
  as->area = USER_SPACE;
  as->pgsize = PGSIZE;
  // map kernel space
  memcpy(updir, kas.ptr, PGSIZE);
}

void unprotect(AddrSpace *as) {
}


void __am_get_cur_as(Context *c) {
  c->pdir = (vme_enable ? (void *)get_satp() : NULL);
}

void __am_switch(Context *c) {
  // if((uintptr_t)c->pdir == 0x82BCD000){
  //   return ;
  // }
  // printf("__am_switch Context %x\n",c);
  if (vme_enable && c->pdir != NULL) {
      // printf("__am_switch Context %x\n",c->pdir);
    set_satp(c->pdir);
  }
}

#define VPN1(va) (((PTE)va >> 22) & 0x3ff)
#define VPN0(va) (((PTE)va >> 12) & 0x3ff)
#define PPN(pte) ((PTE)pte & 0xfffff000)

void map(AddrSpace *as, void *va, void *pa, int prot) {
  assert(((uintptr_t)va & 0x3ff) == 0);
  assert(((uintptr_t)pa & 0x3ff) == 0);
  assert(as != NULL);
  assert(((uintptr_t)as->ptr & 0x3ff) == 0);

  PTE *pte1 = (PTE *)((PTE)as->ptr + VPN1(va)*sizeof(PTE));
  if(((*pte1)&PAGE_PRESENT) == 0){
    *pte1 = (PTE)pgalloc_usr(PGSIZE) | PAGE_PRESENT;
  }

  PTE *pte0 = (PTE *)(PPN(*pte1) + VPN0(va)*sizeof(PTE));
  //XWRV

  *pte0 = ((PTE)pa & (~0xfff)) | (prot | PAGE_PRESENT | PAGE_ACCESS | PAGE_DIRTY); 

  // PTE *pte1 = (PTE *)(as->ptr);
  // if((pte1[VPN1(va)] & 0X1) == 0){
  //   pte1[VPN1(va)] = (PTE)pgalloc_usr(PGSIZE) | 1;
  // }

  // PTE *pte0 = (PTE *)pte1[VPN1(va)];
  // if(pte0[VPN0(va)] == 0){
  //   pte0[VPN0(va)] = PPN(pa) | prot;
  // }

}
extern void __am_asm_trap(void);

Context *ucontext(AddrSpace *as, Area kstack, void *entry) {
  // 从栈中分配空间并初始化
  Context *c = (Context *)((uintptr_t)kstack.end - sizeof(Context));
  memset(c,0,sizeof(Context));

  assert(kstack.end - (void *)c == sizeof(Context));


  c->pdir = as->ptr;
  // printf("ucontext c->pdir%x\n",c->pdir);
  c->mepc = (uintptr_t) entry;
  // 00用户模式
  c->mstatus = 0x000c0080;
  c->mcause  = 0;

  return c;
}
