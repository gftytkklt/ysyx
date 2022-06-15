#include <common.h>
#include "syscall.h"
#define CONFIG_STRACE
#ifdef CONFIG_STRACE
void print_strace(Context *c){
  printf("type: %ld, parameters: %ld, %ld, %ld, ret: %ld\n",c->GPR1, c->GPR2, c->GPR3, c->GPR4, c->GPRx);
}
#endif
static int sys_yield(){
  yield();
  return 0;
}

void sys_exit(uintptr_t ret){
  halt(ret);
}
void do_syscall(Context *c) {
  uintptr_t a[4], ret;
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;
  ret = c->GPRx;
  #ifdef CONFIG_STRACE
  print_strace(c);
  #endif
  switch (a[0]) {
    case SYS_exit: sys_exit(ret);break;
    case SYS_yield: sys_yield();break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
