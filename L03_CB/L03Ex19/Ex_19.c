#include <stdio.h>
#include <stdlib.h>

int maior_menor(int *matriz_adress)
{
	int i, maior=0, menor = 32000;
        
	for(i=0; i<20; i++)
	{
		int N;
		scanf("%d", &N);
		maior = maior>N ? maior : N;
		menor = menor<N ? menor : N;
	}
        *matriz_adress = menor;
        matriz_adress++;
        *matriz_adress = maior;
	return maior, menor;
}

int main(){
	int i = 0;
	int maior_Menor[2] = {};
        maior_menor(&maior_Menor[0]);

	printf("%d\n", maior_Menor[i++]);
	printf("%d\n", maior_Menor[i]);

	return 0;
}
