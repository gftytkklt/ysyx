#include <am.h>
#include <nemu.h>
#include <stdio.h>
#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  //kbd->keydown = 1;
  printf("%x\n",KBD_ADDR);
  kbd->keydown = (kbd->keycode == AM_KEY_NONE) ? 0 : 1;
  kbd->keycode = inl(KBD_ADDR);
}
