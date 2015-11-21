#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, N;
	scanf("%d", &N);
	int Menor = 1000000000;
	int Maior = 0;
	for(i=0; i<N; i++)
	{
		int Number;
		scanf("%d", &Number);
		if(Number > Maior)
		{
			Maior = Number;
			
		}if(Number < Menor)
		{
			Menor = Number;
		}
	}
	printf("Menor: %d\n", Menor);
	printf("Maior: %d\n", Maior);
	return 0;
}
