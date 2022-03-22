#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_EQ, TK_NUM, TK_LP, TK_RP,

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},
  {"\\-", '-'},
  {"\\*", '*'},
  {"/",'/'},
  //{"\\+", '+'},         // plus(I think this regex is matching "\"?)
  {"==", TK_EQ},        // equal
  {"[0-9]+", TK_NUM},
  {"\\(", TK_LP},	// left parentheses
  {"\\)", TK_RP},	// right parentheses
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;
	assert (substr_len <= 32);
        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        switch (rules[i].token_type) {
          case(TK_NOTYPE): break;
          case(TK_NUM): sscanf(substr_start, "%[0-9]s", tokens[nr_token].str);
          //int tmp; sscanf(tokens[nr_token].str, "%d", &tmp);printf("%d\n", tmp);
          default: tokens[nr_token].type = rules[i].token_type; nr_token++;
        }
        assert(nr_token <= 32);
        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}
// no expr surrounded by full parentheses
int find_mainop(int p, int q){
  int position = 0;
  int delta = 0;
  for (int i=p; i<q; i++){
    if ((tokens[i].type == TK_LP)) {delta++;}
    else if ((tokens[i].type == TK_RP)) {delta--;}
    if ((delta == 0)&&(i!=p)) {
      if ((tokens[i].type == '+') || (tokens[i].type == '-')) {
        position = i;
      }
      else if((tokens[i].type == '*') || (tokens[i].type == '/')) {
        if ((position == 0) || (tokens[position].type == '*') || (tokens[position].type == '/')) {
          position = i;
        }
      }
      //case('/'): 
      else if((tokens[i].type == TK_LP)) {return position;}
    }
  }
  assert((position > p) && (position < q));
  return position;
}

bool check_parentheses(int p, int q) {
  printf("start = %d, end = %d\n", p, q);
  int delta = 0;// LP - RP
  for (int i=p; i<=q; i++) {
    if(tokens[i].type == TK_LP){delta++;}
    else if(tokens[i].type == TK_RP){delta--;}
    assert(delta >= 0);
  }
  printf("delta = %d\n\n", delta);
  return (delta == 0);
}
int eval(int p, int q) {
  int value;
  if (p>q) {
    assert(p<=q);
  }
  else if (p==q) {
    assert(tokens[p].type == TK_NUM);
    sscanf(tokens[p].str, "%d", &value);
  }
  //assert "-" for inverse must appear at the beginning, and must follow expr with parentheses
  else if (tokens[p].type == '-'){
    if (q == (p+1)) {
      sscanf(tokens[q].str, "%d", &value);
    }
    else {
      value = eval(p+1, q);
    }
    value = -value;
  }
  else if (check_parentheses(p, q) == true) {
    if ((tokens[p].type == TK_LP) && (tokens[q].type == TK_RP)) {return eval(p+1, q-1);}
    else {
      int op_position, val_l, val_r;
      op_position = find_mainop(p, q);
      printf("current main op is%d\n", op_position);
      val_l = eval(p, (op_position - 1));
      val_r = eval((op_position + 1), q);
      switch (tokens[op_position].type) {
        case('+'): return (val_l + val_r);
        case('-'): return (val_l - val_r);
        case('*'): return (val_l * val_r);
        case('/'): assert(val_r != 0);return (val_l / val_r);
      }
    }
  }
  assert(check_parentheses(p, q) == true);
  return value;
}
// nr_token indicates the number of valid token
word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  //TODO();
  printf("token num = %d\n", nr_token);
  for (int i = 0;i<nr_token;i++){printf("%d element: %d ",i, tokens[i].type);}
  printf("\n");
  //return 0; 
  return eval(0,(nr_token-1));
}
