#include <stdio.h>
#include <stdlib.h>

int main(){
	int H, i, N;//N = valor fornecido pelo usuário.
	H = 0;// Zerando variável.
	scanf("%d", &N);
	for(i=1; i<=N; i++)
	{
		H += i;
	}
	printf("%d\n", H);
	
	
	
	
	
	return 0;
}
