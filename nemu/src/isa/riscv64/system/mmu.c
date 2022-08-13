#include <isa.h>
#include <memory/vaddr.h>
#include <memory/paddr.h>

paddr_t isa_mmu_translate(vaddr_t vaddr, int len, int type) {
  //if(vaddr<0x80000000){printf("in mmu trans\n");}
  paddr_t offset = BITS(vaddr,11,0) & 0xfff;
  //if(vaddr<0x80000000){printf("%x\n",offset);}
  vaddr_t cur_ppn = BITS(cpu.csr[4],43,0);// L2 page nums in satp
  //if(vaddr<0x80000000){printf("%lx\n",cur_ppn);}
  //paddr_t cur_paddr = ppn << 12;// L2 pages addr in satp
  vaddr_t cur_paddr;
  paddr_t shift,cur_vpn;
  for(int level = 2; level >= 0; level--){
    //if(vaddr<0x80000000){printf("level=%d\n", level);}
    // current vpn
    shift = level*9 + 12;
    //if(vaddr<0x80000000){printf("shift=%d\n",shift);}
    cur_vpn = BITS(vaddr,(shift+8),shift) & 0x1ff;
    //if(vaddr<0x80000000){printf("cur_vpn=%d\n",cur_vpn);}
    // paddr = ppn*4096 + vpn*8
    cur_paddr = (cur_ppn<<12) + (cur_vpn<<3);
    //if(vaddr<0x80000000){printf("cur_paddr=%lx\n",cur_paddr);}
    //vaddr_t *pte = (vaddr_t*)cur_paddr;
    //printf("pte=%p *pte=%lx\n",pte,*pte);
    // update ppn 
    //cur_ppn = BITS((*((paddr_t*)cur_paddr)), 53,10);
    if((paddr_read(cur_paddr,8) & 0x1)==0){
      printf("unmapped addr %lx, invalid cur_paddr %lx(level%d, type%d)!\n",vaddr,cur_paddr,level,type);
      assert(0);
    }
    cur_ppn = BITS(paddr_read(cur_paddr,8),53,10);
    // if(vaddr<0x80000000){printf("cur_ppn=%lx\n",cur_ppn);}
    // exception
    // non-leaf page RWX exception
    // leaf page RWX exception
    // 
    // TODO();
  }
  
  return (cur_ppn << 12) + offset;
  //return MEM_RET_FAIL;
}
