#ifndef MMIO_H
#define MMIO_H
#include <global.h>
#include <util.h>
#define RTC_ADDR 0xa0000048
#define KBD_ADDR 0xa0000060
#define SERIAL_ADDR 0xa00003f8
#define VGA_ADDR 0xa0000100
#define VGA_H_OFFT 0
#define VGA_W_OFFT 2
#define VGA_SYNC_OFFT 4
#define FBCTL_ADDR 0xa0000500
#define FB_X (FBCTL_ADDR + 0)
#define FB_Y (FBCTL_ADDR + 4)
#define FB_W (FBCTL_ADDR + 8)
#define FB_H (FBCTL_ADDR + 12)
#define FB_ADDR 0xa1000000

void get_time(unsigned long* time);
void get_screensize(unsigned long* size);
void update_pixel(uint32_t pixel, uint32_t index);
void update_drawinfo(uint64_t addr, int data);
#endif