#include <stdio.h>
#include <stdlib.h>

int main(){
	double salary, percentPlus, valuePlus, salaryFinal;
	scanf("%lf", &salary);
	scanf("%lf", &percentPlus);
	salaryFinal = salary + salary * (percentPlus/100.00);
	valuePlus = salaryFinal - salary;
	
	printf("%.2lf %.2lf\n", valuePlus, salaryFinal);
	
	
	
	return 0;
}
