#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int x;
	do{
	scanf("%d", &x);
	}while(x <= 0);
	
	printf("%.1lf\n", pow(x, 2));
	printf("%.1lf\n", pow(x, 3));
	printf("%.1lf\n", sqrt(x));
	printf("%.1lf\n", pow(x, 1.0/3));
	
	return 0;
}
