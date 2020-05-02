#include <stdio.h>
#include <stdlib.h>

int main(){
	double deposito, taxa, imposto;
	float impostoValue, valueFinal, rendimento;
	
	scanf("%lf", &deposito);
	scanf("%lf", &taxa);
	scanf("%lf", &imposto);
	rendimento = deposito * (taxa/100.00);

	impostoValue = rendimento *(imposto/100.00);
	valueFinal = deposito + rendimento - impostoValue;
	
	printf("%.2f %.2f\n", impostoValue, valueFinal);
	

	
	
	return 0;
}
