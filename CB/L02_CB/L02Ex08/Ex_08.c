#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double SM;
	scanf("%lf", &SM); 
	if(SM <= 500)
	{
		printf("0.00\n");
	}else if(SM > 500 && SM <= 1000)
	{
		double credito = SM * 0.3;
		printf("%.2lf\n", credito);
		
	}else if(SM > 1000 && SM <= 3000)
	{
		double credito = SM * 0.4;
		printf("%.2lf\n", credito);
		
	}else if(SM > 3000)
	{
		double credito = SM * 0.5;
		printf("%.2lf\n", credito);
		
	}
	
	

	return 0;
}
