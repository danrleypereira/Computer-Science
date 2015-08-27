#include <stdio.h>
#include <stdlib.h>
int main()
{
	int idade;
	scanf("%d", &idade);
	if(idade >= 18 && idade < 65)
	{
		printf("OBRIGATORIO\n");
	}else if(idade < 16)
	{
		printf("NAO ELEITOR\n");
	}else
	{
		printf("FACULTATIVO\n");
	}
	
	return 0;
}
