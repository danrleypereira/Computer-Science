#include <math.h>
#include <stdio.h>

int g_mapa[8][8] = {}, g_linha = 0, g_coluna = 0, g_ruppes = 0;

void instrucoes_trajeto();
void inteiro_invalido();
void resultado(int total);
void inicializar_mapa();
int scan_linha();
int scan_coluna();
void move_right(int number);
void move_down(int number);

int main()
{
	inicializar_mapa();
	while(g_linha <7)
	{ 
		move_down(scan_linha());
		if(g_linha>=7) break;
		move_right(scan_coluna());
	}
	resultado(g_ruppes);
	
    return 0;
}

void move_down(int number)
{
	int i;
	if(number == 0) return;
	for(i=0; i<= number; i++)
	{
		g_ruppes = g_ruppes + g_mapa[g_linha++][g_coluna];
	}
	printf("g_linha = %d\n", g_linha);
}

void move_right(int number)
{
	int i;
	if(number == 0) return;
	for(i=0; i<=number; i++)
	{
		g_ruppes = g_ruppes + g_mapa[g_linha][g_coluna++];
	}
	printf("g_coluna = %d\n", g_coluna);
}

int scan_linha()
{
	int number = 10;
	if(g_linha>=8) return 0;
	while(number>(8-g_linha) || number<0)	
	{
		instrucoes_trajeto();
		scanf("%d", &number);
		if(number>(8-g_linha) || number<0) inteiro_invalido();
	}
	return number;
}

int scan_coluna()
{
	int number = 10;
	if(g_coluna>=8) return 0;
	while(number>(8-g_coluna) || number<0)	
	{
		instrucoes_trajeto();
		scanf("%d", &number);
		if(number>(8-g_coluna) || number<0) inteiro_invalido();
	}
	return number;
}

void inicializar_mapa()
{
	int i, j, valor_do_quadrado = 1;
	for(i=0; i<8; i++)
	{
		int valor_intermediario = valor_do_quadrado;
		for(j=0; j<8; j++)
		{
			g_mapa[i][j] = valor_intermediario;
			g_mapa[j][i] = valor_intermediario;		
			valor_intermediario = valor_intermediario *2;
		}
		
		valor_do_quadrado = valor_do_quadrado *2;
		
	}
	for(i=0; i<8; i++)
	{
		for(j=0; j<8; j++)
		{
			printf("%d\t", g_mapa[i][j]);
		}
		printf("\n");
	}
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
