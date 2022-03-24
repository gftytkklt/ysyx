#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  const unsigned a = 1;"
"  unsigned result = a*(%s); "
"  printf(\"%%u\", result); "
"  return 0; "
"}";
static char *p = code_buf;
static unsigned seq = 0;
static int choose(unsigned n) {
  srand((unsigned)time(NULL) + (seq++));
  return (rand() % n);
}
enum {NUM=256, OP, };
static void gen(int type) {
  switch(type) {
    case (NUM):
      srand((unsigned)time(NULL) + (rand()));
      int num = rand();
      p += sprintf(p, "%d", num);
    case (OP):
      switch (choose(4)) {
        case 0: p += sprintf(p, "+");break;
        case 1: p += sprintf(p, "-");break;
        case 2: p += sprintf(p, "*");break;
        case 3: p += sprintf(p, "/");break;
      }
    case ('('): p += sprintf(p, "(");break;
    case (')'): p += sprintf(p, ")");break;
    default: assert(0);
  }
}
static void gen_rand_expr() {
  //buf[0] = '\0';
  switch(choose(3)) {
    case 0: gen(NUM);
    case 1: gen('(');gen_rand_expr();gen(')');
    default: gen_rand_expr();gen(OP);gen_rand_expr();
  }
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    buf[0] = '\0';
    p = buf;
    gen_rand_expr();

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    assert(fscanf(fp, "%d", &result));
    pclose(fp);

    printf("%u %s\n", result, buf);
  }
  return 0;
}
