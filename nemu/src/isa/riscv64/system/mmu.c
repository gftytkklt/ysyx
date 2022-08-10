#include <isa.h>
#include <memory/vaddr.h>
#include <memory/paddr.h>

paddr_t isa_mmu_translate(vaddr_t vaddr, int len, int type) {
  paddr_t offset = BITS(vaddr,11,0) & 0xfff;
  vaddr_t cur_ppn = BITS(cpu.csr[4],43,0);// L2 page nums in satp
  //paddr_t cur_paddr = ppn << 12;// L2 pages addr in satp
  vaddr_t cur_paddr;
  paddr_t shift,cur_vpn;
  for(int level = 2; level > 0; level--){
    // current vpn
    shift = level*9 + 12;
    cur_vpn = BITS(vaddr,(shift+8),shift) & 0x1ff;
    // paddr = ppn*4096 + vpn*8
    cur_paddr = (cur_ppn<<12) + (cur_vpn<<3);
    vaddr_t *pte = (vaddr_t*)cur_paddr;
    // update ppn 
    //cur_ppn = BITS((*((paddr_t*)cur_paddr)), 53,10);
    cur_ppn = BITS(*pte,53,10);
    // exception
    // non-leaf page RWX exception
    // leaf page RWX exception
    // 
    // TODO();
  }
  return (cur_ppn << 12) + offset;
  //return MEM_RET_FAIL;
}
