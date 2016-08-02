#include <stdio.h>
#include <stdlib.h>
#define numbers 53

int* inicializar_matriz(int* matriz, int numero_elementos)// Argumentos: Matriz que será preenchida e quantos elementos serão colocados na matriz, retornará um ponteiro para o limite.
{
	int i;
	int* limite =(int*) calloc(1, sizeof(int));
	for(i=0; i<numero_elementos; i++)
	{
		scanf("%d", &matriz[i]);
	}
	scanf("%d", limite);
	return limite;
}

double media_dos_elementos(int* matriz, int numero_elementos, int limite)//Printa a media da matriz.
{
	int i, j=0;
	double soma_dos_elementos =0;
	for(i=0; i<numero_elementos; i++)
	{
		if(matriz[i] <= limite)
		{
			j++;
			soma_dos_elementos = soma_dos_elementos + matriz[i];
		}
	}
	
	return (soma_dos_elementos/j);
}

int main(){

	int N[numbers] = {};
	int* pointer_limite;
	pointer_limite = inicializar_matriz( N, numbers);
	printf("%.1lf\n", media_dos_elementos(N, numbers, *pointer_limite));
	
	return 0;
}
