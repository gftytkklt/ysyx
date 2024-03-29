#include <NDL.h>
#include <SDL.h>
#include <string.h>
#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};
static uint8_t event_status[256];
int SDL_PushEvent(SDL_Event *ev) {
  //printf("SDL_PushEvent not impl\n");
  //printf("%d %s\n",ev->key.keysym.sym, keyname[ev->key.keysym.sym]);
  if (ev->type == SDL_KEYDOWN){
    event_status[ev->key.keysym.sym] = 1;
  }
  else{
    event_status[ev->key.keysym.sym] = 0;
  }
  return 1;
  //return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
  //printf("call SDL_PollEvent\n");
  char buf[64];
  if (!NDL_PollEvent(buf, 64)){return 0;}
  else {
    //printf("hit\n");
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
    SDL_PushEvent(ev);
  }
  return 1;
}

int SDL_WaitEvent(SDL_Event *event) {
  char buf[64];
  //printf("call SDL_WaitEvent\n");
  //if (NDL_PollEvent(buf, 64)){
  while(!NDL_PollEvent(buf, 64));
    //printf("hit\n");
    SDL_PushEvent(event);
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
    SDL_PushEvent(event);
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
  printf("SDL_PeepEvents not impl\n");
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  /*printf("call SDL_GetKeyState\n");
  //uint8_t event_status[256] = {0};
  memset(event_status, 0, 256);
  char buf[64];
  while(NDL_PollEvent(buf, 64)){
    printf("hit\n");
    char key_status[5];
    char key_name[20];
    int name_id=0;
    sscanf(buf,"%s %s",key_status, key_name);
    //if(!strcmp(key_status, "kd")){ev->type = SDL_KEYDOWN;}
    //else{ev->type = SDL_KEYUP;}
    while(name_id < sizeof(keyname)/sizeof(const char*)){
      if(!strcmp(key_name, keyname[name_id])){
        event_status[name_id] = (!strcmp(key_status, "kd")) ? 1 : 0;
        break;
      }
      name_id++;
    }
    memset(buf, 0, 64);
  }
  //printf("get end\n");*/
  return event_status;
}
