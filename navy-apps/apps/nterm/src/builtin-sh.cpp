#include <nterm.h>
#include <stdarg.h>
#include <unistd.h>
#include <SDL.h>

char handle_key(SDL_Event *ev);

static void sh_printf(const char *format, ...) {
  static char buf[256] = {};
  va_list ap;
  va_start(ap, format);
  int len = vsnprintf(buf, 256, format, ap);
  va_end(ap);
  term->write(buf, len);
}

static void sh_banner() {
  sh_printf("Built-in Shell in NTerm (NJU Terminal)\n\n");
}

static void sh_prompt() {
  sh_printf("sh> ");
}

static int cmd_echo(char* args){
  sh_printf("%s\n", args);
  return 0;
}

static int cmd_exec(char* filename, char* args){
  //printf("name: %s, args: %s\n", filename, args);
  setenv("PATH","/bin",0);
  //if(!ret){printf("success\n");}
  //else{printf("failed\n");}
  //printf("%d %s\n",i, args);
  //printf("exec %s\n",args);
  char *arglist[] = {filename, args, NULL};
  execvp(filename, arglist);
  //printf("exec end\n");
  //execve(args, arglist, NULL);
  return 0;
}

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "echo", "Display info", cmd_echo},
};

static void sh_handle_cmd(const char *cmd) {
  //printf("%s\n",cmd);
  char *tmp = (char*)cmd;
  tmp = strtok(tmp,"\n");
  //printf("%s\n",tmp);
  //char *tmp = (char*) cmd;
  char *cmd_end = tmp + strlen(tmp);
  char *inst = strtok(tmp, " ");
  if (inst == NULL) {return;}
  char *args = inst + strlen(inst) + 1;
  if (args >= cmd_end){args = NULL;}
  if (strcmp(inst, cmd_table[0].name) == 0){
    cmd_table[0].handler(args);
  }
  else{
    //char *filename = strtok(tmp, "\n");
    cmd_exec(inst, args);
  }
}

void builtin_sh_run() {
  sh_banner();
  sh_prompt();

  while (1) {
    SDL_Event ev;
    if (SDL_PollEvent(&ev)) {
      if (ev.type == SDL_KEYUP || ev.type == SDL_KEYDOWN) {
        const char *res = term->keypress(handle_key(&ev));
        if (res) {
          sh_handle_cmd(res);
          sh_prompt();
        }
      }
    }
    refresh_terminal();
  }
}
