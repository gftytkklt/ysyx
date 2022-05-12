#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  kbd->keydown = 1;
  kbd->keycode = inl(KBD_ADDR);
  //kbd->keydown = (kbd->keycode == AM_KEY_NONE) ? 0 : 1;
}
