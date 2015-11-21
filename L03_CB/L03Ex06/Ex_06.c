#include <stdio.h>
#include <stdlib.h>

int main(){
	int SI, i;// Soma dos inteiros(SI).
	double MI;//Média dos inteiros(MI).
	SI = MI = 0;// Zerando variáveis.
	for(i = 0; ; )
	{	
		int N;//Valor que será inserido pelo usuário em cada iteração(N). Quantas iterações acontecerão (i).
		scanf("%d", &N);
		if(N<0)
		{
			MI = MI/i;//Soma dos inteiros dividido pelo número de iterações que ocorreram que resulta na média do inteiros.
			break;
		}else
		{
			i++;
			SI += N;
			MI += N;
		}
	}
	printf("%d\n%.1lf\n", SI, MI);
	
	return 0;
}
