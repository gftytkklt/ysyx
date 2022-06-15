#include <common.h>
#include "syscall.h"
#define CONFIG_STRACE
#ifdef CONFIG_STRACE
void print_strace(uintptr_t a1,uintptr_t a2,uintptr_t a3,uintptr_t a4,uintptr_t ret, bool has_ret){
  if(has_ret){
    printf("type: %ld, parameters: %ld, %ld, %ld, ret: %ld\n",a1,a2,a3,a4,ret);
  }
  else{
    printf("type: %ld, parameters: %ld, %ld, %ld\n",a1,a2,a3,a4);
  }
}
#endif
//extern char end;
//void *program_break = &end;
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

int brk(void *addr){
  //*end = 
  return 0;
}
void do_syscall(Context *c) {
  uintptr_t a[4], ret;
  bool has_ret = true;
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;
  //ret = c->GPRx;
  switch (a[0]) {
    case SYS_exit: sys_exit(a[1]);has_ret=false;break;
    case SYS_yield: c->GPRx = sys_yield();break;
    case SYS_write: c->GPRx = write((int)a[1],(void*)a[2],(size_t)a[3]);break;
    case SYS_brk: c->GPRx = brk((void*)a[1]);break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
  ret = c->GPRx;
  #ifdef CONFIG_STRACE
  print_strace(a[0],a[1],a[2],a[3],ret,has_ret);
  #endif
}
