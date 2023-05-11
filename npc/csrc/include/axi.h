#ifndef AXI_H
#define AXI_H
#include <global.h>
#include <memory.h>
// skip pc is for debugging
void axi_read(unsigned int *araddr, unsigned char *arlen, unsigned long* rdata, bool *processing, FILE* mtrace, unsigned long sim_time);
void axi_write(unsigned int *awaddr, unsigned char *awlen, unsigned long wdata, unsigned char wmask, bool *processing, FILE* mtrace, unsigned long sim_time);
#endif