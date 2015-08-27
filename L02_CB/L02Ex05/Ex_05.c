#include <stdio.h>
#include <stdlib.h>

int main(){
	int N1, N2, media; // Notas 1 bimestre e 2 bimestre e a respectiva media do alunos.
	scanf("%d", &N1);
	scanf("%d", &N2);
	media = (N1 + N2)/ 2;
	if(media >= 7)
	{
		printf("APROVADO\n");
	}else if(media < 3)
	{
		printf("REPROVADO\n");
	}else
	{
		printf("EXAME\n");
	}
	
	
	return 0;
}
