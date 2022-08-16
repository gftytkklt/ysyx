#include <proc.h>

#define MAX_NR_PROC 4
void naive_uload(PCB *pcb, const char *filename);
void context_uload(PCB *pcb, const char *filename, char *const argv[], char *const envp[]);
static PCB pcb[MAX_NR_PROC] __attribute__((used)) = {};
static PCB pcb_boot = {};
PCB *current = NULL;

void switch_boot_pcb() {
  current = &pcb_boot;
}

void hello_fun(void *arg) {
  int j = 1;
  while (1) {
    Log("Hello World from Nanos-lite with arg '%s' for the %dth time!", (char*)arg, j);
    //Log("Hello World from Nanos-lite with arg '%s' for the %dth time!", (char*)arg, j);
    j ++;
    yield();
  }
}

void context_kload(PCB *pcb, void (*entry)(void *), void *arg){
  Area kstack;
  kstack.start = (void*)pcb->stack;
  kstack.end = (void*)pcb->stack + STACK_SIZE;
  printf("pcb: %p, kstack: %p, %p\n",pcb,kstack.start,kstack.end);
  pcb->cp = kcontext(kstack, entry, arg);
  printf("pcb->cp = %p\n",pcb->cp);
}

void init_proc() {
  //context_kload(&pcb[0], hello_fun, "hello");
  context_kload(&pcb[0], hello_fun, "No.0 Hello world!");
  context_kload(&pcb[1], hello_fun, "No.1 Hello world!");
  //context_uload(&pcb[1],"/bin/pal");
  //assert(0);
  switch_boot_pcb();

  Log("Initializing processes...");
  // load program here
  //naive_uload(NULL,"/bin/pal");
  //char * argv[]={"--skip",NULL};
  //char * argv[]={NULL};
  //char * envp[]={NULL};
  //context_uload(&pcb[0],"/bin/pal", argv, envp);
  Log("proc end at %lx\n",pcb[0].max_brk);
}

Context* schedule(Context *prev) {
  // save the context pointer
  //printf("schedule!\n");
  current->cp = prev;

  // always select pcb[0] as the new process
  //current = &pcb[0];
  current = (current == &pcb[0] ? &pcb[1] : &pcb[0]);
  if(current == &pcb[0]){printf("current pcb: pcb0\n");}
  else if(current == &pcb[1]){printf("current pcb: pcb1\n");}
  else{printf("current pcb: ???\n");}
  printf("current pcb addr: %p\n",current);
  //printf("gpr[10]: %p\n", current->cp->gpr[10]);
  assert(current->cp != NULL);
  //printf("schedule end\n");
  // then return the new context
  return current->cp;
}
