#include <am.h>
#include <klib-macros.h>
#include "ysyxsoc.h"
#include <assert.h>
#include <string.h>

extern char _heap_start,_heap_end,_rodata_end,_bss_end,_text_start;
int main(const char *args);

extern char _pmem_start;
#define PMEM_SIZE 0x0fffffff
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)

Area heap = RANGE(&_heap_start, &_heap_end);
#ifndef MAINARGS
#define MAINARGS ""
#endif
// static const char mainargs[] = MAINARGS;

extern char _data_lma_start,_data_vma_start,_bss_start,_bss_end,_sram_origin,_flash_origin,_text_start,_rodata_end;
extern char _main_start;
extern char _bss_end;
uint32_t number;

void putch(char ch) {
  //这里要加东西
  while((inb(SERIAL_PORT+5)&0x20) == 0){
    
  }
  outb(SERIAL_PORT, ch);
}
void print_char(uint32_t){
  putch((number&0xff000000) >> 24);
  putch((number&0x00ff0000) >> 16);
  putch((number&0x0000ff00) >> 8);
  putch((number&0x000000ff) >> 0);
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
// 进行32位地址拷贝
void bootloader(){
  uint32_t src = (uint32_t)&_flash_origin;
  uint32_t dst = (uint32_t)&_sram_origin;
  uint32_t start = (uint32_t)&_text_start;
  uint32_t end = (uint32_t)&_bss_end;
  while(start < end){
    *(volatile uint32_t *)dst = *(volatile uint32_t *)src;
    dst += 4;
    src += 4;
    start += 4;
  }
}

void _trm_init() {
  // memcpy(&_data_vma_start,&_data_lma_start,&_bss_start-&_data_vma_start);
  // printf("%x %x %x\n",&_text_start,&_bss_end-&_text_start,&_bss_end);

  uart_init();
  bootloader();
  
  // asm volatile("csrr %0, %1" : "=r"(number) : "i"(0xF11));
  // print_char(number);
  // asm volatile("csrr %0, %1" : "=r"(number) : "i"(0xF12));
  // printf("%d\n",number);
  // uint32_t number;
  // asm volatile("auipc %0,%1" :"=r"(number) :"i"(0xDF000));
  // asm volatile("jalr x0,0(%0)" :"=r"(number));
  // ((void *)main(mainargs));
  // uint32_t main_address = (uint32_t)&_main_start-(uint32_t)&_flash_origin+(uint32_t)&_sram_origin;
  // asm volatile ("addi %0, zero, 4" : "=r"());
}

void _run_main(){
  asm volatile ("auipc	a0,0x0");
  asm volatile ("addi	a0,a0,88");
  uint32_t main_addr = (uint32_t)&main - (uint32_t)&_flash_origin+(uint32_t)&_sram_origin;
  asm volatile ("jr %0" : :"r"(main_addr));
  // no reach here
  // int ret = main(mainargs);
  // halt(ret);
}
