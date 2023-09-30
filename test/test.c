#include <stdio.h>
// #include <string.h>
void *memset(void *s, int c, size_t n) {
  char *str = (char *)s;
//   assert(*str != '\0');
  for(;n;n--){
    *str++ = c;
  }
  return str;
}
int main(){
	char s1[10];
	char* s2 = "ABCD";
	char s3[10] = "ABCEFG";
	memset(s3,-1,2);
	printf("%s\n",s3);
	printf("%s\n",s3+2);
	return 0;
}
