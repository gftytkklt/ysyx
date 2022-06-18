#include <common.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

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
  bool keydown = 0;
  int keycode = 0;
  while(!keycode){
    keydown = io_read(AM_INPUT_KEYBRD).keydown;
    keycode = io_read(AM_INPUT_KEYBRD).keycode;
  }
  char *tmp = (char *)buf;
  char *down_const = "key down: ";
  char *up_const = "key up: ";
  //int i = 0;
  
  if(keydown){strcpy(tmp, down_const);}
  else{strcpy(tmp, up_const);}
  //if(keydown){strcat(buf, "key down: ");}
  //else{strcat(buf, "key up: ");}
  strcat(tmp, keyname[keycode]);
  //strcat(tmp, "\n");
  //strcat(buf, "\0");
  //char event[64] = {'\0'};
  //char *tmp = (char*) buf;
  //printf("%s\n", keyname[keycode]);
  //if(keycode != 0){
    //char event[64];
    //if(keydown){printf("key down: ");/*strcat(event, "key down: ");*/}
    //else{printf("key up: ");/*strcat(event, "key up: ");*/}
    //printf("%s\n", keyname[keycode]);
    //strcat(event, keyname[keycode]);
    //strcat(event, "\n");
    //size_t index = 0;
    //while((index < len) && (event[index] != '\0')){
    //  tmp[index] = event[index];
    //  index++;
    //}
    //return index + 1;
  //}
  //printf("events_read ret\n");
  return strlen(tmp);
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  return 0;
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  return 0;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
