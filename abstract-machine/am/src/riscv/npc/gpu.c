#include <am.h>
#include <npc.h>


#define SYNC_ADDR (VGACTL_ADDR + 4)
#define FB_X (FBCTL_ADDR + 0)
#define FB_Y (FBCTL_ADDR + 4)
#define FB_W (FBCTL_ADDR + 8)
#define FB_H (FBCTL_ADDR + 12)
static int w = 0;
static int h = 0;

void __am_gpu_init(){
    w = *(volatile uint16_t  *)(VGACTL_ADDR + 2);
    h = *(volatile uint16_t  *)(VGACTL_ADDR);
    //uint32_t sizecfg = *(volatile uint32_t  *)(VGACTL_ADDR);
    //w = 
    *(volatile uint32_t  *)(SYNC_ADDR) = 1;
    
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
    // TODO: send x,y,w,h to cputest, update fb like mem
    // impl at util.cpp as native gpu.c by following steps:
    // 1. fb is treated as a simple pixel pointer, 
    // 2. pixels are copyed to fb sequentially,
    // 3. use w, h, fb as parameter of SDL_CreateRGBSurfaceFrom to create a surface
    // 4. use SDL_BlitSurface to copy draw area to screen surface
    // 5. use FPS/SDL_Addtimer/texture_sync to update screen(in this way, ctl->sync is ignored)
    // 6. add a FBDRAW_CFG reg to store x,y,w,h info
    int x = ctl->x;
    int y = ctl->y;
    uint32_t *pixels = (uint32_t *)ctl->pixels;
    int blk_w = ctl->w;
    int blk_h = ctl->h;
    *(int *)(FB_X) = x;
    *(int *)(FB_Y) = y;
    *(int *)(FB_W) = blk_w;
    *(int *)(FB_H) = blk_h;
    if(pixels != NULL){
    	for(uint64_t index=0;index<blk_w*blk_h;index++){
    	    //*(volatile uint32_t  *)(FB_ADDR+index*4) = pixels[index];
    	    uint32_t tmp = pixels[index];
    	    *(volatile uint32_t  *)(FB_ADDR + index*4) = tmp;
    	}
    }
    if(ctl->sync){
        *(volatile uint32_t  *)(SYNC_ADDR) = 1;
    }
    // int base = w*y+x;
    // for (int row=0;row<blk_h;row++){
    //     for(int col=0;col<blk_w;col++){
    //         int index = row*blk_w+col;
    //         int offset = row*w+col;
    //         *(uint32_t *)(FB_ADDR+(base+offset)*4) = pixels[index];
    //     }
    // }
}
