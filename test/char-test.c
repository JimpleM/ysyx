#include <stdio.h>
#include <errno.h>
#include <string.h>

static char *
strccpy (char *s1,
	char *s2,
	char c)
{
  char *dest = s1;

  while (*s2 && *s2 != c)
    *s1++ = *s2++;
  *s1 = 0;

  return dest;
}
int main(){
  char buf[1024];
  printf("%s\n",buf);
  strccpy(buf,"/bin:/usr/bin",':');
  printf("%s\n",buf);
}

