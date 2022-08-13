#include <memory.h>
#include <proc.h>

static void *pf = NULL;

void* new_page(size_t nr_page) {
  //printf("before: %p\n",pf);
  //pf = (void *)ROUNDUP(pf, PGSIZE*nr_page);
  pf = (void *)ROUNDUP(pf, PGSIZE);
  pf += PGSIZE*nr_page;
  heap.start = pf;
  //printf("after: %p\n",pf);
  //return pf;
  return pf - PGSIZE*nr_page;
}

#ifdef HAS_VME
static void* pg_alloc(int n) {
  //if(n == 0){return NULL;}
  int nr_page = (n % PGSIZE == 0) ? (n / PGSIZE) : ((n / PGSIZE) + 1);
  //void *ret = new_page(nr_page) - PGSIZE*nr_page;
  void *ret = new_page(nr_page);
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
  void *brk_pt = (void *)brk;
  void *cur_brk = (void *)ROUNDUP(current->max_brk, PGSIZE);
  printf("max_brk = %lx, brk = %lx\n",cur_brk,brk);
  while(brk_pt >= cur_brk){
    printf("malloc call new page\n");
    void *page = new_page(1);
    map(&current->as, brk_pt, page, 0);
    cur_brk += PGSIZE;
  }
  current->max_brk = brk;
  printf("max_brk = %lx, brk = %lx\n",cur_brk,brk);
  //assert(0);
  return 0;
}

void init_mm() {
  pf = (void *)ROUNDUP(heap.start, PGSIZE);
  Log("free physical pages starting from %p", pf);

#ifdef HAS_VME
  vme_init(pg_alloc, free_page);
#endif
}
