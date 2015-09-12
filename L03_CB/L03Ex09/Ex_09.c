#include <stdio.h>
#include <stdlib.h>

int main(){
	for( ; ; )
	{
		int Q;//Quantidades de produtos.
		double PR;//Preço do produto.
		static double PRT = 0;//Preço total.
		
		scanf("%d", &Q);
		if(Q<=0)
		{
			printf("%.2lf\n", PRT);
			break;
		}
		do
		{
			scanf("%lf", &PR);
		}while(PR<0);
		
		PRT = PRT + (Q*PR); 
	}
	
	
	
	return 0;
}
