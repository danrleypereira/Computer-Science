#include <stdlib.h>
#include <stdio.h>

int main(){
	int age, ageIn2017, yearBirth, yearCurrent;
	scanf("%d", &yearBirth);
	scanf("%d", &yearCurrent);
	
	age = yearCurrent - yearBirth;
	ageIn2017 = 2017 - yearBirth;
	
	printf("%d %d\n", age, ageIn2017);
	
	return 0;
}
