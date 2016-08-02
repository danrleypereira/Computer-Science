#include <stdio.h>
#include <stdlib.h>
int total = 0;
int maior_menor(int *matriz_adress)
{
	int i, melhor=32000, pior = 0, volta_melhor, volta_pior, NTV;
        scanf("%d", &NTV);
	for(i = 1; i<(NTV+1) ; i++)
	{
		int N;
		static int tempo_adicional = 0;
		scanf("%d", &N);

		if(N==0) break;

		if(N>0)
		{
			N = N + tempo_adicional;
			total = total + N;
			if(melhor >N)
			{
				melhor = N;
				volta_melhor = i;
			}
			if(pior <N)
			{
				pior = N;
				volta_pior = i;
			}
			tempo_adicional = 0;

		}else
		{
			if(N == -1)
			{
				tempo_adicional = 10;
			}else if(N == -2)
			{
				tempo_adicional = 25;
			}else
			{
				tempo_adicional = 40;
			}

			i--;
		}

	}
	
        *matriz_adress = pior;
        matriz_adress++;
	*matriz_adress = volta_pior;
        matriz_adress++;
        *matriz_adress = melhor;
        matriz_adress++;
	*matriz_adress = volta_melhor;
	
	return melhor, pior;
}

int main(){
	int melhor_pior_volta[2][2] = {};
        maior_menor(&melhor_pior_volta[0][0]);
	{
		printf("Melhor volta: %d - %d seg\n", melhor_pior_volta[1][1], melhor_pior_volta[1][0]);
		printf("Pior volta: %d - %d seg\n", melhor_pior_volta[0][1], melhor_pior_volta[0][0]);
		printf("Tempo total: %d seg\n", total);
	}
	
	return 0;
}
