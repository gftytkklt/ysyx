#include <common.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

static AM_GPU_CONFIG_T cfg = {};

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

size_t serial_write(const void *buf, size_t offset, size_t len) {
  char *tmp = (char*) buf;
  size_t write_size = 0;
  while ((write_size < len) && (tmp[write_size] != '\0')){
      putch(tmp[write_size]);
      write_size++;
    }
  return write_size;
}

size_t events_read(void *buf, size_t offset, size_t len) {
  //printf("in events_read\n");
  AM_INPUT_KEYBRD_T kbd = {};
  bool keydown = 0;
  int keycode = 0;
  while(!keycode){
    kbd = io_read(AM_INPUT_KEYBRD);
    keydown = kbd.keydown;
    keycode = kbd.keycode;
    //keydown = io_read(AM_INPUT_KEYBRD).keydown;
    //keycode = io_read(AM_INPUT_KEYBRD).keycode;
  }
  char *tmp = (char *)buf;
  char *down_const = "key down: ";
  char *up_const = "key up: ";
  
  if(keydown){strcpy(tmp, down_const);}
  else{strcpy(tmp, up_const);}
  strcat(tmp, keyname[keycode]);
  return strlen(tmp);
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  cfg = io_read(AM_GPU_CONFIG);
  sprintf(buf, "WIDTH : %d\nHEIGHT : %d\n", cfg.width, cfg.height);
  return strlen(buf);
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  // non-standard draw
  AM_GPU_FBDRAW_T fbdraw = {.y = offset/cfg.width,
                            .x = offset%cfg.width,
                            .pixels = (void*)buf,
                            .w=(len>>32),
                            .h=(len&0xffffffff)};
  // standard draw
  /*AM_GPU_FBDRAW_T fbdraw = {.y = (offset/4)/cfg.width,
                            .x = (offset/4)%cfg.width,
                            .pixels = (void*)buf,
                            .w=(len>>2),
                            .h=1};*/
  //printf("%d %d %d %d %ld %ld\n",fbdraw.x, fbdraw.y, fbdraw.w, fbdraw.h, offset, len);
  io_write(AM_GPU_FBDRAW, fbdraw.x, fbdraw.y, fbdraw.pixels, fbdraw.w, fbdraw.h, 1);
  //io_write(AM_GPU_FBDRAW, fbdraw.x, fbdraw.y, fbdraw.pixels, fbdraw.w, fbdraw.h, 0);
  return fbdraw.w*fbdraw.h*4;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
