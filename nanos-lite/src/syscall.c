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

long fs_write(int fd, const void *buf, size_t len);
long sys_write(int fd, void *buf, size_t count){
  // stdout, strerr
  char *tmp = (char*) buf;
  int write_size = 0;
  // stdin
  if(fd == 0){return 0;}
  // strout | stderr
  if(fd == 1 || fd == 2){
    while ((write_size < count) && (tmp[write_size] != '\0')){
      putch(tmp[write_size]);
      write_size++;
    }
  }
  // TODO: finish case in future task
  else {
    return fs_write(fd, buf, count);
    //return -1;
  }
  return write_size;
}

void sys_exit(uintptr_t ret){
  halt(ret);
}
int fs_open(const char *pathname, int flags, int mode);
int sys_open(const char *pathname, int flags, int mode){
  return fs_open(pathname, flags, mode);
}

long fs_read(int fd, void *buf, size_t len);
long sys_read(int fd, void *buf, size_t len){
  return fs_read(fd, buf, len);
}


//long sys_write(int fd, const void *buf, size_t len){
//  return fs_write(fd, buf, len);
//}

int fs_close(int fd);
int sys_close(int fd){
  return fs_close(fd);
}

long fs_lseek(int fd, size_t offset, int whence);
long sys_lseek(int fd, size_t offset, int whence){
  return fs_lseek(fd, offset, whence);
}

int sys_brk(void *addr){
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
    case SYS_open: c->GPRx = sys_open((const char *)a[1], (int)a[2], (int) a[3]);break;
    case SYS_read: c->GPRx = sys_read((int)a[1],(void*)a[2],(size_t)a[3]);break;
    case SYS_write: c->GPRx = sys_write((int)a[1],(void*)a[2],(size_t)a[3]);break;
    case SYS_close: c->GPRx = sys_close((int)a[1]);break;
    case SYS_lseek: c->GPRx = sys_lseek((int)a[1],(long)a[2],(int)a[3]);break;
    case SYS_brk: c->GPRx = sys_brk((void*)a[1]);break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
  ret = c->GPRx;
  #ifdef CONFIG_STRACE
  print_strace(a[0],a[1],a[2],a[3],ret,has_ret);
  #endif
}
