#include <isa.h>
#include <memory/paddr.h>
#ifdef CONFIG_CTRACE
void print_ctrace(bool is_itrace, char type, uint64_t addr);
#endif
word_t vaddr_ifetch(vaddr_t addr, int len) {
  if(isa_mmu_check(vaddr, len, MEM_TYPE_IFETCH) == MMU_DIRECT){
    //printf("in direct mode ifetch\n"); 
    #ifdef CONFIG_CTRACE
      print_ctrace(true, 'r', addr);
    #endif
    return paddr_read(addr, len);
  }
  else{
    //if(addr<0x80000000){printf("in pte mode ifetch, vaddr = %lx\n",addr);}
    paddr_t paddr = isa_mmu_translate(addr, len, MEM_TYPE_IFETCH);
    //if(addr<0x80000000){printf("in pte mode ifetch, paddr = %x\n",paddr);}
    //assert(paddr == addr);
    return paddr_read(paddr, len);
  }
  
}

word_t vaddr_read(vaddr_t addr, int len) {
  if(isa_mmu_check(vaddr, len, MEM_TYPE_READ) == MMU_DIRECT){
    //printf("in direct mode read\n");
    #ifdef CONFIG_CTRACE
      print_ctrace(false, 'r', addr);
    #endif
    return paddr_read(addr, len);
  }
  else{
    //printf("in pte mode read\n");
    paddr_t paddr = isa_mmu_translate(addr, len, MEM_TYPE_READ);
    //assert(paddr == addr);
    return paddr_read(paddr, len);
  }
}

void vaddr_write(vaddr_t addr, int len, word_t data) {
  if(isa_mmu_check(vaddr, len, MEM_TYPE_WRITE) == MMU_DIRECT){
    //printf("in direct mode write\n"); 
    #ifdef CONFIG_CTRACE
      print_ctrace(false, 'w', addr);
    #endif
    paddr_write(addr, len, data);
  }
  else{
    //printf("in pte mode write\n");
    paddr_t paddr = isa_mmu_translate(addr, len, MEM_TYPE_WRITE);
    //assert(paddr == addr);
    paddr_write(paddr, len, data);
  }
}
