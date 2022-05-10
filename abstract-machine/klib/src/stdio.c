#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
//astatic char buf[1024] = "\0";
enum {CHAR, INTD, INTX, INVALID_TYPE, };
//static bool isdec = true;
static bool ispad = false;
static int width = 0;
static int type = CHAR;

// check if char wr out of bound, if outofbound, do nothing and return
//static bool outofbound(char *tmp, const char input, char *end){
//  if((end == NULL) || (tmp < end)){*tmp = input;return;}
//  else {return;}
//}

// print int, return char * next to src int
static char* int2str(char *tmp, int val, int width, bool ispad){
  if(val == 0){
    *tmp = (unsigned char) 48;
    tmp++;
    }
  else {
    char a[20] = "\0";// int have 10 bits at most
    int bit = 0;
    int cnt = 0;// a index
    if (type == INTD) {
    //dec case
    if(val < 0){val = -val;*tmp = '-';tmp++;}// -2^31 will overflow
      while(val!=0){
        bit = val % 10;
        //*tmp = (unsigned char) (bit+48);
        //tmp++;
        a[cnt] = (unsigned char) (bit+48);
        cnt++;
        val = val / 10;
      }
    }
    //hex case
    else if(type == INTX){
      while(val!=0){
        bit = val % 16;
        if(bit < 10){a[cnt] = (unsigned char) (bit+48);}
        else{a[cnt] = (unsigned char) (bit+87);}
        cnt++;
        val = (unsigned)val >> 4;
      }
    }
    else {assert(type == INTD || type == INTX);}
    if (cnt < width){
      int pad_num = width - cnt;
      char pad = ispad ? '0' : ' ';
      memset(tmp, pad, pad_num);
      tmp += pad_num;
    }
    for(int cnt_rev=cnt-1;cnt_rev>=0;cnt_rev--){
      *tmp = a[cnt_rev];
      tmp++;
    }
    //strcat(tmp, a);
    //tmp += strlen(a);
  }
  return tmp;
}
// use for format recognization only, so *fmt must equal to '%'
// change static flags(width, ispad, is)
// return symbol next to end of format
static int print_pattern(const char *fmt, int *width, bool *ispad, int *type){
  const char *tmp = fmt;
  tmp ++;
  // init parameter(do not need)
  //*isdec=true;*ispad=false;*width=0;*type=CHAR;
  *ispad=false;
  // 
  if(*tmp=='%'){return 1;}
  // ispad
  if(*tmp=='0'){*ispad = true;}
  // width
  int width_tmp = 0;
  while(*tmp>='0' && *tmp<='9'){
    width_tmp = width_tmp*10;
    width_tmp += (int) (*tmp-48);
    tmp++;
  }
  *width=width_tmp;
  //type
  switch(*tmp){
    case 'd': *type = INTD;break;
    case 'x': *type = INTX;break;
    case 'X': *type = INTX;break;
    case 'c': *type = CHAR;break;
    case 's': *type = CHAR;break;
    default: *type = INVALID_TYPE;return 0;// invalid format, treat it as str
  }
  tmp++;
  return (tmp-fmt);
}

int printf(const char *fmt, ...) {return 0;}
int vsprintf(char *out, const char *fmt, va_list ap) {
  char *tmp = out;
  for (size_t i=0;fmt[i]!='\0';i++){
    if (fmt[i]=='%'){
      i += print_pattern(&fmt[i],&width,&ispad,&type);
      if(type == INTD || type == INTX){
        int val = va_arg(ap, int);
        tmp = int2str(tmp, val, width, ispad);
        continue;
      }
      else if(type == CHAR){
        char *str = va_arg(ap, char*);
        strcat(tmp, str);
        tmp += strlen(str);
        continue;
      }
    }
    *tmp = fmt[i];
    tmp++;
  }
  *tmp = '\0';
  return strlen(out);
}
int sprintf(char *out, const char *fmt, ...) {
  char *tmp = out;
  va_list ap;
  va_start(ap, fmt);
  for (size_t i=0;fmt[i]!='\0';i++){
    if (fmt[i]=='%'){
      i += print_pattern(&fmt[i],&width,&ispad,&type);
      if(type == INTD || type == INTX){
        int val = va_arg(ap, int);
        tmp = int2str(tmp, val, width, ispad);
        continue;
      }
      else if(type == CHAR){
        char *str = va_arg(ap, char*);
        strcat(tmp, str);
        tmp += strlen(str);
        continue;
      }
    }
    *tmp = fmt[i];
    tmp++;
  }
  va_end(ap);
  *tmp = '\0';
  return strlen(out);
}
int snprintf(char *out, size_t n, const char *fmt, ...) {
  char *tmp = out;
  va_list ap;
  va_start(ap, fmt);
  for (size_t i=0;fmt[i]!='\0';i++){
    if (fmt[i]=='%'){
      i += print_pattern(&fmt[i],&width,&ispad,&type);
      if(type == INTD || type == INTX){
        int val = va_arg(ap, int);
        tmp = int2str(tmp, val, width, ispad);
      }
      else if(type == CHAR){
        char *str = va_arg(ap, char*);
        strcat(tmp, str);
        tmp += strlen(str);
      }
    }
    else {
      *tmp = fmt[i];
      tmp++;
    }
  }
  va_end(ap);
  *tmp = '\0';
  return strlen(out);
}
int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {return 0;}

#endif
