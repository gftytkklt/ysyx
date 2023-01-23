#include <am.h>
#include <npc.h>
#define KEYDOWN_MASK 0x8000
#define KEYNUM_MASK 0x7fff
void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  unsigned x = *(volatile uint32_t *)(KBD_ADDR);
  kbd->keycode = x & KEYNUM_MASK;// only accept 0-256, 0x80xx is invalid
  kbd->keydown = x & KEYDOWN_MASK;
}
