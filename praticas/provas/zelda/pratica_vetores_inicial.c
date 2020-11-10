#include <math.h>
#include <stdio.h>
#include <string.h>

int mapa[8][8] = {}, linha = 0, coluna = 0, ruppes = 0;

void instrucoes_trajeto();
void inteiro_invalido();
void resultado(int total);
void inicializar_mapa()
{
	int i, j, valor_do_quadrado = 1;
	for(i=0; i<8; i++)
	{
		int valor_intermediario = valor_do_quadrado;

		for(j=0; j<8; j++)
		{
			mapa[i][j] = valor_intermediario;
			mapa[j][i] = valor_intermediario;		
			valor_intermediario = valor_intermediario *2;
		}
		
		valor_do_quadrado = valor_do_quadrado *2;
		
	}
	for(i=0; i<8; i++)
	{
		for(j=0; j<8; j++)
		{
			printf("%d\t", mapa[i][j]);
		}
		printf("\n");
	}
}

int scan()
{
	int number = 10;
	while(number>7 || number<0)	
	{
		instrucoes_trajeto();
		scanf("%d", &number);
		if(number>7 || number<0) inteiro_invalido();
	}
	return number;
}

void move_right(int number)
{
	int i;
	for(i=coluna; i< (coluna + number); i++, coluna++)
	{
		if(i < 7)
		{
			ruppes = ruppes + mapa[linha][i];
		}else{
			break;
		}
	}
}

void move_down(int number)
{
	int i;
	for(i=linha; i< (linha + number); i++,linha++)
	{
		if(i < 7)
		{
			ruppes = ruppes + mapa[i][coluna];
		}else
		{
			break;
		}
	}
}

int main()
{
	inicializar_mapa();
	while(linha <7)
	{ 
		move_down(scan());
		while(linha<7)
		{
			move_right(scan());
		}
	}
	resultado(ruppes);
	
	
	
	
    return 0;
}

void instrucoes_trajeto()
{
    printf("\nDigite um numero inteiro entre '0' e '7':\n");
}

void inteiro_invalido()
{
    printf("\nInteiro invalido! Digite um inteiro entre '0' e '7':\n");
}

void resultado(int total)
{
    printf("\n\nLink coletou %d rupias em seu trajeto.\n", total);
}
