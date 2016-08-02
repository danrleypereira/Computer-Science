#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double bhaskara(double A, double B, double C);

int main()
{
	double A, B, C; 
	scanf("%lf", &A);
	scanf("%lf", &B);
	scanf("%lf", &C);

	bhaskara(A, B, C);

	return 0;
}

double bhaskara(double A, double B, double C)
{
	double raiz1, raiz2, delta;
	delta = ((pow(B, 2)) -4 * A * C);
	if(delta >= 0)
	{
	raiz1 = ((-B) + (sqrt(delta)))/ (2 * A);
	raiz2 = ((-B) - (sqrt(delta)))/ (2 * A);
	
	printf("%.1lf\n", raiz1);
	printf("%.1lf\n", raiz2);
	}

	return 0;
}
