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
    uint64_t cur_pte = paddr_read(cur_paddr,8);
    //uint64_t cur_pte = *((uint64_t*)cur_paddr);
    /*else if(vaddr<0x40044000 && vaddr > 0x40043000){
      printf("addr %lx, cur_paddr %lx, pte %lx(level%d, type%d)!\n",vaddr,cur_paddr,cur_pte,level,type);
    }*/
    cur_ppn = BITS(cur_pte,53,10);
    if((cur_pte & 0xe) && (level != 0)){
      printf("invalid pte %lx at %lx\n",cur_pte,cur_paddr);
    }
    if((cur_pte & 0x1)==0){
      printf("pc: %lx, unmapped addr %lx, invalid cur_paddr %lx,satp = %lx, pte = %lx, next_paddr = %lx(level%d, type%d)!\n",cpu.pc, vaddr,cur_paddr,cpu.csr[4],cur_pte,(cur_ppn << 12),level,type);
      Assert(0,"invalid\n");
    }
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
