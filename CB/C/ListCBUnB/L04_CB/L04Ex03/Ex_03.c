#include <stdio.h>
#include <stdlib.h>
#define numbers 150 

void inicializar_matriz(int* matriz, int numero_elementos)// Argumentos: Matriz que será preenchida e quantos elementos serão colocados na matriz.
{
	int i;
	for(i=0; i<numero_elementos; i++)
	{
		scanf("%d", &matriz[i]);
	}
}

void printar_elementos_menores_que(int* matriz, int numero_elementos, int limite)//Printar elementos que não ultrapassem o limite.
{
	int i;
	for( i=0; i<numero_elementos; i++)
	{
		if(matriz[i] < limite)
		{
			printf("%d ", matriz[i]);
		}
	}
	printf("\n");
}

int main(){
	int numero_limite, N[numbers] = {};
	inicializar_matriz( N, numbers);
	scanf("%d", &numero_limite);
	printar_elementos_menores_que(N, numbers, numero_limite);
	
	return 0;
}
