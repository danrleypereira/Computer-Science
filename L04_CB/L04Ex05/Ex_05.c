#include <stdio.h>
#include <stdlib.h>
#define numbers 106 

int inicializar_matriz(int* matriz, int numero_elementos)// Argumentos: Matriz que será preenchida e quantos elementos serão colocados na matriz.
{
	int i;
	for(i=0; i<numero_elementos; i++)
	{
		scanf("%d", &matriz[i]);
		if(matriz[i] == 0)
		{
			return i;
		}
	}
	return i;
}

void printar_soma_elementos_menores_que(int* matriz, int numero_elementos, int limite)//Printar soma de elementos que não ultrapassem o limite.
{
	int i, soma_elementos = 0;
	for( i=0; i<numero_elementos; i++)
	{
		if(matriz[i] <= limite)
		{
			soma_elementos = soma_elementos + matriz[i];
		}

	}
	printf("%d\n", soma_elementos);
}

int main(){
	int numero_de_elementos, numero_limite, N[numbers] = {};
	numero_de_elementos = inicializar_matriz( N, numbers);
	scanf("%d", &numero_limite);
	printar_soma_elementos_menores_que(N, numero_de_elementos, numero_limite);
	
	return 0;
}
