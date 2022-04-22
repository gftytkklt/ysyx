#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
  //panic("Not implemented");
  char *tmp = out;
  va_list ap;
  va_start(ap, fmt);
  for (size_t i=0;fmt[i]!='\0';i++){
    if(fmt[i] == '%'){
      if(fmt[i+1] == 'd'){
        int val = va_arg(ap, int);
        if(val == 0){
          *tmp = (unsigned char) 48;
          tmp++;
        }
        else {
          if(val<0){val = -val;*tmp = '-';tmp++;}
          int bit = 0;
          while(val!=0){
            bit = val % 10;
            *tmp = (unsigned char) (bit+48);
            tmp++;
            val = val / 10;
          }
        }
      }
      else if(fmt[i+1] == 's'){
        char *str = va_arg(ap, char*);
        while(*str != '\0'){
          *tmp = *str;
          tmp++;str++;
        }
      }
      else if(fmt[i+1] == '%'){
        *tmp = fmt[i];
        tmp++;
      }
      else {
      	printf("undefined sign \%\n");
      	continue;
      }
      i++;
    }
    else {
      *tmp = fmt[i];
      tmp++;
    }
  }
  va_end(ap);
  *tmp = '\0';
  return 0;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
