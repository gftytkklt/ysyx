#ifndef AXI_H
#define AXI_H
#include <global.h>
#include <memory.h>
// skip pc is for debugging
void axi_read(unsigned long *araddr, unsigned char *arlen, unsigned long* rdata, uint64_t *skip_pc, bool *processing);
void axi_write(unsigned long *awaddr, unsigned char *awlen, unsigned long wdata, unsigned char wmask, uint64_t *skip_pc, bool *processing);
#endif