#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

#define ul unsigned long long
#define uint unsigned int
#define strcat_out(a) *out = '\0';strcat(out,a);out += strlen(a);

ul my_pow(int a,int b){
  ul ans = a;
  while(--b){
    ans *= a;
  }
  return ans;
}

char* number_to_str(const char *str, ul number, ul scale){
  char *str_t = (char *)str;
  if(number < scale){
    if(number < 10){
      *str_t++ = number + '0';
      *str_t = '\0';
    }else{
      *str_t++ = number + 'A' - 10;
      *str_t = '\0';
    }
    return str_t;
  }else{
    str_t = number_to_str(str,number/scale,scale);
    *str_t++ = number%scale + '0';
    *str_t = '\0';
    return str_t;
  }
}

char* parse_number(const char *fmt, int *number){
  char *fmt_t = (char *)fmt;
  *number = 0;
  while(*fmt_t>='0' && *fmt_t<='9'){
    *number *=10;
    *number += *fmt_t-'0';
    fmt_t++;
  }
  return fmt_t;
}

char* insert_space(const char *out, int number){
  char *out_t = (char *)out;
  for(int i=0;i<number; i++){
    *out_t++ = ' ';
  }
  return out_t;
}

int printf(const char *fmt, ...) {
  assert(fmt != NULL);

  int count = 0;

  char* ArgStr = NULL;      // 接收字符型
  int ArgInt = 0;
  char str_temp[100];
  ul num_temp = 0;

  va_list args;
  va_start(args,fmt);
  while(*fmt != '\0'){
    if(*fmt == '%'){
      fmt++;
      if(*fmt == 's'){
        ArgStr = va_arg(args, char*);
        while(*ArgStr !='\0'){
          putch(*ArgStr);
          ArgStr++;
        }
      }else if(*fmt == 'd'){
        ArgInt = va_arg(args, ul);
        if(ArgInt<0){
          putch('-');
          ArgInt = -ArgInt;
          num_temp = UINT_MAX - ((unsigned int)(ArgInt)) + 1U;
        }
        number_to_str(str_temp,(ul)num_temp,10);
        printf("%s",str_temp);
      }
      else if(*fmt == 'u'){
        num_temp = va_arg(args, ul);
        number_to_str(str_temp,(ul)num_temp,10);
        printf("%s",str_temp);
      }
    }else{
      putch(*fmt);
    } 
    fmt++;
  }
  va_end(args);
  return count;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}


int sprintf(char *out, const char *fmt, ...) {
  assert(fmt != NULL);

  char str_temp[100];
  unsigned long num_temp;

  char* ArgStr = NULL;      // 接收字符型
  int ArgInt = 0;           // 接收整型
  unsigned int ArgUInt = 0; // 接收无符号
  unsigned long ArgHex = 0; // 接收十六进制
  double  ArgFloat = 0;     // 接收浮点数

  char Sign = '\0';
  int num_before_dig = 0;
  int num_after_dig = 0;

  va_list args;
  va_start(args,fmt);

  while(*fmt != '\0'){
    if(*fmt == '%'){
      fmt++;
      if(*fmt == '%'){
        *out++ = '%';
        fmt++;
        continue;
      }

      if(*fmt == '-' || *fmt == '+' || *fmt == ' '){
        Sign = *fmt;
        fmt++;
      }

      fmt = parse_number(fmt,&num_before_dig);
      if(*fmt == '.'){
        fmt++;
        fmt = parse_number(fmt,&num_after_dig);
      }

      if(*fmt == 's'){
        ArgStr = va_arg(args, char*);
        strcat_out(ArgStr);
      }else if(*fmt == 'c'){
        ArgInt = va_arg(args, int);
        *out++ = ArgInt;
      }else if(*fmt == 'd'){
        ArgInt = va_arg(args, int);
        ArgStr = str_temp;

        if(ArgInt < 0){
          *ArgStr++ = '-';
          ArgUInt = ArgInt;
          ArgUInt = (~ArgUInt)+1;
        }else{
          if(Sign == '+' || Sign == ' '){
            *ArgStr++ = Sign;
          }
          ArgUInt = ArgInt;
          Sign = '\0';
        }
        number_to_str(ArgStr,ArgUInt,10);
        out = insert_space(out,num_before_dig-strlen(str_temp));
       
        strcat_out(str_temp);
      }
      else if(*fmt == 'u'){
        ArgUInt = va_arg(args, unsigned int);
        number_to_str(str_temp,(ul)ArgUInt,10);
        out = insert_space(out,num_before_dig-strlen(str_temp));
        strcat_out(str_temp);
      }else if(*fmt == 'x'){
        ArgHex = va_arg(args, unsigned long);
        number_to_str(str_temp,(ul)ArgHex,16);
        out = insert_space(out,num_before_dig-strlen(str_temp));
        strcat_out(str_temp);
      }else if(*fmt == 'f'){
        ArgFloat = va_arg(args, double);
        ArgStr = str_temp;

        // if(ArgFloat < 0){
        //   *ArgStr++ = '-';
        //   ArgFloat = -ArgFloat;
        // }

        // num_temp = (ul)ArgFloat;
        // ArgFloat = ArgFloat - num_temp;
        //整数位
        // ArgStr = number_to_str(ArgStr,(ul)num_temp,10);
        //小数点
        *ArgStr++ = '.';
        *ArgStr = '\0';
        //小数位
        // num_temp = num_after_dig == 0 ? (ArgFloat + 1e-6)* 1000000 : ArgFloat*(my_pow(10,num_after_dig))+0.5;
        // ArgStr = number_to_str(ArgStr,(ul)num_temp,10);

        // out = insert_space(out,num_before_dig-strlen(str_temp));
        // strcat_out(str_temp);
      }

      num_before_dig = 0;
      num_after_dig = 0;
    }else{
      *out++ = *fmt;
    }
    fmt++;
  }
  *out++ = '\0';
  va_end(args);
  return strlen(out);
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
