#include <am.h>
#include <nemu.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)
static int w = 0;
static int h = 0;
void __am_gpu_init() {
  //int i;
  w = inw(VGACTL_ADDR+2);  // TODO: get the correct width
  h = inw(VGACTL_ADDR);  // TODO: get the correct height
  //uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  //uint32_t init = 255 + (255 << 8) + (255 << 16);
  //for (i = 0; i < w * 30; i ++) outl(FB_ADDR+i, init);
  //for (i = 0; i < w * 30; i ++) fb[i] = init;
  outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = inw(VGACTL_ADDR+2), .height = inw(VGACTL_ADDR),
    .vmemsz = cfg->width*cfg->height,
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  // x, y: current block top left index
  // *pixels: pixel data of the block
  // format: row1-row2-...-rown
  // w, h: size of drawing block
  // sync: finish drawing
  // printf("call draw\n");
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
  else {
    int x = ctl->x;
    int y = ctl->y;
    int *pixels = (int *)ctl->pixels;
    int blk_w = ctl->w;
    int blk_h = ctl->h;
    int base = w*y+x;
    for (int row=0;row<blk_h;row++){
      for(int col=0;col<blk_w;col++){
        int index = row*blk_w+col;
        int offset = row*w+col;
        outl(FB_ADDR+(base+offset)*4,pixels[index]);
      }
    }
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
