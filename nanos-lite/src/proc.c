#include <proc.h>

#define MAX_NR_PROC 4
void naive_uload(PCB *pcb, const char *filename);
static PCB pcb[MAX_NR_PROC] __attribute__((used)) = {};
static PCB pcb_boot = {};
PCB *current = NULL;

void switch_boot_pcb() {
  current = &pcb_boot;
}

void hello_fun(void *arg) {
  int j = 1;
  while (1) {
    Log("Hello World from Nanos-lite with arg '%p' for the %dth time!", (uintptr_t)arg, j);
    j ++;
    yield();
  }
}

void context_kload(PCB *pcb, void (*entry)(void *), void *arg){
  Area kstack;
  kstack.start = (void*)pcb->stack;
  kstack.end = (void*)pcb->stack + STACK_SIZE;
  kcontext(kstack, entry, arg);
}

void init_proc() {
  printf("init begin\n");
  context_kload(&pcb[0], hello_fun, NULL);
  printf("init end\n");
  switch_boot_pcb();

  Log("Initializing processes...");
  // load program here
  naive_uload(NULL,"/bin/dummy");
  //printf("load end\n");
}

Context* schedule(Context *prev) {
  // save the context pointer
  current->cp = prev;

  // always select pcb[0] as the new process
  current = &pcb[0];

  // then return the new context
  return current->cp;
  //return NULL;
}
