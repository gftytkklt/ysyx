#include <am.h>
#include <nemu.h>
#include <klib.h>
#define CONTEXT_SIZE 288
static AddrSpace kas = {};
static void* (*pgalloc_usr)(int) = NULL;
static void (*pgfree_usr)(void*) = NULL;
static int vme_enable = 0;

static Area segments[] = {      // Kernel memory mappings
  NEMU_PADDR_SPACE
};

#define USER_SPACE RANGE(0x40000000, 0x80000000)

static inline void set_satp(void *pdir) {
  uintptr_t mode = 1ul << (__riscv_xlen - 1);
  asm volatile("csrw satp, %0" : : "r"(mode | ((uintptr_t)pdir >> 12)));
}

static inline uintptr_t get_satp() {
  uintptr_t satp;
  asm volatile("csrr %0, satp" : "=r"(satp));
  return satp << 12;
}

bool vme_init(void* (*pgalloc_f)(int), void (*pgfree_f)(void*)) {
  pgalloc_usr = pgalloc_f;
  pgfree_usr = pgfree_f;

  kas.ptr = pgalloc_f(PGSIZE);

  int i;
  for (i = 0; i < LENGTH(segments); i ++) {
    void *va = segments[i].start;
    for (; va < segments[i].end; va += PGSIZE) {
      map(&kas, va, va, 0);
    }
  }

  set_satp(kas.ptr);
  vme_enable = 1;

  return true;
}

void protect(AddrSpace *as) {
  PTE *updir = (PTE*)(pgalloc_usr(PGSIZE));
  as->ptr = updir;
  as->area = USER_SPACE;
  as->pgsize = PGSIZE;
  // map kernel space
  memcpy(updir, kas.ptr, PGSIZE);
}

void unprotect(AddrSpace *as) {
}

void __am_get_cur_as(Context *c) {
  //printf("satp %lx set to pdir\n",get_satp());
  c->pdir = (vme_enable ? (void *)get_satp() : NULL);
}

void __am_switch(Context *c) {
  if (vme_enable && c->pdir != NULL) {
    //printf("%p is setted to satp\n",c->pdir);
    set_satp(c->pdir);
  }
}

void map(AddrSpace *as, void *va, void *pa, int prot) {
  PTE *pgaddr = (PTE*)as->ptr;
  int mask = 0x1ff;
  // vpn[0]-vpn[2]
  int vpn[3] = {((long)va >> 12) & mask, ((long)va >> 21) & mask, ((long)va >> 30) & mask};
  //long offset = (long) va & 0xfff;
  PTE *pteaddr;
  // set corresponding pte value, if pte is invalid, create a new one
  for(int level = 2;level >= 0;level--){
    // L2-L0 PTE addr
    pteaddr = pgaddr + vpn[level];
    // if pte does not exist, create a new one, then fill pte info
    if((*pteaddr & PTE_V) == 0){
      if(level == 0){
        *pteaddr = (((PTE)pa >> 12) << 10) | PTE_V | PTE_R | PTE_W | PTE_X;
      }
      else{
        *pteaddr = (((PTE)pgalloc_usr(PGSIZE) >> 12) << 10) | PTE_V;
        //printf("Create L%d pte at %p(vpn%d, pte%lx)\n", level, pteaddr,vpn[level],*pteaddr);
      }
      //if(va<(void*)0x80000000){printf("Create L%d pte at %p(vpn%d, pte%lx)\n", level, pteaddr,vpn[level],*pteaddr);}
    }
    else{
      if((*pteaddr & 0xe)&&(level != 0)){
        printf("map: invalid pte %lx at %p found!\n",*pteaddr,pteaddr);
      }
    }
    // extract pte info to update pgaddr
    pgaddr = (PTE*)(((*pteaddr)>>10)<<12);
  }
  //if(va<(void*)0x80000000){printf("map va %p to pa %p\n",va,pa);}
}

Context *ucontext(AddrSpace *as, Area kstack, void *entry) {
  //Context *cp = (Context*)kstack.end - 1;
  Context *cp = (Context*)((void*)kstack.end - CONTEXT_SIZE);
  //printf("%p\n",cp);
  // get pdir
  //__am_get_cur_as(cp);
  cp->pdir = as->ptr;
  cp->mstatus = 0xa00001808;
  cp->mepc = (uintptr_t)entry;
  printf("user entry: %lx\n",cp->mepc);
  //cp->gpr[10] = (uintptr_t)heap.end;
  //printf("ustack top: %p\n", cp->gpr[10]);
  return cp;
  //cp->gpr[10] = (uintptr_t) arg;
  //return kstack.end;
  //return NULL;
}
