#include <proc.h>

#define MAX_NR_PROC 4
void naive_uload(PCB *pcb, const char *filename);
void context_uload(PCB *pcb, const char *filename, char *const argv[], char *const envp[]);
static PCB pcb[MAX_NR_PROC] __attribute__((used)) = {};
static PCB pcb_boot = {};
PCB *current = NULL;
PCB *fg_pcb = NULL;
void switch_boot_pcb() {
  current = &pcb_boot;
}
void switch_fg_pcb(int keycode){
  if(keycode == 2){fg_pcb = &pcb[1];}//F1
  else if(keycode == 3){fg_pcb = &pcb[2];}//F2
  else if(keycode == 4){fg_pcb = &pcb[3];}//F3
}

void hello_fun(void *arg) {
  int j = 1;
  while (1) {
    //if(!j%200){Log("Hello World from Nanos-lite with arg '%s' for the %dth time!", (char*)arg, j);}
    Log("Hello World from Nanos-lite with arg '%s' for the %dth time!", (char*)arg, j);
    j ++;
    yield();
  }
}

void context_kload(PCB *pcb, void (*entry)(void *), void *arg){
  Area kstack;
  kstack.start = (void*)pcb->stack;
  kstack.end = (void*)pcb->stack + STACK_SIZE;
  printf("pcb addr: %p\n",pcb);
  //if(pcb == &pcb[0]){printf("context_kload pcb0: %p %p %p\n",pcb,&pcb[0],&pcb[1]);}
  //else if(pcb == &pcb[1]){printf("context_kload pcb1: %p\n",pcb);}
  //else{printf("context_kload ???\n");}
  printf("pcb: %p, kstack: %p, %p\n",pcb,kstack.start,kstack.end);
  pcb->cp = kcontext(kstack, entry, arg);
  printf("pcb->cp = %p\n",pcb->cp);
}

void init_proc() {
  //context_kload(&pcb[0], hello_fun, "hello");
  //printf("init pcb0 %p, pcb1 %p\n",&pcb[0],&pcb[1]);
  //context_kload(&pcb[0], hello_fun, "No.0 Hello world!");
  //context_kload(&pcb[1], hello_fun, "No.1 Hello world!");
  //context_uload(&pcb[1],"/bin/pal");
  //assert(0);
  switch_boot_pcb();

  Log("Initializing processes...");
  // load program here
  
  // naive load for npc
  #ifdef TEST_NPC
  naive_uload(NULL,"/bin/pal");
  #else
  // pa4 impl
  char * argv[]={"--skip",NULL};
  //char * argv[]={NULL};
  char * envp[]={NULL};
  
  // 1224 zhushi
  context_uload(&pcb[0],"/bin/hello", argv, envp);
  context_uload(&pcb[1],"/bin/pal", argv, envp);
  context_uload(&pcb[2],"/bin/nslider", argv, envp);
  context_uload(&pcb[3],"/bin/cpp-test",argv,envp);
  //1224 add
  //context_kload(&pcb[0],hello_fun,"arg0");
  //context_kload(&pcb[1],hello_fun,"arg1");
  //context_uload(&pcb[1],"/bin/pal", argv, envp);
  
  fg_pcb = &pcb[1];
  #endif
  //Log("proc end at %lx\n",pcb[0].max_brk);
  //naive_uload(NULL, "/bin/cpp-test");
}
static int i = 0;
Context* schedule(Context *prev) {
  // save the context pointer
  //printf("schedule begin, cp: %p\n",prev);
  //printf("ref cp: %p(%p), %p(%p)\n",pcb[0].cp, &pcb[0].cp, pcb[1].cp, &pcb[1].cp);
  current->cp = prev;
  //printf("set %p to pcb->cp(%p)\n",prev, &current->cp);
  //if(current == &pcb[0]){printf("before: current pcb: pcb0\n");}
  //else if(current == &pcb[1]){printf("before: current pcb: pcb1\n");}
  //else{printf("before :current pcb: ???\n");}
  // always select pcb[0] as the new process
  //current = &pcb[1];
  //current = (current == &pcb[0] ? &pcb[1] : &pcb[0]);
  //current = (i%100) ? &pcb[1] : &pcb[0];
  
  //1224 zhushi
  i++;
  current = (i%100) ? fg_pcb : &pcb[0];
  //current = fg_pcb;
  //1224 add
  //current = (current == &pcb[1]) ? &pcb[0] : &pcb[1];
  
  //if(current == &pcb[0]){printf("after: current pcb: pcb0\n");}
  //else if(current == &pcb[1]){printf("after: current pcb: pcb1\n");}
  //else{printf("after: current pcb: ???\n");}
  //printf("current pcb addr: %p, pcb->cp = %p(%p)\n",current,current->cp,&(current->cp));
  //printf("gpr[10]: %p\n", current->cp->gpr[10]);
  assert(current->cp != NULL);
  //printf("schedule end\n");
  // then return the new context
  //printf("schedule end, cp: %p\n",current->cp);
  return current->cp;
}
