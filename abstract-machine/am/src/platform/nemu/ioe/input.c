#include <am.h>
#include <nemu.h>
//#include <stdio.h>
#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  //kbd->keydown = 1;
  //kbd->keydown = (kbd->keycode == AM_KEY_NONE) ? 0 : 1;
  unsigned x = inl(KBD_ADDR);// 0x8032, etc
  //putch((char)x);
  //printf("%x\n",KBD_ADDR);
  kbd->keycode = x+1;// only accept 0-256, 0x80xx is invalid
  kbd->keydown = x & KEYDOWN_MASK;
}
