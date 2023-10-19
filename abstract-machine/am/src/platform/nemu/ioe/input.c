#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  AM_INPUT_KEYBRD_T temp = io_read(AM_INPUT_KEYBRD);
  kbd->keydown = temp.keydown;
  kbd->keycode = temp.keycode | KEYDOWN_MASK;
}
