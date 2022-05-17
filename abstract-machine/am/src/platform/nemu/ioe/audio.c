#include <am.h>
#include <nemu.h>

#define AUDIO_FREQ_ADDR      (AUDIO_ADDR + 0x00)
#define AUDIO_CHANNELS_ADDR  (AUDIO_ADDR + 0x04)
#define AUDIO_SAMPLES_ADDR   (AUDIO_ADDR + 0x08)
#define AUDIO_SBUF_SIZE_ADDR (AUDIO_ADDR + 0x0c)
#define AUDIO_INIT_ADDR      (AUDIO_ADDR + 0x10)
#define AUDIO_COUNT_ADDR     (AUDIO_ADDR + 0x14)
static int bufsize = 0;

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
  int len = ctl->buf.end-ctl->buf.start;
  char *play_buf = (char *)ctl->buf.start;
  // wait until enough buf len for write
  while(bufsize - inl(AUDIO_COUNT_ADDR) < len);
  // write audio to buf
  for (int i=0;i<len;i++) {
    outb(AUDIO_SBUF_ADDR+inl(AUDIO_COUNT_ADDR),play_buf[i]);
  }
  // update count
  outl(inl(AUDIO_COUNT_ADDR)+len,AUDIO_COUNT_ADDR);
}
