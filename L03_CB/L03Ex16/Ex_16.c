#include <stdio.h>
#include <stdlib.h>

int main(){
	double i;//será a quantidade de participantes e o numero da amostra.
	double MI = 0;
	double P1, P2, P3, P4, P5;
	P1 = P2 = P3 = P4 = P5 = 0;
	for(i=0; ; i++){
		int ID, OP;
		scanf("%d", &ID);
		if(ID<0)
		{
			printf("qtde de participantes: %.0lf\n", i);
			MI = MI/i;
			printf("idade media dos participantes: %.1lf\n", MI);
			P1 = 100*(P1/i);
			P2 = 100*(P2/i);
			P3 = 100*(P3/i);
			P4 = 100*(P4/i);
			P5 = 100*(P5/i);
			printf("Otimo: %.1lf%%\n", P1);
			printf("Bom: %.1lf%%\n", P2);
			printf("Regular: %.1lf%%\n", P3);
			printf("Ruim: %.1lf%%\n", P4);
			printf("Pessimo: %.1lf%%\n", P5);
			break;
		}
		
		MI += ID;

		do{
			scanf("%d", &OP);
		}while(OP<1 || OP>5);
		
		if(OP == 1)
		{
			P1++;
		}else if(OP == 2)
		{
			P2++;
		}else if(OP == 3)
		{
			P3++;
		}else if(OP == 4)
		{
			P4++;
		}else if(OP == 5)
		{
			P5++;
		}
			

	}
	return 0;
}
