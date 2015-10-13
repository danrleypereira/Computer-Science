#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define number_elements 121 

double* initialize_matriz_numbers_difference_0()
{
	double matriz[number_elements] = {};
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
	double soma_of_numbers = 0;
	for(i=0; i<number_elements; i++)
	{
		soma_of_numbers = soma_of_numbers + pointer[i];
	}

	return (soma_of_numbers/number_elements);
}

//atribui a subtração dos valores pela media na matriz
int atribuir_sub_media_matriz(double* pointer, double media)
{
	int i;
	for(i=0; i<number_elements; i++)
	{
		pointer[i] = pointer[i]-media;
                pointer[i] = pow(pointer[i], 2);
	}
	return number_elements;	
}

void printar(int N_elements, double* pointer)
{
	int i;
	for(i=0; i<N_elements; i++)
	{
		printf("%.1lf ", pointer[i]);
	}
}

int main(void)
{
	double* pointer = initialize_matriz_numbers_difference_0();
	printar( atribuir_sub_media_matriz( pointer, media_all_numbers(pointer)), pointer );
	
	
	return 0;
}
