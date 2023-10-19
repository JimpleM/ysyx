#include <am.h>
#include <nemu.h>
#include <stdio.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  AM_INPUT_KEYBRD_T ev = io_read(AM_INPUT_KEYBRD);
  // printf("%x %x\n",ev.keydown,ev.keycode);
  kbd->keydown = ev.keydown;
  kbd->keycode = ev.keycode | KEYDOWN_MASK;
}
