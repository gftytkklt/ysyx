#include <axi.h>
// assume processing is always high when call func first
void axi_read(unsigned int *araddr, unsigned char *arlen, unsigned long* rdata, uint32_t *skip_pc, bool *processing){
    pmem_read(*araddr, rdata, skip_pc);
    if(*arlen == 0) {
        *processing = false;
        return;
    }
    *arlen -= 1;
    *araddr += 8;
}
void axi_write(unsigned int *awaddr, unsigned char *awlen, unsigned long wdata, unsigned char wmask, uint32_t *skip_pc, bool *processing){
    pmem_write(*awaddr, wdata, wmask, skip_pc);
    if(*awlen == 0){
        *processing = false;
        return;
    }
    *awlen -= 1;
    *awaddr += 8;
}