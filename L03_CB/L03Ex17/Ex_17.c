#include <stdio.h>
#include <stdlib.h>

int main(){
	for( ; ; )
	{
		double SB, SL, HT, VHT, IR, INSS;//Salario Bruto,Salario Liquido Horas Trabalhadas, Valor da Hora de Trabalho, Imposto de Renda, INSS.
		scanf("%lf", &HT);
		if(!(HT > 0)) break;
		scanf("%lf", &VHT);
		SB = HT*VHT;
		INSS = SB*0.11;
		
		if((SB-INSS) < 900)
		{
			SL = SB - INSS;//Isento;
			printf("%.2lf\n", SL);
		}else if((SB-INSS) >= 900 && (SB-INSS) <= 1800)
		{
			SL = SB-INSS;
			SL = (SL - (SL*0.15))- 135;//15% e $135;
			printf("%.2lf\n", SL);
		}else if((SB-INSS) > 1800)
		{
			SL = SB-INSS;
			SL = (SL - (SL*0.275))-360;//27.5% e $360;
			printf("%.2lf\n", SL);
		}
		
	}

	return 0;
}
