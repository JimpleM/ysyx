#include <memory.h>
#include <proc.h>

static void *pf = NULL;

void* new_page(size_t nr_page) {
  void *last_pf = pf;
  memset(pf,0,nr_page * PGSIZE);
  pf = (void *)((uintptr_t)pf + nr_page * PGSIZE);
  // printf("new_page:[%x - %x]\n",last_pf,pf);
  assert((uintptr_t)pf == ((uintptr_t)last_pf+ nr_page * PGSIZE));
  return last_pf;
}

#ifdef HAS_VME
static void* pg_alloc(int n) {
  // 4096 为 右移 12位
  assert((n&0x00000fff) == 0);
  return new_page(n >> 12);
}
#endif

void free_page(void *p) {
  panic("not implement yet");
}

/* The brk() system call handler. */
int mm_brk(uintptr_t brk) {
  current->max_brk = ROUNDUP(current->max_brk, PGSIZE);
  if(brk > current->max_brk){
    int page_num = ROUNDUP(brk - current->max_brk, PGSIZE) >> 12;
    uintptr_t page_ptr = (uintptr_t)new_page(page_num);
    for(int i=0; i<page_num; i++){
      map(&current->as,(void *)(current->max_brk+(i << 12)),(void *)(page_ptr+(i << 12)),MMAP_READ|MMAP_WRITE);
    }
    current->max_brk += (page_num << 12);
  }
  return 0;
}

void init_mm() {
  pf = (void *)ROUNDUP(heap.start, PGSIZE);
  Log("free physical pages starting from %p", pf);

#ifdef HAS_VME
  vme_init(pg_alloc, free_page);
#endif
}
