#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float peso, altura, IMC;
	scanf("%f", &peso); 
	scanf("%f", &altura); 
	IMC = peso/(pow(altura, 2));
	if(IMC < 20)
	{
		printf("ABAIXO\n");
	
	}else if(IMC >= 20 && IMC < 25)
	{
		printf("NORMAL\n");
	
	}else if(IMC >= 25 && IMC < 30)
	{
		printf("SOBREPESO\n");
	
	}else if(IMC >= 30 && IMC < 40)
	{
		printf("OBESO\n");
	
	}else
	{
		printf("MORBIDO\n");
	}
	
	
	return 0;
}
