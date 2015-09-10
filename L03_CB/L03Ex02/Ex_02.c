#include <stdio.h>
#include <stdlib.h>

int main(){
	int TNH = 0;//Total de Horas Trabalhadas.
	int i;
	for(i=0; i<30; i++)
	{
		int NH;//Numero de horas trabalhadas por dia.
		scanf("%d", &NH);
		TNH += NH;
	}
	printf("%d\n", TNH);
	return 0;
}
