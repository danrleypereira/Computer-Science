#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define number_elements 3 

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
        printf("\nmedia = %lf\n", (soma_of_numbers/i));

	return (soma_of_numbers/i);
}

//atribui a subtração dos valores pela media na matriz
int variancia(double* pointer, double media)
{
        printf("\nmedia = %.1lf\n", media);
	int i;
        register double soma_da_subtracao =0;
	for(i=0; i<number_elements; i++)
	{

                printf("\npointer[%d] = %.1lf\n", i, pointer[i]);
		pointer[i] = pointer[i]-media;
                printf("\npointermedia[%d] = %.1lf\n", i, pointer[i]);
                soma_da_subtracao = soma_da_subtracao + pointer[i];
	}
        printf("\nsoma da subtração →→→→→→→   %.1lf\n", soma_da_subtracao);
        printf("%.1lf\n", pow(soma_da_subtracao, 2));
        printf("%.1lf\n", sqrt(soma_da_subtracao));
	
	return ;
}

int main(void)
{
	double* pointer = initialize_matriz_numbers_difference_0();
	variancia(pointer, media_all_numbers(pointer));
	
	return 0;
}
