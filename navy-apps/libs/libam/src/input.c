#include <am.h>
#include <NDL.h>

#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};
void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  char buf[64];
  //memset(buf,0,64);
  if(NDL_PollEvent(buf, 64)){
    //printf("%s\n", buf);
    char key_status[5];
    char key_name[20];
    int name_id=0;
    sscanf(buf,"%s %s",key_status, key_name);
    //printf("%s %s\n",key_status, key_name);
    if(!strcmp(key_status, "kd")){kbd->keydown = 1;}
    else{kbd->keydown = 0;}
    while(name_id < sizeof(keyname)/sizeof(const char*)){
      if(!strcmp(key_name, keyname[name_id])){kbd->keycode = name_id;break;}
      //printf("%s %s\n",key_name, keyname[name_id]);
      name_id++;
    }
  }
  else {
    kbd->keydown = 0;
    kbd->keycode = 0;
  }
}
