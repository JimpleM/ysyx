#include <stdio.h>
int main(){
	for(int i=0; i<32;i++){
		printf("assign gpr[%d] = rd_en &&(rd_data == 5'd%d) ? rd_data : gpr[%d];\n",i,i,i);
	}
	
	return 0;
}
