#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <assert.h>
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

int sprintf_t(char *out, const char *fmt, ...) {
  assert(fmt != NULL);
  char *fmt_t = (char *)fmt;
  char *out_t = (char *)out;

  int count = 0;
  char* ArgStr = NULL;  // 接收字符型
  int ArgInt = 0;  // 接收整型
  va_list args;
  va_start(args,fmt);

  while(*fmt_t != '\0'){
    if(*fmt == ' '){
      *out_t++ = ' ';
      count++;
    }else if(*fmt == '='){
      *out_t++ = '=';
      count++;
    }else if(*fmt == '+'){
      *out_t++ = '+';
      count++;
    }else if(*fmt == '\n'){
      *out_t++ = '\n';
      count++;
    }
    
    else if(*fmt == '%'){
      fmt_t++;
      if(*fmt_t == 's'){
        ArgStr = va_arg(args, char*);
        strcat(out_t,ArgStr);
        count += strlen(ArgStr);
      }else if(*fmt_t == 'd'){
        ArgInt = va_arg(args, int);
        if(ArgInt<0){
          *out_t++ = '-';
          ArgInt = -ArgInt;
          count++;
        }
        out_t = number_to_str(out_t,ArgInt,10);
      }
    }

    fmt_t++;
  }
   *out_t++ = '\0';
  va_end(args);
  return count;
}
int main(){
	sprintf(str, "%s", "Hello world!\n");
  printf("%d\n",strcmp(str, "Hello world!\n") == 0);
  sprintf_t(str, "%d", 100);
  printf("%d\n",strcmp(str, "100") == 0);
	printf("%s\n",str);
	return 0;
}
