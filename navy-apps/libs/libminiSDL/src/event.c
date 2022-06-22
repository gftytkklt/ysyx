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
  char buf[64];
  if (!NDL_PollEvent(buf, 64)){return 0;}
  else {
    char key_status[5];
    char key_name[20];
    int name_id=0;
    sscanf(buf,"%s %s",key_status, key_name);
    if(!strcmp(key_status, "kd")){ev->type = SDL_KEYDOWN;}
    else{ev->type = SDL_KEYUP;}
    while(name_id < sizeof(keyname)/sizeof(const char*)){
      if(!strcmp(key_name, keyname[name_id])){ev->key.keysym.sym = name_id;break;}
      name_id++;
    }
  }
  return 1;
}

int SDL_WaitEvent(SDL_Event *event) {
  char buf[64];
  //if (NDL_PollEvent(buf, 64)){
  while(!NDL_PollEvent(buf, 64));
    char key_status[5];
    char key_name[20];
    int name_id=0;
    sscanf(buf,"%s %s",key_status, key_name);
    if(!strcmp(key_status, "kd")){event->type = SDL_KEYDOWN;}
    else{event->type = SDL_KEYUP;}
    while(name_id < sizeof(keyname)/sizeof(const char*)){
      if(!strcmp(key_name, keyname[name_id])){event->key.keysym.sym = name_id;break;}
      name_id++;
    }
    //printf("%s\n", buf);
    //printf("%s %s %d\n",key_status, key_name, name_id);
  //}
  //else {
  //  event->type = SDL_KEYUP;
  //  event->key.keysym.sym = 0;
  //}
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  return NULL;
}
