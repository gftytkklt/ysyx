#include <memory.h>

static void *pf = NULL;

void* new_page(size_t nr_page) {
  //printf("before: %p\n",pf);
  //pf = (void *)ROUNDUP(pf, PGSIZE*nr_page);
  pf = (void *)ROUNDUP(pf, PGSIZE);
  pf += PGSIZE*nr_page;
  heap.start = pf;
  //printf("after: %p\n",pf);
  return pf;
}

#ifdef HAS_VME
static void* pg_alloc(int n) {
  //if(n == 0){return NULL;}
  int nr_page = (n % PGSIZE == 0) ? (n / PGSIZE) : ((n / PGSIZE) + 1);
  void *ret = new_page(nr_page) - PGSIZE*nr_page;
  memset(ret,0,PGSIZE*nr_page);
  return ret;
  //return NULL;
}
#endif

void free_page(void *p) {
  panic("not implement yet");
}

/* The brk() system call handler. */
int mm_brk(uintptr_t brk) {
  return 0;
}

void init_mm() {
  pf = (void *)ROUNDUP(heap.start, PGSIZE);
  Log("free physical pages starting from %p", pf);

#ifdef HAS_VME
  vme_init(pg_alloc, free_page);
#endif
}
