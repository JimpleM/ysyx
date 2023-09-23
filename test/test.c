#include <stdio.h>
int main(){
	for(int i = 0; i< 26; i++){
		for(int j=0; j<26; j++){
			printf("%c%c\n",'a'+i,'a'+j);
		}
	}
}
