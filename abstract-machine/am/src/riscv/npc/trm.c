#include <am.h>
#include <npc.h>
#include <stdio.h>
extern char _heap_start;
int main(const char *args);

extern char _pmem_start;
#define PMEM_SIZE (128 * 1024 * 1024)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)

Area heap = RANGE(&_heap_start, PMEM_END);
#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;

void putch(char ch) {
  //io_write(AM_UART_TX, ch);
  *(volatile uint8_t  *)(0xa00003f8) = ch;
}

void halt(int code) {
  printf("return code = %02xh\n", code);
  //asm volatile("mv a0, %0; ebreak" : :"r"(code));
  npc_trap(code);
  while (1);
}

void _trm_init() {
  int ret = main(mainargs);
  halt(ret);
}
