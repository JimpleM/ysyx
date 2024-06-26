#include <common.h>
#include "syscall.h"
#include "fs.h"

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
    case SYS_open:
      Strace_Log("SYS_open:%s",(const char*)a[1]);
      c->GPRx = fs_open((const char*)a[1],a[2],a[3]);
      break;
    case SYS_read:
      Strace_Log("SYS_read:%s",fs_fdname(a[1]));
      c->GPRx = fs_read(a[1],(void *)a[2],a[3]);
      break;
    case SYS_write:
      Strace_Log("SYS_write:%s",fs_fdname(a[1]));
      c->GPRx = fs_write(a[1],(void *)a[2],a[3]);
      break;
    case SYS_close:
      Strace_Log("SYS_close:%s",fs_fdname(a[1]));
      c->GPRx = fs_close(a[1]);
      break;
    case SYS_lseek:
      Strace_Log("SYS_lseek:%s",fs_fdname(a[1]));
      c->GPRx = fs_lseek(a[1],a[2],a[3]);
      break;
    case SYS_brk:
      Strace_Log("SYS_brk");
      c->GPRx = 0;
      break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
