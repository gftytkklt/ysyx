#include <global.h>
#include <memory.h>
#include <stdio.h>
#include <stdint.h>
#ifdef CONFIG_DIFFTEST
void difftest_skip_ref(uint64_t pc);
#endif
void pmem_read(unsigned long raddr, unsigned long* rdata) {
	if (raddr == 0xa0000048) {
		#ifdef CONFIG_DIFFTEST
		//printf("pc=%lx, mmio rd\n",*skip_pc);
		difftest_skip_ref(*skip_pc);
		#endif
	        struct timeval now;
  		gettimeofday(&now, NULL);
  		*rdata = now.tv_sec * 1000000 + now.tv_usec;
		//*rdata = get_time();
		//time((time_t*)rdata);
		//printf("rtc read: %lu\n", *rdata);
	}
	else if(raddr >= 0x80000000 && raddr <= 0x88000000) {
		//printf("pmem read\n");
		unsigned index = (raddr-(unsigned long)0x80000000) & ~(0x7ul);
		*rdata = index > MEM_SIZE ? 0 : *((unsigned long*)&mem[index]);
	}
	else {
		#ifdef CONFIG_DIFFTEST
		difftest_skip_ref(*skip_pc);
		#endif
		//printf("invalid raddr %lx\n", raddr);
		//assert(0);
	}
	//return index > img_size ? 0 : *((unsigned *)&mem[index]);
}

void pmem_write(unsigned long waddr, unsigned long wdata, unsigned char wmask){
	unsigned index = (waddr-(unsigned long)0x80000000) & ~(0x7ul);
	uint8_t *data_pt = (uint8_t*)&wdata;
	// sim of byte write enable mode
	while(wmask!=0) {
		if(wmask & 0x01){
			if(waddr == 0xa00003f8) {
				#ifdef CONFIG_DIFFTEST
				//printf("pc=%lx, mmio wr\n",*skip_pc);
				difftest_skip_ref(*skip_pc);
				#endif
				//printf("serial write\n");
				//printf("%c", *data_pt);
				//printf("%s", (char*)data_pt);
				putchar(*data_pt);
			}
			else if(waddr >= 0x80000000 && waddr <= 0x88000000) {
				//printf("pmem write\n");
				mem[index] = *data_pt;
			}
			else {
				#ifdef CONFIG_DIFFTEST
				difftest_skip_ref(*skip_pc);
				#endif
				//printf("invalid waddr %lx\n", waddr);
				//assert(0);
			}
		}
		index++;data_pt++;
		wmask = wmask >> 1;
	}
}