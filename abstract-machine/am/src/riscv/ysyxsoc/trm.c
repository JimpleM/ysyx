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
  while((inb(SERIAL_PORT+5)&0x20) == 0){
    
  }
  outb(SERIAL_PORT, ch);
}

void halt(int code) {
  // printf("finished\n");
  // from #include <nemu.h>
  asm volatile("mv a0, %0; ebreak" : :"r"(code));

  while (1);
}
void uart_init(){
  outb(SERIAL_PORT+3,0x80); //设置LCR i 7th DLAB 为1
  outb(SERIAL_PORT  ,0x01);
  outb(SERIAL_PORT+1,0x00);
  outb(SERIAL_PORT+3,0x03); // 重新设置LCR
}

void _trm_init() {
  memcpy(&_data_vma_start,&_data_lma_start,&_bss_start-&_data_vma_start);
  
  uart_init();

  int ret = main(mainargs);
  halt(ret);
}
