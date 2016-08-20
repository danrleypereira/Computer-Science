#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define number_elements 28 

double* initiliaze_matriz_numbers(double* matriz)
{
	int i;
        
	for(i=0; i<number_elements ; i++)
	{
                scanf("%lf", &matriz[i]);
	}
	double* pointers =(double*) calloc(i, sizeof(double));
	
	for(i=0 ; i<number_elements; i++)
	{
		pointers[i] = matriz[i];
	}
	
	return pointers;
}

double media_all_numbers(double* pointer)
{
	int i;
	double sum_of_numbers = 0;
	for(i=0; i<number_elements; i++)
	{
		sum_of_numbers = sum_of_numbers + pointer[i];
	}

	return (sum_of_numbers/number_elements);
}

//atribui a subtração dos valores pela media na matriz
int atribuir_sub_media_matriz(double* pointer, double media)
{
	int i;
	for(i=0; i<number_elements; i++)
	{
		pointer[i] = pointer[i]-media;
                double var = pointer[i]/1.0;
                pointer[i] = pow(var, 2);
	}
	return number_elements;	
}

void printar(int N_elements, double* pointer)
{
	int i;
        double var, media=0, media_square=0;
	for(i=0; i<N_elements; i++)
	{
                var = pointer[i]/1.0;
                media = media + pointer[i];
                media_square = media_square + pow(var, 2);
	}
}

int main(void)
{
	double* pointer =(double*) calloc(number_elements, sizeof(double));
        pointer = initiliaze_matriz_numbers(pointer);
	printar( atribuir_sub_media_matriz( pointer, media_all_numbers(pointer)), pointer );
	
	
	return 0;
}
