#include <common.h>
#include "syscall.h"

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
  switch (a[0]) {
    case SYS_exit: sys_exit(ret);break;
    case SYS_yield: sys_yield();break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
