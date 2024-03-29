#include <cpu/cpu.h>
#include <cpu/decode.h>
#include <cpu/difftest.h>
#include <locale.h>

/* The assembly code of instructions executed is only output to the screen
 * when the number of instructions executed is less than this value.
 * This is useful when you use the `si' command.
 * You can modify this value as you want.
 */
#define MAX_INST_TO_PRINT 10
// added for watchpoint
//extern struct watchpoint *wp;
word_t expr(char *e, bool *success);
bool check_wp();
// added for watchpoint end
// added for ringbuf

void inst_hist_display();
// ringbuf end
// added for ftrace
#ifdef CONFIG_FTRACE
void print_ftrace(unsigned long pc, unsigned long dnpc, unsigned inst);
#endif
#ifdef CONFIG_ETRACE
void etrace(unsigned long pc, unsigned inst);
#endif
//#ifdef CONFIG_CTRACE
//void print_ctrace(bool is_itrace, char type, uint64_t addr);
//#endif
// add for ftrace end
CPU_state cpu = {.csr[1] = 0xa00001800};

uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;

/*static ringbuf ring[RINGBUF_LEN] = {};
static ringbuf* current_buf;
void init_ringbuf() {
  for (int i=0;i<(RINGBUF_LEN-1);i++) {
  strcpy(ring[i].instlog, "empty");
  ring[i].next = &ring[i+1];
  }
  ring[RINGBUF_LEN-1].next = &ring[0];
  current_buf = ring;
}

void write_ringbuf(char *str){
  snprintf(current_buf->instlog, 128, "%s", str);
  current_buf = current_buf->next;
}
void inst_hist_display() {
  for (int i=0;i<RINGBUF_LEN;i++){
    if (current_buf == &ring[1]) {printf("--> ");}
    else {printf("    ");}
    printf("%s\n", ring[i].instlog);
  }
}*/

void device_update();

static void trace_and_difftest(Decode *_this, vaddr_t dnpc) {
#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND) { log_write("%s\n", _this->logbuf); }
#endif
  //IFDEF(CONFIG_ITRACE, puts(_this->logbuf));
  //IFDEF(CONFIG_ITRACE, write_ringbuf(_this->logbuf));
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
  IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));
  IFDEF(CONFIG_ETRACE, etrace(_this->pc, _this->isa.inst.val));
#ifdef CONFIG_WATCHPOINT
  //bool break_triggered = false;
  bool changed = check_wp();
  if(changed){printf("data changed\n");nemu_state.state = NEMU_STOP;}
#endif
#ifdef CONFIG_FTRACE
  //printf("%lx %lx %08x\n", _this->pc, dnpc, _this->isa.inst.val);
  print_ftrace(_this->pc, dnpc, _this->isa.inst.val);
#endif
}

static void exec_once(Decode *s, vaddr_t pc) {
  //word_t intr = isa_query_intr();
  s->pc = pc;
  s->snpc = pc;
  isa_exec_once(s);
  cpu.pc = s->dnpc;
  
  //if (intr != INTR_EMPTY) {
      //printf("time intr at pc = %lx\n",cpu.pc);
      //isa_reg_display();
    //cpu.pc = isa_raise_intr(intr, cpu.pc);
  //}
  //else{
     //cpu.pc = s->dnpc;
  //}
#ifdef CONFIG_ITRACE
  char *p = s->logbuf;
  p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);
  int ilen = s->snpc - s->pc;
  int i;
  uint8_t *inst = (uint8_t *)&s->isa.inst.val;
  for (i = 0; i < ilen; i ++) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;

  void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
  disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
      MUXDEF(CONFIG_ISA_x86, s->snpc, s->pc), (uint8_t *)&s->isa.inst.val, ilen);
  void write_ringbuf(char *str);
  write_ringbuf(s->logbuf);
  //if(s->pc>=0x80000a5c && s->pc <= 0x80000a74){printf("%s\n",s->logbuf);}
#endif
//#ifdef CONFIG_CTRACE
//  print_ctrace(true, 'r', s->pc);
//#endif
}

static void execute(uint64_t n) {
  Decode s;
  for (;n > 0; n --) {
    exec_once(&s, cpu.pc);
    g_nr_guest_inst ++;
    trace_and_difftest(&s, cpu.pc);
    if (nemu_state.state != NEMU_RUNNING) break;
    IFDEF(CONFIG_DEVICE, device_update());
    word_t intr = isa_query_intr();
    if (intr != INTR_EMPTY) {
      cpu.pc = isa_raise_intr(intr, cpu.pc);
    }
  }
}

static void statistic() {
  IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%ld", "%'ld")
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}


void assert_fail_msg() {
  IFDEF(CONFIG_ITRACE, inst_hist_display());
  isa_reg_display();
  statistic();
}

/* Simulate how the CPU works. */
void cpu_exec(uint64_t n) {
  g_print_step = (n < MAX_INST_TO_PRINT);
  switch (nemu_state.state) {
    case NEMU_END: case NEMU_ABORT:
      printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
      return;
    default: nemu_state.state = NEMU_RUNNING;
  }

  uint64_t timer_start = get_time();

  execute(n);

  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;

  switch (nemu_state.state) {
    case NEMU_RUNNING: nemu_state.state = NEMU_STOP; break;

    case NEMU_END: case NEMU_ABORT:
      //assert_fail_msg();
      Log("nemu: %s at pc = " FMT_WORD,
          (nemu_state.state == NEMU_ABORT ? ASNI_FMT("ABORT", ASNI_FG_RED) :
           (nemu_state.halt_ret == 0 ? ASNI_FMT("HIT GOOD TRAP", ASNI_FG_GREEN) :
            ASNI_FMT("HIT BAD TRAP", ASNI_FG_RED))),
          nemu_state.halt_pc);
      // fall through
    case NEMU_QUIT: statistic();
  }
}
