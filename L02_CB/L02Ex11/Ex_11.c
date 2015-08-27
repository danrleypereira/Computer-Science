#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double x;
	scanf("%lf", &x); 
	if(x <= 1)
	{
		double Fx = 1;
		printf("%.1lf\n", Fx);
	
	}else if(x > 1 && x <= 2)
	{
		double Fx = 2;
		printf("%.1lf\n", Fx);
	
	}else if(x > 2 && x <= 3)
	{
		double Fx = pow(x, 2);
		printf("%.1lf\n", Fx);
	
	}else if(x > 3)
	{
		double Fx = pow(x, 3);
		printf("%.1lf\n", Fx);
	
	}
	
	return 0;
}
