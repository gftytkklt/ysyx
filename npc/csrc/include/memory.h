#ifndef MEMORY_H
#define MEMORY_H
#include <global.h>
#include <mmio.h>
extern uint8_t* mem;
void pmem_read(unsigned int raddr, unsigned long* rdata, FILE* mtrace, unsigned long sim_time);
void pmem_write(unsigned int waddr, unsigned long wdata, unsigned char wmask, FILE* mtrace, unsigned long sim_time);
#endif
