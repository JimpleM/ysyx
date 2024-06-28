#include <proc.h>

#define MAX_NR_PROC 4

static PCB pcb[MAX_NR_PROC] __attribute__((used)) = {};
static PCB pcb_boot = {};
PCB *current = NULL;

void switch_boot_pcb() {
  current = &pcb_boot;
}

void hello_fun(void *arg) {
  int j = 1;
  while (1) {
    if(j==100000){
      Log("Hello World from Nanos-lite with arg '%s' for the %dth time!", (uintptr_t)arg, j);
      j = 0;
    }
    j ++;
    yield();
  }
}

void init_proc() {
  context_kload(&pcb[0], hello_fun, "abcd");
  context_kload(&pcb[1], hello_fun, "efgh");

  switch_boot_pcb();

  Log("Initializing processes...");

  // load program here
  // naive_uload(NULL,NULL);
  // naive_uload(NULL,"/bin/hello");
  // naive_uload(NULL,"/bin/timer-test");
  // naive_uload(NULL,"/bin/event-test");
  // naive_uload(NULL,"/bin/bmp-test");
  // naive_uload(NULL,"/bin/nslider");
  // naive_uload(NULL,"/bin/pal");
  // naive_uload(NULL,"/bin/nterm");

}

Context* schedule(Context *prev) {
  current->cp = prev;
  current = (current == &pcb[0] ? &pcb[1]: &pcb[0]);
  return current->cp;
}
