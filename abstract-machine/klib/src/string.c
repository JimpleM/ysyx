#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  assert(s != NULL);
  unsigned long i = 0;
  while(s[i] != '\0'){
    i++;
  }
  return i;
}

char *strcpy(char *dst, const char *src) {
  assert(dst != NULL);
  assert(src != NULL);
  char *dst_t = dst;
  while(*src != '\0'){
    *dst_t++ = *src++;
  }
  return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  assert(dst != NULL);
  assert(src != NULL);
  char *dst_t = dst;
  while(*src != '\0' && n){
    *dst_t++ = *src++;
    printf("%d ",n);
    n--;
  }
  while(n>=1){
    *dst_t++ = '\0';
    printf("%d ",n);
    n--;
  }
  printf("%s\n",dst);
  return dst;
}

char *strcat(char *dst, const char *src) {
  char *dst_t = dst;
  while(*dst_t != '\0'){
    dst_t++;
  }
  while(*src != '\0'){
    *dst_t++ = *src++;
  }
  *dst_t = '\0';
  return dst;
}

int strcmp(const char *s1, const char *s2) {
  while(*s1 != '\0' && *s2 != '\0' && (*s1 == *s2)){
    s1++;
    s2++;
  }
  int t = *s1 - *s2;
  return t;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  while(n-1>0 && (*s1 == *s2)){
    s1++;
    s2++;
    n--;
  }
  int t = *s1 - *s2;
  return t;
}

void *memset(void *s, int c, size_t n) {
  assert(s != NULL);
  char *str = (char *)s;
  for(;n;n--){
    *str++ = c;
  }
  return s;
}
/* The memory areas may overlap: copying takes place as though the bytes in src are first
       copied into a temporary array that does not overlap src or dest, and the bytes are then copied from the temporary array to dest*/
// 从前往后会存在重叠情况，只要从后往前复制就不会出现了
void *memmove(void *dst, const void *src, size_t n) {
  char *dst_t = (char *) dst;
  char *src_t = (char *) src;
  dst_t = dst_t + n - 1;
  src_t = src_t + n - 1;
  for(;n;n--){
    *dst_t-- = *src_t--;
  }
  return dst_t;
}
// memcpy本身不允许重叠
void *memcpy(void *out, const void *in, size_t n) {
  char *out_t = (char *) out;
  char *in_t = (char *) in;
  for(;n;n--){
    *out_t++ = *in_t++;
  }
  return out;
}

int memcmp(const void *s1, const void *s2, size_t n) {
  char *s1_t = (char *) s1;
  char *s2_t = (char *) s2;
   while(n-1>0 && (*s1_t == *s2_t)){
    s1_t++;
    s2_t++;
    n--;
  }
  int t = *s1_t - *s2_t;
  return t;
}

#endif
