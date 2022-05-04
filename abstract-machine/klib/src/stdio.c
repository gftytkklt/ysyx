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
          char a[20] = "\0";// int have 10 bits at most
          if(val<0){val = -val;*tmp = '-';tmp++;}// -2^31 will overflow
          int bit = 0;
          int cnt = 0;// a index
          while(val!=0){
            bit = val % 10;
            //*tmp = (unsigned char) (bit+48);
            //tmp++;
            a [cnt] = (unsigned char) (bit+48);
            cnt++;
            val = val / 10;
          }
          for(int cnt_rev=cnt-1;cnt_rev>=0;cnt_rev--){
            *tmp = a[cnt_rev];
            tmp++;
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
  return strlen(out);
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  //panic("Not implemented");
  char *tmp = out;
  va_list ap;
  va_start(ap, fmt);
  for (size_t i=0;fmt[i]!='\0';i++){
    if(tmp == &out[n-1]){
      *tmp = '\0';
      return strlen(fmt);
    }
    if(fmt[i] == '%'){
      if(fmt[i+1] == 'd'){
        int val = va_arg(ap, int);
        if(val == 0){
          *tmp = (unsigned char) 48;
          tmp++;
        }
        else {
          char a[20] = "\0";// int have 10 bits at most
          if(val<0){val = -val;*tmp = '-';tmp++;}// -2^31 will overflow
          int bit = 0;
          int cnt = 0;// a index
          while(val!=0){
            bit = val % 10;
            //*tmp = (unsigned char) (bit+48);
            //tmp++;
            a [cnt] = (unsigned char) (bit+48);
            cnt++;
            val = val / 10;
          }
          for(int cnt_rev=cnt-1;cnt_rev>=0;cnt_rev--){
            *tmp = a[cnt_rev];
            tmp++;
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
  return strlen(out);
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
