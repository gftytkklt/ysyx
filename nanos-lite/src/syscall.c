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

long write(int fd, void *buf, size_t count){
  // stdout, strerr
  char *tmp = (char*) buf;
  int write_size = 0;
  if(fd == 1 || fd == 2){
    while ((write_size < count) && (tmp[write_size] != '\0')){
      putch(tmp[write_size]);
      write_size++;
    }
  }
  // TODO: finish case in future task
  else {
    return -1;
  }
  return write_size;
}

void sys_exit(uintptr_t ret){
  halt(ret);
}
void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;
  //ret = c->GPRx;
  #ifdef CONFIG_STRACE
  print_strace(c);
  #endif
  switch (a[0]) {
    case SYS_exit: sys_exit(a[1]);break;
    case SYS_yield: sys_yield();break;
    case SYS_write: write((int)a[1],(void*)a[2],(size_t)a[3]);break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
