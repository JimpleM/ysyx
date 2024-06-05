#include <am.h>
#include "ysyxsoc.h"
#include <amdev.h>

#define KEYDOWN_MASK 0x80000000

#define KEY_NAMES(key) KEY_##key,

const unsigned char ps2_to_am_map0[256] = {
/*0               1             2                 3                   4                   5                 6                 7
  8               9             A                 B                   C                   D                 E                 F        */
  AM_KEY_NONE,    AM_KEY_F9,    AM_KEY_NONE,      AM_KEY_F5,          AM_KEY_F3,          AM_KEY_F1,        AM_KEY_F2,        AM_KEY_F12,   // 0
  AM_KEY_NONE,    AM_KEY_F10,   AM_KEY_F8,        AM_KEY_F6,          AM_KEY_F4,          AM_KEY_TAB,       AM_KEY_GRAVE,     AM_KEY_NONE,  
  AM_KEY_NONE,    AM_KEY_LALT,  AM_KEY_LSHIFT,    AM_KEY_NONE,        AM_KEY_LCTRL,       AM_KEY_Q,         AM_KEY_1,         AM_KEY_NONE,  // 1
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_Z,         AM_KEY_S,           AM_KEY_A,           AM_KEY_W,         AM_KEY_2,         AM_KEY_NONE,
  AM_KEY_NONE,    AM_KEY_C,     AM_KEY_X,         AM_KEY_D,           AM_KEY_E,           AM_KEY_4,         AM_KEY_3,         AM_KEY_NONE,  // 2
  AM_KEY_NONE,    AM_KEY_SPACE, AM_KEY_V,         AM_KEY_F,           AM_KEY_T,           AM_KEY_R,         AM_KEY_5,         AM_KEY_NONE,
  AM_KEY_NONE,    AM_KEY_N,     AM_KEY_B,         AM_KEY_H,           AM_KEY_G,           AM_KEY_Y,         AM_KEY_6,         AM_KEY_NONE,  // 3
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_M,         AM_KEY_J,           AM_KEY_U,           AM_KEY_7,         AM_KEY_8,         AM_KEY_NONE,
  AM_KEY_NONE,    AM_KEY_COMMA, AM_KEY_K,         AM_KEY_I,           AM_KEY_O,           AM_KEY_0,         AM_KEY_9,         AM_KEY_NONE,  // 4
  AM_KEY_NONE,    AM_KEY_PERIOD,AM_KEY_SLASH,     AM_KEY_L,           AM_KEY_SEMICOLON,   AM_KEY_P,         AM_KEY_MINUS,     AM_KEY_NONE,
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_APOSTROPHE,AM_KEY_NONE,        AM_KEY_LEFTBRACKET, AM_KEY_EQUALS,    AM_KEY_NONE,      AM_KEY_NONE,  // 5
  AM_KEY_CAPSLOCK,AM_KEY_RSHIFT,AM_KEY_RETURN,    AM_KEY_RIGHTBRACKET,AM_KEY_NONE,        AM_KEY_BACKSLASH, AM_KEY_NONE,      AM_KEY_NONE,
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_BACKSPACE, AM_KEY_NONE,  // 6
  AM_KEY_NONE,    AM_KEY_1,     AM_KEY_NONE,      AM_KEY_4,           AM_KEY_7,           AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_2,         AM_KEY_5,           AM_KEY_6,           AM_KEY_8,         AM_KEY_ESCAPE,    AM_KEY_NONE,  // 7
  AM_KEY_F11,     AM_KEY_NONE,  AM_KEY_3,         AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_9,         AM_KEY_NONE,      AM_KEY_NONE,
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_F7,          AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,  // 8
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,  // 9
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,  // A
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,  // B
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,  // C
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,  // D
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,  // E
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,  // F
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE
};

const unsigned char ps2_to_am_map1[256] = {
/*0               1             2                 3                   4                   5                 6                 7
  8               9             A                 B                   C                   D                 E                 F        */
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,  // 0
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,
  AM_KEY_NONE,    AM_KEY_RALT,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_RCTRL,       AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,  // 1
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,  // 2
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,  // 3
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,  // 4
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,  // 5
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,  // 6
  AM_KEY_NONE,    AM_KEY_END,   AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_HOME,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,
  AM_KEY_INSERT,  AM_KEY_DELETE,AM_KEY_DOWN,      AM_KEY_NONE,        AM_KEY_RIGHT,       AM_KEY_UP,        AM_KEY_NONE,      AM_KEY_NONE,  // 7
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_PAGEDOWN,  AM_KEY_LEFT,        AM_KEY_NONE,        AM_KEY_PAGEUP,    AM_KEY_NONE,      AM_KEY_NONE,
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,  // 8
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,  // 9
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,  // A
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,  // B
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,  // C
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,  // D
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,  // E
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE,  // F
  AM_KEY_NONE,    AM_KEY_NONE,  AM_KEY_NONE,      AM_KEY_NONE,        AM_KEY_NONE,        AM_KEY_NONE,      AM_KEY_NONE,      AM_KEY_NONE
};
uint32_t ev;
uint32_t kb_flag;
// uint32_t sum;
// void delay(uint32_t count){
//   for(int i=0; i<count; i++){
//     sum += 1;
//   }
// }
void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  ev = inl(KBD_ADDR);
  // if(ev!=0 ){
  //   printf("1:%x\n",ev);
  // }
  kb_flag      = 0;
  kbd->keydown = 1; //默认为DOWN
  if((ev & 0x000000FF) == 0xE0){  //有E0即为复合键
    // delay(4000); //最好加一些delay
    ev = inl(KBD_ADDR);
    kb_flag = 1;
  }
  if((ev & 0x000000FF) == 0xF0){  //检测到F0就设为UP
    // delay(4000);
    ev = inl(KBD_ADDR);
    kbd->keydown = 0; 
  }
  if(kb_flag){
    kbd->keycode = ps2_to_am_map1[ev] & (~KEYDOWN_MASK);
  }else{
    kbd->keycode = ps2_to_am_map0[ev] & (~KEYDOWN_MASK);
  }

}
