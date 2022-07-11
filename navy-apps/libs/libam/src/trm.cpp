#include <am.h>
#include <klib-macros.h>
extern char _heap_start;
Area heap=RANGE(&_heap_start, 0x83000000);
//Area heap;

extern int write(int, const void *, size_t);
void putch(char ch) {
  write(1, &ch, 1);
}
//intptr_t _syscall_(intptr_t type, intptr_t a0, intptr_t a1, intptr_t a2);
//extern intptr_t _syscall_(intptr_t, intptr_t, intptr_t, intptr_t);
extern int exit(int);
void halt(int code) {
  //asm volatile (SYSCALL : "r"(code));
  exit(code);
  //_syscall_(0, code, 0, 0);
  // should not reach here
  while (1);
  //exit(code);
  //return;
}
