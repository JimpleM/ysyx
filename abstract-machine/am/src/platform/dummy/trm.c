#include <am.h>

Area heap = RANGE(NULL, NULL);

void putch(char ch) {
}

void halt(int code) {
  while (1);
}
void _trm_init() {
  int ret = main(mainargs);
  halt(ret);
}