#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
static char buf[2048] = "\0";
enum {STR, INTD, INTX, INTLD, INTLX, CHAR, INVALID_TYPE, };
//static bool isdec = true;
static bool ispad = false;
static int width = 0;
static int type = STR;

// check if char wr out of bound, if outofbound, do nothing and return
//static bool outofbound(char *tmp, const char input, char *end){
//  if((end == NULL) || (tmp < end)){*tmp = input;return;}
//  else {return;}
//}

// print int, return char * next to src int
static char* num2str(char *tmp, long val, int width, bool ispad){
  char a[20] = "\0";// long have 19 bits at most
  int bit = 0;
  int cnt = 0;// a index
  unsigned long val_u = 0;
  if(val == 0){
    //*tmp = (unsigned char) 48;
    //tmp++;
    a[cnt] = (unsigned char) 48;
    cnt++;
    }
  else {
    if ((type == INTD) || (type == INTLD)) {
    //dec case
      if(val < 0){val = -val;*tmp = '-';tmp++;}
        val_u = (unsigned long) val;
        while(val_u!=0){
          bit = val_u % 10;
          //*tmp = (unsigned char) (bit+48);
          //tmp++;
          a[cnt] = (unsigned char) (bit+48);
          cnt++;
          val_u = val_u / 10;
        }
      }
      //hex case
      else if((type == INTX) || (type == INTLX)){
        val_u = (unsigned long) val;
        while(val_u!=0){
          bit = val_u % 16;
          if(bit < 10){a[cnt] = (unsigned char) (bit+48);}
          else{a[cnt] = (unsigned char) (bit+87);}
          cnt++;
          val_u = val_u >> 4;
        }
      }
      else {assert(0);}
    }
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
  return tmp;
}
// use for format recognization only, so *fmt must equal to '%'
// change static flags(width, ispad, is)
// return pointer at the last char of format
static int print_pattern(const char *fmt, int *width, bool *ispad, int *type){
  const char *tmp = fmt+1;
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
    case 'p': *type = INTLX;break;
    case 'l': tmp++;switch(*tmp){case 'd':*type = INTLD;break;case 'x':*type = INTLX;break;default: *type = INVALID_TYPE;return 0;}break;
    case 'c': *type = CHAR;break;
    case 's': *type = STR;break;
    default: *type = INVALID_TYPE;return 0;// invalid format, treat it as str
  }
  return (tmp-fmt);
}

int printf(const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  vsprintf(buf, fmt, ap);
  va_end(ap);
  //putstr(buf);
  char *tmp = buf;
  while(*tmp != '\0'){
    putch(*tmp);
    tmp++;
  }
  return strlen(buf);
}
int vsprintf(char *out, const char *fmt, va_list ap) {
  char *tmp = out;
  for (size_t i=0;fmt[i]!='\0';i++){
    if (fmt[i]=='%'){
      i += print_pattern(&fmt[i],&width,&ispad,&type);
      if(type == INTD || type == INTX){
        long val = (long) va_arg(ap, int);
        tmp = num2str(tmp, val, width, ispad);
        continue;
      }
      else if(type == INTLX || type == INTLD){
        long val = va_arg(ap, long);
        tmp = num2str(tmp, val, width, ispad);
        continue;
      }
      else if(type == STR){
        char *str = va_arg(ap, char*);
        while(*str != '\0'){
          *tmp = *str;
          tmp++;str++;
        }
        continue;
      }
      else if(type == CHAR){
        char val = va_arg(ap, int);
        *tmp = val;
        tmp++;
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
        long val = (long) va_arg(ap, int);
        tmp = num2str(tmp, val, width, ispad);
        continue;
      }
      else if(type == INTLX || type == INTLD){
        long val = va_arg(ap, long);
        tmp = num2str(tmp, val, width, ispad);
        continue;
      }
      else if(type == STR){
        char *str = va_arg(ap, char*);
        while(*str != '\0'){
          *tmp = *str;
          tmp++;str++;
        }
        continue;
      }
      else if(type == CHAR){
        char val = va_arg(ap, int);
        *tmp = val;
        tmp++;
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
        tmp = num2str(tmp, val, width, ispad);
        continue;
      }
      else if(type == STR){
        char *str = va_arg(ap, char*);
        while(*str != '\0'){
          *tmp = *str;
          tmp++;str++;
        }
        continue;
      }
      else if(type == CHAR){
        char val = va_arg(ap, int);
        *tmp = val;
        tmp++;
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
int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {return 0;}

#endif
