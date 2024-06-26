#include <common.h>
#include "syscall.h"

#define STRACE
#ifdef STRACE
#define Strace_Log(format, ...) Log(format,## __VA_ARGS__)
#else
#define Strace_Log(format, ...)
#endif

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1; //reg a5
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;
  // Strace_Log("a[0]:%d",a[0]);
  switch (a[0]) {
    case SYS_exit:
      Strace_Log("SYS_exit");
      halt(0);
      break;
    case SYS_yield:
      Strace_Log("SYS_yield");
      yield();
      break;

    case SYS_write:
      Strace_Log("SYS_write,fd:%d",a[1]);
      char *ch = (char *)a[2];
      for(int i=0; i<a[3]; i++){
        putch(ch[i]);
      }
      // 成功write要返回长度，失败返回-1
      c->GPRx = a[3];
      break;
    case SYS_brk:
      Strace_Log("SYS_brk");
      c->GPRx = 0;
      break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
