#include <common.h>
#include "syscall.h"
#include "fs.h"
#include <sys/time.h>
#include "proc.h"

// #define STRACE
#ifdef STRACE
#define Strace_Log(format, ...) Log(format,## __VA_ARGS__)
#else
#define Strace_Log(format, ...)
#endif

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1; //reg a5 or a7
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;
  // Strace_Log("a[0]:%d",a[0]);
  switch (a[0]) {
    case SYS_exit:
      Strace_Log("SYS_exit");
      // naive_uload(current,"/bin/nterm");
      context_uload(current,"/bin/nterm",NULL,NULL);
      switch_boot_pcb();
      yield();
      halt(a[1]);
      break;
    case SYS_yield:
      Strace_Log("SYS_yield");
      yield();
      c->GPRx = 0;
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
    case SYS_execve:
      Strace_Log("SYS_execve");
      if(fs_open((char *)a[1],0,0)<0){
        c->GPRx = -2;
      }else{
        // naive_uload(current,(char *)a[1]);
        context_uload(current,(char *)a[1],(char **)a[2],(char **)a[3]);
        switch_boot_pcb();
        yield();
        c->GPRx = 0;
      }
      break;
    case SYS_gettimeofday:
      Strace_Log("SYS_gettimeofday");

      struct timeval *tv = (struct timeval *)a[1];
      size_t time = io_read(AM_TIMER_UPTIME).us;
      tv->tv_usec = time % 1000000;
      tv->tv_sec  = time / 1000000;

      c->GPRx = 0;
      break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
