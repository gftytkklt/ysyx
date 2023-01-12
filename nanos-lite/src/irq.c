#include <common.h>
void do_syscall(Context *c);
Context* schedule(Context *prev);

static Context* do_event(Event e, Context* c) {
  //printf("do event start, cp = %p\n",c);
  switch (e.event) {
    case EVENT_IRQ_TIMER:
    #ifdef HAS_VME
    case EVENT_YIELD: return schedule(c);//printf("yield exec\n");break;
    #else
    case EVENT_YIELD: printf("yield exec\n");break;
    #endif
    case EVENT_SYSCALL: do_syscall(c);break;
    //case EVENT_IRQ_TIMER: return schedule(c);
    default: panic("Unhandled event ID = %d", e.event);
  }
  //printf("do event end, cp = %p\n",c);
  return c;
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
}
