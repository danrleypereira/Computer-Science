#include <stdio.h>
#include <stdlib.h>

int main(){
	int NComodos, i;
	scanf("%d", &NComodos);
	double area = 0;
	for(i=0; i<NComodos; i++)
	{
		double largura, comprimento;
		scanf("%lf", &largura);
		scanf("%lf", &comprimento);
		area += (largura*comprimento);
	}
	printf("%.1lf\n", area);
	
	return 0;
}
