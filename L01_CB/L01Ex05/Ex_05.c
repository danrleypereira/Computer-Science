#include <stdio.h>
#include <stdlib.h>

int main(){
	double salaryBase, salary;
	
	scanf("%lf", &salaryBase); 
	salary = salaryBase - salaryBase*(7/100.00) + salaryBase*(5/100.00);

	printf("%.2lf\n", salary);


	return 0;
}
