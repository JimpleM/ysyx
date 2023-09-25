#include <stdio.h>
#include <stdint.h>
int main(){
	uint8_t a = 16;
	int b = 0x12345678;
	uint8_t *c = &a;
	printf("%x %x %x %x %x",*c,*(c+1),*(c+2),*(c+3),*(c+4));
	return 0;
}

movsx
unlign
hello-str
if-else
mul-longlong
shift
string
to_lower_case