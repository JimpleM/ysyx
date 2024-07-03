#include <common.h>
#include "proc.h"
extern void do_syscall(Context *c);

static Context* do_event(Event e, Context* c) {
  printf("do_event%d\n",e.event);
  switch (e.event) {
    case EVENT_YIELD:
      c->mepc +=4;
      return schedule(c);
      break;
    case EVENT_SYSCALL:
      c->mepc +=4;
      do_syscall(c);
      break;
    case EVENT_IRQ_TIMER:
      return schedule(c);
      break;
    default: panic("Unhandled event ID = %d", e.event);
  }

  return c;
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
}
