#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  panic("Not implemented");
}

char *strcpy(char *dst, const char *src) {
  //panic("Not implemented");
  size_t i = 0;
  while(src[i] != '\0'){
    dst[i] = src[i];
    i++;
  }
  dst[i] = '\0';
  return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  //panic("Not implemented");
  size_t i = 0;
  while((src[i] != '\0') && (i<n)){
    dst[i] = src[i];
    i++;
  }
  if(i<n){dst[i] = '\0';}
  return dst;
}

char *strcat(char *dst, const char *src) {
  //panic("Not implemented");
  size_t i=0;
  while(dst[i] != '\0') {
    i++;
  }
  for (size_t j=0;src[j] != '\0';j++) {
    dst[i] = src[j];
    i++;
  }
  return dst;
}

int strcmp(const char *s1, const char *s2) {
  //panic("Not implemented");
  size_t i=0;
  while((s1[i]!='\0') || (s2[i]!='\0')) {
    if (s1[i] != s2[i]) {return (s1[i] - s2[i]);}
    i++;
  }
  return 0;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  //panic("Not implemented");
  for(size_t i=0;i<n;i++) {
    if (s1[i] != s2[i]) {return (s1[i] - s2[i]);}
  }
  return 0;
}

void *memset(void *s, int c, size_t n) {
  //panic("Not implemented");
  unsigned char *tmp = s;
  for (size_t i=0;i<n;i++) {
    tmp[i] = (unsigned char) c;
  }
  return s;
}

void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  panic("Not implemented");
}

int memcmp(const void *s1, const void *s2, size_t n) {
  //panic("Not implemented");
  if(n==0){return 0;}
  const unsigned char* tmp1 = s1;
  const unsigned char* tmp2 = s2;
  for (size_t i=0;i<n;i++){
    if (tmp1[i] != tmp2[i]) {return (tmp1[i] - tmp2[i]);}
  }
  return 0;
}

#endif
