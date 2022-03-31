#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"


static int is_batch_mode = false;

void init_regex();
void init_wp_pool();
//struct watchpoint;
struct watchpoint* new_wp();
void free_wp(struct watchpoint* wp);
word_t vaddr_read(vaddr_t addr, int len);
/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  nemu_state.state = NEMU_QUIT;
  return -1;
}

static int cmd_si(char *args) {
  char *arg = strtok(NULL, " ");
  if (arg == NULL) {cpu_exec(1);}
  else {int step = 0; sscanf(arg, "%u", &step);cpu_exec(step);}
  return 0;
}

static int cmd_info(char *args) {
  char *arg = strtok(NULL, " ");
  if (arg == NULL) {
    printf("usage:\ninfo r: print reg value\ninfo w: print watch points info\n");
  }
  else if(strcmp(arg, "r") == 0) {
    isa_reg_display();
  }
  else if(strcmp(arg, "w") == 0) {
    printf("to be finished\n");
  }
  else {
    printf("undefined usage\n");
  }
  return 0;
}
static int cmd_p(char *args) {
  char *arg = strtok(NULL, "");
  bool success = true;
  unsigned long result = expr(arg, &success);
  if(success) {printf("result = %lu\n", result);}
  else {printf("invalid expr\n");}
  return 0;
}
static int cmd_x(char *args) {
  const int disp_len = 4;
  int rd_len;
  //paddr_t rd_addr;
  char *arg = strtok(NULL, " ");
  sscanf(arg, "%d", &rd_len);
  //printf("%d\n",rd_len);
  arg = strtok(NULL, "");
  /*sscanf(arg, "%x", &rd_addr);
  //printf("%x\n",rd_addr);
  for (int i=0;i<rd_len;i++){
    printf("0x%x :",rd_addr);
    for(int j=0;j<disp_len;j++){
      printf("%02lx ", paddr_read(rd_addr, 1));
      rd_addr = rd_addr + 1;
    }
    printf("\n");
  }*/
  bool success = true;
  //bool *success_flag = &success;
  unsigned long result = expr(arg, &success);
  //if(success){printf("%ld %lx %lu\n", result, result, result);}
  if(success) {
    for (int i=0;i<rd_len;i++){
      printf("0x%lx :",result);
      for(int j=0;j<disp_len;j++){
        printf("%02lx ", vaddr_read(result, 1));
        result = result + 1;
      }
      printf("\n");
    }
  }
  else{printf("invalid formula\n");}
  /*const unsigned int a = 1;
  int b = -2;
  int c = 2;
  printf("%d %x %d %x\n",(a*b/c),(a*b/c),(b/c),(b/c));*/
  return 0;
}
static int cmd_help(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display informations about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },

  /* TODO: Add more commands */
  {"si", "Single step debug", cmd_si},
  {"info", "Print program status", cmd_info},
  {"x", "Scan memory", cmd_x},
  {"p", "Expr evaluation", cmd_p},
};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
