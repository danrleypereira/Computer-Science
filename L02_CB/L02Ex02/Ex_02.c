#include <stdio.h>
#include <stdlib.h>

int main(){
	int N1, N2; //Duas entradas para comparar se são multiplos
	scanf("%d", &N1);
	scanf("%d", &N2);
	int maior = N1 > N2 ? N1 : N2;
	int menor = N1 < N2 ? N1 : N2;
	if((maior%menor) == 0)
	{
		printf("MULTIPLO\n");
	}else
	{
		printf("NAO E MULTIPLO\n");
	}




	




	return 0;
}
