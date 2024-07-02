#include <memory.h>

static void *pf = NULL;

void* new_page(size_t nr_page) {
  void *last_pf = pf;
  pf = (void *)((uintptr_t)pf + nr_page * PGSIZE);
  
  assert((uintptr_t)pf == ((uintptr_t)last_pf+ nr_page * PGSIZE));
  return last_pf;
}

#ifdef HAS_VME
static void* pg_alloc(int n) {
  // 4096 为 右移 12位
  assert((n&0x00000fff) == 0);
  size_t pg_page = (n >> 12);
  void *pg_ptr = new_page(pg_page);
  memset(pg_ptr,0,n);
  return pg_ptr;
}
#endif

void free_page(void *p) {
  panic("not implement yet");
}

/* The brk() system call handler. */
int mm_brk(uintptr_t brk) {
  return 0;
}

void init_mm() {
  pf = (void *)ROUNDUP(heap.start, PGSIZE);
  Log("free physical pages starting from %p", pf);

#ifdef HAS_VME
  vme_init(pg_alloc, free_page);
#endif
}
