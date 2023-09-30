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

char str1[] = "Hello";
char str[20];
int main(){
	strcat(strcpy(str, str1), s[3]);
	printf("%s\n",s3);
	printf("%s\n",s3+2);
	return 0;
}
