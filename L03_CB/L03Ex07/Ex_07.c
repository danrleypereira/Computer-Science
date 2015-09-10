#include <stdio.h>
#include <stdlib.h>

int main(){
	int maiorF;//Maior temperatura em Fahrenheit.
	int menorF;//Menor temperatura em Fahrenheit.
	int i;//Para o laço for.
	scanf("%d", &menorF);
	scanf("%d", &maiorF);
	for(i = menorF; i<= maiorF; i++)
	{
		double C = (i-32.0) * (5.0/9);//Converte a temperatura em fahrenheit em Celsius.
		printf("%d F : %.1lf C\n", i, C);
	}
	
	return 0;
}
