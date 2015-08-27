#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N; 
	scanf("%d", &N);
	if(N>=7 && N%3 == 0 && N%7 == 0)
	{
		printf("MULTIPLO\n");
	}else
	{
		printf("NAO E MULTIPLO\n");
	}


	return 0;
}
