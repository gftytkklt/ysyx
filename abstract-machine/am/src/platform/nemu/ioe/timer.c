#include <am.h>
#include <nemu.h>
//static uint64_t boot_time = 0;
//uint64_t get_time();
void __am_timer_init() {
  //void *rtc_addr = RTC_ADDR;
  //printf("boot time %d\n", boot_time);
  //ioe_write(AM_TIMER_UPTIME, rtc_addr);
  //ioe_read(AM_TIMER_UPTIME, &boot_time);
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  //void *rtc_addr = RTC_ADDR;
  //ioe_write(AM_TIMER_UPTIME, rtc_addr);
  //uptime->us -= boot_time;
  //(uptime->us) = get_time();
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
