#include <stdio.h>
#include <stdlib.h>

int main(){
	double N = 0;//Peso total das caixas.
	int i;
	for(i=0; i<25; i++)
	{
		double box = 0;//Peso de cada caixa.
		scanf("%lf", &box);
		N += box;
		
	}
	printf("%.1lf\n", N);
	
	return 0;
}
