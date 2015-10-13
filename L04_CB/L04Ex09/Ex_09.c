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
		if(matriz[i] == 0)
		{
			break;
		}
	}

	double* pointers =(double*) calloc(i, sizeof(double));
	
	for(i=0 ; i<number_elements; i++)
	{
		pointers[i] = matriz[i];
		if(matriz[i] == 0)
		{
			break;
		}
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
		if(pointer[i] == 0) break;	
	}

	return (soma_of_numbers/i);
}

//atribui a subtração dos valores pela media na matriz
int atribuir_sub_media_matriz(double* pointer, double media)
{
	int i;
	for(i=0; i<number_elements; i++)
	{
		if(pointer[i] == 0) break;
		pointer[i] = pointer[i]-media;
                pointer[i] = pow(pointer[i], 2);
	}
	
	return i;
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
