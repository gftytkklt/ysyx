#include <am.h>
#include <nemu.h>
//#include<stdio.h>

#define AUDIO_FREQ_ADDR      (AUDIO_ADDR + 0x00)
#define AUDIO_CHANNELS_ADDR  (AUDIO_ADDR + 0x04)
#define AUDIO_SAMPLES_ADDR   (AUDIO_ADDR + 0x08)
#define AUDIO_SBUF_SIZE_ADDR (AUDIO_ADDR + 0x0c)
#define AUDIO_INIT_ADDR      (AUDIO_ADDR + 0x10)
#define AUDIO_COUNT_ADDR     (AUDIO_ADDR + 0x14)
static uint32_t bufsize = 0;
static uint32_t wr_index = 0;

void __am_audio_init() {
  bufsize = inl(AUDIO_SBUF_SIZE_ADDR);
  outl(AUDIO_INIT_ADDR,1);
}

void __am_audio_config(AM_AUDIO_CONFIG_T *cfg) {
  cfg->present = true;// modify it to false to disable audio
  cfg->bufsize = inl(AUDIO_SBUF_SIZE_ADDR);// 64K
}

void __am_audio_ctrl(AM_AUDIO_CTRL_T *ctrl) {
  outl(AUDIO_FREQ_ADDR, ctrl->freq);
  outl(AUDIO_CHANNELS_ADDR, ctrl->channels);
  outl(AUDIO_SAMPLES_ADDR, ctrl->samples);
}

void __am_audio_status(AM_AUDIO_STATUS_T *stat) {
  stat->count = inl(AUDIO_COUNT_ADDR);
}

void __am_audio_play(AM_AUDIO_PLAY_T *ctl) {
  // TODO();
  // outl something
  //printf("1\n");
  uint32_t len = ctl->buf.end-ctl->buf.start;
  char *play_buf = (char *)ctl->buf.start;
  // wait until enough buf len for write
  //printf("2\n");
  while(bufsize - inl(AUDIO_COUNT_ADDR) < len);
  // write audio to buf
  //printf("3\n");
  for (uint32_t i=0;i<len;i++) {
    if (wr_index >= bufsize) {wr_index = wr_index - bufsize;}
    outb(AUDIO_SBUF_ADDR+wr_index,play_buf[i]);
    wr_index ++;
  }
  //printf("4\n");
  // update count
  outl(AUDIO_COUNT_ADDR,inl(AUDIO_COUNT_ADDR)+len);
}
