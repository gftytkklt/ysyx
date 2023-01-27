#include <global.h>
#include <memory.h>
#include <mmio.h>

void pmem_read(unsigned long raddr, unsigned long* rdata, uint64_t *skip_pc){
  switch (raddr){
    case RTC_ADDR: get_time(rdata);break;
    case (VGA_ADDR + VGA_H_OFFT): 
    case (VGA_ADDR + VGA_W_OFFT): get_screensize(rdata);break;
    case KBD_ADDR: get_keybrd(rdata);break;
    default:
      if(raddr >= MEM_BASE && raddr <= MEM_BASE + MEM_SIZE){
        unsigned index = (raddr-(unsigned long)MEM_BASE) & ~(0x7ul);
        *rdata = index > MEM_SIZE ? 0 : *((unsigned long*)&mem[index]);
      }
      else{
        printf("rd unimp addr %lx at pc %lx\n", raddr, *skip_pc);
        *rdata = 0;
      }
  }
  /*if (raddr == RTC_ADDR){
    struct timeval now;
    gettimeofday(&now, NULL);
    *rdata = now.tv_sec * 1000000 + now.tv_usec;
  }
  else if(raddr >= MEM_BASE && raddr <= MEM_BASE + MEM_SIZE){
    unsigned index = (raddr-(unsigned long)MEM_BASE) & ~(0x7ul);
    *rdata = index > MEM_SIZE ? 0 : *((unsigned long*)&mem[index]);
  }
  else{
    printf("rd unimp addr %lx at pc %lx\n", raddr, *skip_pc);
    *rdata = 0;
  }*/
}

void pmem_write(unsigned long waddr, unsigned long wdata, unsigned char wmask, uint64_t *skip_pc){
  unsigned index = (waddr-(unsigned long)0x80000000) & ~(0x7ul);
  uint8_t *data_pt = (uint8_t*)&wdata;
  // sim of byte write enable mode
  while(wmask!=0){
    if(wmask & 0x01){
      if(waddr == SERIAL_ADDR){
        putchar(*data_pt);
      }
      else if(waddr >= MEM_BASE && waddr <= MEM_BASE + MEM_SIZE){
        mem[index] = *data_pt;
      }
      else{
        printf("wr unimp addr %lx at pc %lx\n", waddr, *skip_pc);
      }
    }
    index++;data_pt++;
    wmask = wmask >> 1;
  }
}
