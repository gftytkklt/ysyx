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