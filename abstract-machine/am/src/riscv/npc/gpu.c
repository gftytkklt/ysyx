#include <am.h>
#include <npc.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)
static int w = 0;
static int h = 0;

void __am_gpu_init(){
    // w = *(volatile uint32_t  *)(VGACTL_ADDR + 2);
    // h = *(volatile uint32_t  *)(VGACTL_ADDR);
    // *(volatile uint64_t  *)(SYNC_ADDR) = 1;
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg){
    *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = w, .height = h,
    .vmemsz = cfg->width*cfg->height*4,
  };
}
void __am_gpu_status(AM_GPU_STATUS_T *status){
    status->ready = true;
}
void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl){

}