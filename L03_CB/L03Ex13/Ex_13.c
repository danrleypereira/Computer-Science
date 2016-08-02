#include <stdio.h>
#include <stdlib.h>

int main(){
	int N, i;
	scanf("%d", &N);
	for(i=1; i<11; i++){
		int value = N*i;
		printf("%dx%d=%d\n", N, i, value);
		
	}
	return 0;
}
