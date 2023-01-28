#ifndef MEMORY_H
#define MEMORY_H
#include <global.h>
#include <mmio.h>
extern uint8_t* mem;
void pmem_read(unsigned long raddr, unsigned long* rdata, uint64_t *skip_pc);
void pmem_write(unsigned long waddr, unsigned long wdata, unsigned char wmask, uint64_t *skip_pc);
#endif
