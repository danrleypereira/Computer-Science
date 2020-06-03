#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define number_elements 121 

double* initiliaze_matriz_numbers(int* matriz)
{
	int i;

	for(i=0; i<number_elements ; i++)
	{
                scanf("%d", &matriz[i]);
	}

	return matriz;
}

double media_all_numbers(int* pointer)
{
	int i;
	double sum_of_numbers = 0;

	for(i=0; i<number_elements; i++)
	{
		sum_of_numbers = sum_of_numbers + pointer[i];
	}

	return (sum_of_numbers/(double)number_elements);
}

//atribui a subtração dos valores pela media na matriz
int atribuir_sub_media_matriz_printar(int* pointer, double media)
{
	int i;
        double dispersao_matrix[number_elements] = {};

	for(i=0; i<number_elements; i++)
	{
		dispersao_matrix[i] = pointer[i]-media;
                double var = dispersao_matrix[i]/1.0;
                dispersao_matrix[i] = pow(var, 2);
                printar_valor(dispersao_matrix[i]);
	}

}

void printar_valor(double valor)
{
		printf("%.1lf ", valor);
}

int main(void)
{
	int* pointer =(int*) calloc(number_elements, sizeof(int));
        pointer = initiliaze_matriz_numbers(pointer);
	atribuir_sub_media_matriz_printar( pointer, media_all_numbers(pointer));
	
	return 0;
}
