#include <common.h>
#include <proc.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

static AM_GPU_CONFIG_T cfg = {};
static AM_AUDIO_CONFIG_T audio_cfg = {};
static AM_AUDIO_STATUS_T audio_stat = {};

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

size_t serial_write(const void *buf, size_t offset, size_t len) {
  //printf("serial write %p\n",buf);
  //yield();
  char *tmp = (char*) buf;
  size_t write_size = 0;
  while ((write_size < len) && (tmp[write_size] != '\0')){
    putch(tmp[write_size]);
    write_size++;
  }
  return write_size;
}

size_t events_read(void *buf, size_t offset, size_t len) {
  //yield();
  //printf("in events_read\n");
  AM_INPUT_KEYBRD_T kbd = {};
  bool keydown = 0;
  int keycode = 0;
  //while(!keycode){
  kbd = io_read(AM_INPUT_KEYBRD);
  keydown = kbd.keydown;
  keycode = kbd.keycode;
  if(!keycode) {return 0;}
    //keydown = io_read(AM_INPUT_KEYBRD).keydown;
    //keycode = io_read(AM_INPUT_KEYBRD).keycode;
  //}
  char *tmp = (char *)buf;
  char *down_const = "kd ";
  char *up_const = "ku ";
  
  if(keydown){strcpy(tmp, down_const);}
  else{strcpy(tmp, up_const);}
  strcat(tmp, keyname[keycode]);
  strcat(tmp, "\n");
  return strlen(tmp);
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  cfg = io_read(AM_GPU_CONFIG);
  sprintf(buf, "WIDTH : %d\nHEIGHT : %d\n", cfg.width, cfg.height);
  return strlen(buf);
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  //yield();
  //printf("in fb_write\n");
  // non-standard draw
  /*AM_GPU_FBDRAW_T fbdraw = {.y = offset/cfg.width,
                            .x = offset%cfg.width,
                            .pixels = (void*)buf,
                            .w=(len>>32),
                            .h=(len&0xffffffff)};*/
  // standard draw
  AM_GPU_FBDRAW_T fbdraw = {.y = (offset/4)/cfg.width,
                            .x = (offset/4)%cfg.width,
                            .pixels = (void*)buf,
                            .w=(len>>2),
                            .h=1};
  //printf("%d %d %d %d %ld %ld\n",fbdraw.x, fbdraw.y, fbdraw.w, fbdraw.h, offset, len);
  io_write(AM_GPU_FBDRAW, fbdraw.x, fbdraw.y, fbdraw.pixels, fbdraw.w, fbdraw.h, 1);
  //io_write(AM_GPU_FBDRAW, fbdraw.x, fbdraw.y, fbdraw.pixels, fbdraw.w, fbdraw.h, 0);
  return fbdraw.w*fbdraw.h*4;
}

size_t sbctl_read(const void *buf, size_t offset, size_t len){
  audio_stat = io_read(AM_AUDIO_STATUS);
  audio_cfg = io_read(AM_AUDIO_CONFIG);
  return (audio_cfg.bufsize - audio_stat.count);
}

size_t sbctl_write(const void *buf, size_t offset, size_t len){
  int *freq = (int*)buf;
  int *channels = freq+1;
  int *samples = freq+2;
  io_write(AM_AUDIO_CTRL, *freq, *channels, *samples);
  return 12;
}

size_t sb_write(const void *buf, size_t offset, size_t len){
  Area audio_buf;
  audio_buf.start = (void*)buf;
  audio_buf.end = (void*)(buf + len);
  while(sbctl_read(NULL, 0, 0) < len);
  io_write(AM_AUDIO_PLAY, audio_buf);
  return len;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
