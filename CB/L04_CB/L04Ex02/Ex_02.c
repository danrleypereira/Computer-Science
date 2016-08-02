#include <stdio.h>
#include <stdlib.h>
#define numbers 300

int inicializar_matriz(int* matriz, int numero_elementos)// Argumentos: Matriz que será preenchida e quantos elementos serão colocados na matriz.
{
	int i;
	for(i=0; i<numero_elementos; i++)
	{
		scanf("%d", &matriz[i]);
		if(matriz[i] < 0)
		{
			return i;
		}
	}
	return i;
}


void printar_matriz_tras_frente(int* matriz, int numero_elementos)//Printa a matriz de trás pára frente.
{
	int i;
	for(i=numero_elementos; i>0; )
	{
		printf("%d ", matriz[--i]);
	}
	printf("\n");
}

int main(){
	int N_elementos_declarados;//Numero de elementos declarados.
	int N[numbers] = {};
	N_elementos_declarados = inicializar_matriz( N, numbers);
	printar_matriz_tras_frente(N, N_elementos_declarados);
	
	return 0;
}
