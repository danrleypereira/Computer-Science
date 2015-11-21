#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, maior, menor;//Maior e menor altura.
	scanf("%d", &maior);
	scanf("%d", &menor);
	for(i=0 ; ; ++i)
	{
		maior += 2;
		menor += 3;
		if(menor>maior)
		{
			printf("%d\n", i);
			break;
		}
	}
	
	
	
	
	
	
	return 0;
}
