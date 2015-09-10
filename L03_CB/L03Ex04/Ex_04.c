#include <stdio.h>
#include <stdlib.h>

int main(){
	int N;//N = N fatorial.
	scanf("%d", &N);
	if(N == 0)
	{
		printf("1\n");
	}else if(N > 0)
	{	
		int i;
		for(i=(N-1); i>0; i--)
		{
			N *= i;
		}
		printf("%d\n", N);
	}else{
		printf("nao existe\n");
	}

	return 0;
}
