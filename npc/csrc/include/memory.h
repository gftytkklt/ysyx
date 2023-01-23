#ifndef MEMORY_H
#define MEMORY_H
#include <global.h>
extern uint8_t* mem;
void pmem_read(unsigned long raddr, unsigned long* rdata);
void pmem_write(unsigned long waddr, unsigned long wdata, unsigned char wmask);
#endif