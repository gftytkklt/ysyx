#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>
#define CONTEXT_SIZE 288
static Context* (*user_handler)(Event, Context*) = NULL;
void __am_get_cur_as(Context *c);
void __am_switch(Context *c);

Context* __am_irq_handle(Context *c) {
  printf("yield exec\n");
  uintptr_t ksp = 0;
  __am_get_cur_as(c);
  if (user_handler) {
    Event ev = {0};
    
    asm volatile("csrr %0, mscratch" : "=r"(ksp));
    c->np = (ksp == 0) ? KERNEL_MODE : USER_MODE;
    ksp = 0;
    asm volatile("csrw mscratch, %0" : : "r"(ksp));
    
    switch (c->mcause) {
      case 0x0b: c->mepc += 4;ev.event = (c->gpr[17] == -1) ? EVENT_YIELD : EVENT_SYSCALL; break;
      case 0x8000000000000007: ev.event = EVENT_IRQ_TIMER; break;
      default: ev.event = EVENT_ERROR; break;
    }

    c = user_handler(ev, c);
    assert(c != NULL);
  }
  __am_switch(c);
  if(c->np == USER_MODE){
    ksp = (uintptr_t)c + CONTEXT_SIZE;
    asm volatile("csrw mscratch, %0" : : "r"(ksp));
  }
  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  //Context *cp = (Context*)kstack.end - 1;
  Context *cp = (Context*)((void*)kstack.end - CONTEXT_SIZE);
  printf("kstack end addr:%p, cp addr:%p\n",kstack.end,cp);
  cp->mstatus = 0xa00001880;
  cp->mepc = (uintptr_t)entry;
  //printf("kernel entry: %lx\n",cp->mepc);
  cp->gpr[10] = (uintptr_t)arg;
  //cp->gpr[2] = (uintptr_t)cp;
  cp->gpr[2] = (uintptr_t)kstack.end;
  cp->np = KERNEL_MODE;
  cp->pdir = NULL;
  return cp;
}

void yield() {
  asm volatile("li a7, -1; ecall");
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
  
}
