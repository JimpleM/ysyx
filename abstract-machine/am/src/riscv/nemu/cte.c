#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>
// 声明函数指针
static Context* (*user_handler)(Event, Context*) = NULL;
void __am_get_cur_as(Context *c);
void __am_switch(Context *c);

// 终端处理
Context* __am_irq_handle(Context *c) {
  __am_get_cur_as(c);
  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
      case 11:
      case 8:
        // ev.event = EVENT_YIELD; 
        if (c->GPR1 == -1) {
          ev.event = EVENT_YIELD;
        }
        else {
          ev.event = EVENT_SYSCALL;
        }
        // 软件加4问题，不加4会在yield中不断调用__am_irq_handle，
        c->mepc +=4; // 放到软件层
        break;
      default:  
       ev.event = EVENT_ERROR; 
        // printf("event_error: %d\n",c->mcause); 
        break;
    }

    c = user_handler(ev, c);
    assert(c != NULL);
  }
__am_switch(c);
  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  Context *c = (Context*)((uintptr_t)kstack.end - sizeof(Context));
  // printf("%x %x %x\n",(uintptr_t)kstack.start,(uintptr_t)kstack.end,(uintptr_t)kstack.end-(uintptr_t)kstack.start);
  // printf("%x\n",(uintptr_t)kstack.end - sizeof(Context));
  // printf("%x\n",sizeof(Context));
  memset(c,0,sizeof(Context));

  assert(kstack.end - (void *)c == sizeof(Context));

  c->mepc = (uintptr_t)entry;
  //系统调用参数从a0-a7寄存器中传递,gpr[10]是a0寄存器 GPR1是a5/a7
  c->gpr[10] = (uintptr_t)arg;
  //配合difftest
  c->mstatus = 0x1800;
  // c->mcause  = 0;
  c->pdir   = NULL;

  return c;
}

void yield() {
#ifdef __riscv_e
  asm volatile("li a5, -1; ecall");
#else
// 使用a7寄存器调用自陷入指令
  asm volatile("li a7, -1; ecall");
#endif
}

bool ienabled() {
  return false;
}

void iset(bool enable) {

}
