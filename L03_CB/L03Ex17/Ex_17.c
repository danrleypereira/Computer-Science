#include <stdio.h>
#include <stdlib.h>


int grupo_da_lesma(int VelocidadeLesma)
{
	if(VelocidadeLesma < 10)
	{
		return 1;
	}else if(VelocidadeLesma >= 10 && VelocidadeLesma < 20)
	{
		return 2;
	}else
	{
		return 3;
	}
	return printf("Erro na definicao do grupo!!\a\a\n");
}
	
void lesma_mais_rapida()
{
	int L, Vi, i;//L = numero de lesmas; Vi = velocidade de cada lesma;
	int nivel_da_lesma_mais_veloz = 0;
	
	do
	{
		scanf("%d", &L);
	}
	while((!(L > 1)) && (!(L < 500)));
	
	for(i=0; i<L; i++)
	{
		do
		{
			scanf("%d", &Vi);
		}
		while((!(Vi > 1)) && (!(L < 50)));
		
		nivel_da_lesma_mais_veloz = grupo_da_lesma(Vi) < nivel_da_lesma_mais_veloz ? nivel_da_lesma_mais_veloz : grupo_da_lesma(Vi);
	}
	printf("%d\n", nivel_da_lesma_mais_veloz);
}


int main()
{
	lesma_mais_rapida();
	
	
	
	return 0;
}
