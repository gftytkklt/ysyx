#include <isa.h>
#include <memory/paddr.h>

word_t vaddr_ifetch(vaddr_t addr, int len) {
  if(isa_mmu_check(vaddr, len, MEM_TYPE_IFETCH) == MMU_DIRECT){
    return paddr_read(addr, len);
  }
  else{
    printf("in pte mode ifetch\n");
    paddr_t paddr = isa_mmu_translate(addr, len, MEM_TYPE_IFETCH);
    assert(paddr == addr);
    return paddr_read(paddr, len);
  }
  
}

word_t vaddr_read(vaddr_t addr, int len) {
  if(isa_mmu_check(vaddr, len, MEM_TYPE_READ) == MMU_DIRECT){
    return paddr_read(addr, len);
  }
  else{
    printf("in pte mode read\n");
    paddr_t paddr = isa_mmu_translate(addr, len, MEM_TYPE_READ);
    assert(paddr == addr);
    return paddr_read(paddr, len);
  }
}

void vaddr_write(vaddr_t addr, int len, word_t data) {
  if(isa_mmu_check(vaddr, len, MEM_TYPE_WRITE) == MMU_DIRECT){
    paddr_write(addr, len, data);
  }
  else{
    printf("in pte mode write\n");
    paddr_t paddr = isa_mmu_translate(addr, len, MEM_TYPE_WRITE);
    assert(paddr == addr);
    paddr_write(paddr, len, data);
  }
}
