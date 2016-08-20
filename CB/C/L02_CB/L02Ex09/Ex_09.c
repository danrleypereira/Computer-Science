#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int I;
	scanf("%d", &I); 
	if((I >= 5) && (I < 8))
	{
		printf("INFANTIL A\n");
	}else if((I >= 8) && (I < 11))
	{
		printf("INFANTIL B\n");
	
	}else if((I >= 11) && (I < 14))
	{
		printf("JUVENIL A\n");
	
	}else if((I >= 14) && (I < 18))
	{
		printf("JUVENIL B\n");
	
	}else if(I >= 18)
	{
		printf("SENIOR\n");
	
	}else if(I < 5 && I >= 0)
	{
		printf("SEM CATEGORIA\n");
	}
	return 0;
}
