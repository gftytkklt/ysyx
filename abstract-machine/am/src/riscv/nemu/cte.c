#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  //long *tmp = (long *) c;
  if (user_handler) {
    Event ev = {0};
    //for (int i=0;i<35;i++){
    //  printf("%d: %lx\n", i+1, *tmp);
    //  tmp++;
    //}
    //printf("cause: %ld\n", c->mcause);
    switch (c->mcause) {
      case 0x0b: ev.event = (c->gpr[17] == -1) ? EVENT_YIELD : EVENT_SYSCALL; break;
      default: ev.event = EVENT_ERROR; break;
    }

    c = user_handler(ev, c);
    assert(c != NULL);
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
  //Context *cp = (Context*)kstack.start;
  Context *cp = (Context*)kstack.end - 1;
  Context *cp1 = (Context*)kstack.start;
  *cp1 = *cp;
  cp->mstatus = 0xa00001800;
  cp->mepc = (uintptr_t)entry;
  printf("entry: %p, addr: %p\n", cp->mepc, &cp->mepc);
  return cp;
  //return NULL;
}

void yield() {
  asm volatile("li a7, -1; ecall");
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
