#include <stdio.h>
// #include <string.h>
char str1[] = "Hello";
char str[20];
char * number_to_str(char *str, int number, int scale){
  if(number < scale){
    *str++ = number + '0';
    return str;
  }else{
    char *str_t = number_to_str(str,number/scale,scale);
    *str_t++ = number%scale + '0';
    return str_t;
  }
}

void number_to_str2(char **s, int number, int scale){
  if(number < scale){
    **s++ = number + '0';
  }else{
    number_to_str2(s,number/scale,scale);
    **s++ = number%scale + '0';
  }
}
int main(){
  // number_to_str(str,12345,10);
	number_to_str2(&str,12345,10);
	printf("%s\n",str);
	return 0;
}
