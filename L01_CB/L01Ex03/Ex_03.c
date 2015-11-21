#include <stdio.h>
#include <stdlib.h>

int main(){
	double salary, percent25;
	scanf("%lf", &salary);
	percent25 = salary + salary * (25.00/100);
	printf("%.2lf\n", percent25);
	
	
	
	return 0;
}
