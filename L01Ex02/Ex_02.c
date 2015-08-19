#include <stdio.h>
#include <stdlib.h>

int main(){
	int int1, int2, int3;
	double med;

	scanf("%d", &int1);
	scanf("%d", &int2);
	scanf("%d", &int3);
	med = (int1 + int2 + int3)/3.0;
	printf("%.1lf\n", med);	

	return 0;
}
