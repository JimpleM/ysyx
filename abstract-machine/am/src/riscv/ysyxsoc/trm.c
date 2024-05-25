#include <am.h>
#include <klib-macros.h>
#include "ysyxsoc.h"
#include <assert.h>
#include <string.h>

extern char _heap_start;
int main(const char *args);

extern char _pmem_start;
#define PMEM_SIZE 0x0fffffff
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)

Area heap = RANGE(&_heap_start, PMEM_END);
#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;

extern char _data_lma_start,_data_vma_start,_bss_start;

void putch(char ch) {
  //这里要加东西
  outb(SERIAL_PORT, ch);
}

void halt(int code) {
  // printf("finished\n");
  // from #include <nemu.h>
  asm volatile("mv a0, %0; ebreak" : :"r"(code));

  while (1);
}

void _trm_init() {
  memcpy(&_data_vma_start,&_data_lma_start,&_bss_start-&_data_vma_start);

  int ret = main(mainargs);
  halt(ret);
}
