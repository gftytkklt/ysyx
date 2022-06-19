#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/time.h>
#include <time.h>

static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;
static int canvas_w = 0, canvas_h = 0;
static uint32_t* canvas = NULL;
static uint32_t boot_time = 0;
static struct timeval timevar = {};
//static FILE* kbd_fp = NULL;

uint32_t NDL_GetTicks() {
  gettimeofday(&timevar, NULL);
  return (timevar.tv_usec-boot_time)/1000;
}

int NDL_PollEvent(char *buf, int len) {
  //rewind(kbd_fp);
  //printf("in NDL_PollEvent, len = %d\n",len);
  //int ret = fread(buf, 1, len, kbd_fp) ? 1 : 0;
  //printf("NDL ret = %d\n",ret);
  //return ret;
  //return fread(buf, 1, len, kbd_fp) ? 1 : 0;
  return read(evtdev, buf, len);
}

void NDL_OpenCanvas(int *w, int *h) {
  if (getenv("NWM_APP")) {
    printf("in if\n");
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  }
  if ((*w==0) || (*h==0)){canvas_w = screen_w;canvas_h = screen_h;}
  else{canvas_w = *w;canvas_h = *h;}
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
  int fb = open("/dev/fb", 0, 0);
  //int offset = y*screen_w + x;//initial offt of canvas
  int screen_offset = screen_w*((screen_h-canvas_h)/2+y) + (screen_w-canvas_w)/2;
  int canvas_offset = y*w + x;
  int offset = screen_offset + canvas_offset;
  uint32_t *current_row = pixels;
  // arbitrary canvas
  //for (int i=0;i<h;i++){
  //  lseek(fb, offset, SEEK_SET);
  //  write(fb, current_row, w);
  //  current_row += w;
  //  offset += screen_w;
  //}
  // len = {32'bw, 32'bh};
  lseek(fb, offset, SEEK_SET);
  size_t w_h = (((size_t) w) << 32) + (size_t) h;
  write(fb, current_row, w_h);
  //fb_write(buf, offset, w*sizeof(int));
}

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  else{
    //printf("NDL init else\n");
    evtdev = open("/dev/events", 0, 0);
  }
  boot_time = NDL_GetTicks();
  //TODO: call read "proc/dispinfo", get screen info
  int fbctl = open("/proc/dispinfo", 0, 0);
  char buf[64];
  read(fbctl, buf, 64);
  sscanf(buf, "WIDTH : %d\nHEIGHT : %d\n", &screen_w, &screen_h);
  // then config it to screen_w, screen_h
  //screen_w = *w; screen_h = *h;
  printf("%d %d\n", screen_w, screen_h);
  close(fbctl);
  return 0;
}

void NDL_Quit() {
  close(evtdev);
}
