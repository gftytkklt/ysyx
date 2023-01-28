#include <global.h>
#include <mmio.h>
void get_time(unsigned long* time){
    struct timeval now;
    gettimeofday(&now, NULL);
    *time = now.tv_sec * 1000000 + now.tv_usec;
}

void get_screensize(unsigned long* size){
    *size = 300UL + (400UL<<16);
}

void get_keybrd(unsigned long* keycode){
    *keycode = 0;
}

void update_pixel(uint32_t pixel, uint32_t index){
    fb[index] = pixel;
    //printf("draw info at%p\n",drawinfo);
    // int x = drawinfo->x;
    // int y = drawinfo->y;
    // int w = drawinfo->w;
    // int h = drawinfo->h;
    // void* pixels = drawinfo->pixels;
    // printf("draw info: (%d %d %d %d), pixels at %p\n",x,y,w,h,pixels);
}

void update_drawinfo(uint64_t addr, int data){
    switch(addr){
        case FB_X: drawinfo->x = data;break;
        case FB_Y: drawinfo->y = data;break;
        case FB_W: drawinfo->w = data;break;
        case FB_H: drawinfo->h = data;break;
    }
}