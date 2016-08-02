#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	double x, y, res;
	scanf("%lf", &x);
	scanf("%lf", &y);
	res = pow(x, y);
	printf("%.1lf\n", res);
	
	return 0;
}
