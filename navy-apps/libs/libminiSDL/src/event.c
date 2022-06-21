#include <NDL.h>
#include <SDL.h>
#include <string.h>
#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

int SDL_PushEvent(SDL_Event *ev) {
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
  return 0;
}

int SDL_WaitEvent(SDL_Event *event) {
  char buf[64];
  NDL_PollEvent(buf, 64);
  char key_status[2];
  char key_name[20];
  int name_id=0;
  while(!key_status){
    sscanf(buf,"%s %s",key_status, key_name);
    if(!strcmp(key_status, "kd")){
      printf("%s %s\n", key_status, key_name);
      break;
    }
  }
  while(name_id < sizeof(keyname)/sizeof(const char*)){
    if(!strcmp(key_name, keyname[name_id])){break;}
    name_id++;
  }
  if(name_id != sizeof(keyname)/sizeof(const char*)){printf("%d\n", name_id);}
  //event->type = (key_status=='u') ? SDL_KEYUP : SDL_KEYDOWN;
  //event->key.keysym.sym = name_id;
  //printf("%s\n", keyname(0));
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  return NULL;
}
