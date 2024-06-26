#include <stdio.h>
#include <stdint.h>
#include <sys/time.h>

int main(){
    struct timeval now;
  gettimeofday(&now, NULL);
  uint32_t boot_time = (now.tv_sec * 1000) + (now.tv_usec / 1000);

  printf("%d\n",boot_time);
}