#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
//#define HAS_ARG
void __libc_init_array(void);
int main(int argc, char *argv[], char *envp[]);
extern char **environ;
void call_main(uintptr_t *args) {
  //printf("in callmain, call main addr= %p\n", (void*)call_main);
  #ifdef HAS_ARG
  int argc = *((int*)args);
  //printf("argc = %d, addr = %p\n", argc, args);
  char **argv = (char **)((int*)args + 1);
  //printf("argv addr = %p\n", argv);
  //for (int i=0;i<argc;i++){
  //  printf("argv%p: %s\n", argv[i], argv[i]);
  //}
  char **envp = (char **)((char **)argv + argc + 1);
  //printf("envp addr = %p\n", envp);
  environ = envp;
  #else
  int argc = 0;
  char **argv = {NULL};
  char **envp ={NULL};
  #endif
  //printf("main start\n");
  //asm volatile("ld a0, 0(zero)");
  __libc_init_array();
  exit(main(argc, argv, envp));
  //main(argc, argv, envp);
  
  /*char *empty[] =  {NULL };
  environ = empty;
  exit(main(0, empty, empty));*/
  //assert(0);
}
