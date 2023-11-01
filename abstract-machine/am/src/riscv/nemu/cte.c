#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>
// 声明函数指针
static Context* (*user_handler)(Event, Context*) = NULL;
// 终端处理
Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
      case 1:   ev.event = EVENT_YIELD; break;
      default:  ev.event = EVENT_ERROR; printf("event_error: %d\n",c->mcause); break;
    }

    c = user_handler(ev, c);
    assert(c != NULL);
  }

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
  Context *c = (Context*)kstack.end - 1;

  c->GPR1 = (uintptr_t)arg;
  c->GPR2 = (uintptr_t)entry;

  return c;
}

void yield() {
#ifdef __riscv_e
  asm volatile("li a5, -1; ecall");
#else
  asm volatile("li a7, -1; ecall");
#endif
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
