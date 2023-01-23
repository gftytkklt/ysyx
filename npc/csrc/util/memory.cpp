#include <global.h>
#include <memory.h>
#ifdef CONFIG_DIFFTEST
void difftest_skip_ref(uint64_t* pc);
#endif
void pmem_read(unsigned long raddr, unsigned long* rdata, uint64_t *skip_pc){
  if (raddr == RTC_ADDR){
    #ifdef CONFIG_DIFFTEST
    printf("pc=%lx, rtc rd\n",*skip_pc);
    difftest_skip_ref(skip_pc);
    #endif
    struct timeval now;
    gettimeofday(&now, NULL);
    *rdata = now.tv_sec * 1000000 + now.tv_usec;
  }
  else if(raddr >= MEM_BASE && raddr <= MEM_BASE + MEM_SIZE){
    unsigned index = (raddr-(unsigned long)MEM_BASE) & ~(0x7ul);
    *rdata = index > MEM_SIZE ? 0 : *((unsigned long*)&mem[index]);
  }
  else{
    //printf("rd unimp addr %lx at pc %lx\n", raddr, *skip_pc);
    #ifdef CONFIG_DIFFTEST
    //printf("before\n");
    printf("pc=%lx, uimp rd\n",*skip_pc);
    difftest_skip_ref(skip_pc);
    //printf("after: pc = %lx\n",*skip_pc);
    #endif
  }
}

void pmem_write(unsigned long waddr, unsigned long wdata, unsigned char wmask, uint64_t *skip_pc){
  unsigned index = (waddr-(unsigned long)0x80000000) & ~(0x7ul);
  uint8_t *data_pt = (uint8_t*)&wdata;
  // sim of byte write enable mode
  while(wmask!=0){
    if(wmask & 0x01){
      if(waddr == SERIAL_ADDR){
      #ifdef CONFIG_DIFFTEST
      //printf("pc=%lx, mmio wr\n",*skip_pc);
      difftest_skip_ref(skip_pc);
      #endif
      putchar(*data_pt);
      }
      else if(waddr >= MEM_BASE && waddr <= MEM_BASE + MEM_SIZE){
        //printf("pmem write\n");
        mem[index] = *data_pt;
      }
      else{
        printf("wr unimp addr %lx at pc %lx\n", waddr, *skip_pc);
        #ifdef CONFIG_DIFFTEST
        difftest_skip_ref(skip_pc);
        #endif
        //printf("invalid waddr %lx\n", waddr);
        //assert(0);
      }
    }
    index++;data_pt++;
    wmask = wmask >> 1;
  }
}
