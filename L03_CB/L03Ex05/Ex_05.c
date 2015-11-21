#include <stdio.h>
#include <stdlib.h>

int main(){
	int T, i;// Tempo T em meses.
	double TJ, D, RF;// Valor do Depósito = D; Taxa de Juros = TJ; Rendimento Final = RF.
	RF = 0;//zerando a variável.
	
	scanf("%lf", &D);
	scanf("%lf", &TJ);
	scanf("%d", &T);
	
	for(i=0; i<T; i++)
	{
		static double RM = 0;// Rendimento no mês.
		RM = (TJ/100) *(D+RF);// Adiciona o rendimento até o momento ao valor de depósito para calcular o rendimento mensal corretamente.
		RF += RM;//Adiciona o Rendimento Mensal ao Rendimento Final.
		printf("Rendimento no mes %d: %.2lf\n", i, RM);
	}
	printf("Saldo final do investimento: %.2lf\n", (RF+D));//Exibi o valor do saldo do investimento final.	
	
	return 0;
}
