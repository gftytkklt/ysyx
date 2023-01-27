#ifndef MMIO_H
#define MMIO_H
#include <global.h>
#define RTC_ADDR 0xa0000048
#define SERIAL_ADDR 0xa00003f8
#define VGA_ADDR 0xa0000100
#define VGA_H_OFFT 0
#define VGA_W_OFFT 2
#define VGA_SYNC_OFFT 4
#define FB_ADDR 0xa1000000
#define FB_SIZE 400*300*4 // 400*300 screen, 4 byte pixels
void get_time(unsigned long* time);
void get_screensize(unsigned long* size);
#endif