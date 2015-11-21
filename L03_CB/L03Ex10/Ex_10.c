#include <stdio.h>
#include <stdlib.h>

int main(){
	while(1)
	{
		double SN, S;//New Salary. Salary.
		static double aumentoNaFolha = 0;
		scanf("%lf", &S);
		if(S>=0 && S<500)
		{
			SN = S + S*(15/100.00);
			aumentoNaFolha += SN - S;
			printf("%.2lf ", SN);
		}else if(S>=500 && S<=1000)
		{
			SN = S + S*(10/100.00);
			aumentoNaFolha += SN - S;
			printf("%.2lf ", SN);
		}else if(S>1000)
		{
			SN = S + S*(5/100.00);
			aumentoNaFolha += SN - S;
			printf("%.2lf ", SN);
		}else
		{
			printf(" %.2lf\n", aumentoNaFolha);
			break;
		}
		
	}
	
	
	
	
	
	
	
	return 0;
}
