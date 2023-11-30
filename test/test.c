#include <stdint.h>
int32_t fun1(int32_t a, int32_t b) { return a + b; }
uint32_t fun2(uint32_t a, uint32_t b) { return a + b; }

int main(){
	fun1(1,2);
	fun2(3,4);
	
	return 0;
}
