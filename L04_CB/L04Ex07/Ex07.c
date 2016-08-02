#include <stdlib.h>
#include <stdio.h>
#define number_of_varibles 135 

int* matriz_numbers_limits();
void print_matriz_out_limits();

int main(void)
{
	print_matriz_out_limits( matriz_numbers_limits() );
	return 0;
}

//Initialize matriz with numbers and limits, the limits are the two last elements of matriz.
int* matriz_numbers_limits()
{	
	int i;
	int* matriz =(int*) malloc((number_of_varibles+2)*sizeof(int));
	
	for(i=0; i<(number_of_varibles+2); i++)
	{
		scanf("%d", (matriz+i));
	}
	
	return matriz;
}

void print_matriz_out_limits(int* matriz)
{
	int i;
	
	for(i=0; i<number_of_varibles; i++)
	{
		int limite_superior = *(matriz+number_of_varibles+1), limite_inferior = *(matriz+number_of_varibles), number = *(matriz+i);
		
		if(number <limite_inferior || number >limite_superior)
		{
			printf("%d ", number);
		}
	}
	
	
}
