#include <am.h>
#include <NDL.h>

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    //.width = 0, .height = 0,
    //.vmemsz = cfg->width*cfg->height*4,
  };
  NDL_OpenCanvas(&(cfg->width), &(cfg->height));
  cfg->vmemsz = cfg->width*cfg->height*4;
  
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) { 
  //printf("draw %d %d %d %d\n", ctl->x, ctl->y, ctl->w, ctl->h);
  NDL_DrawRect(ctl->pixels, ctl->x, ctl->y, ctl->w, ctl->h);
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
