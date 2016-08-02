#include <stdio.h>
#include <stdlib.h>
#define num_colunas 5
#define num_linhas 15

int A[num_linhas][num_colunas] = {}, A_sub[num_linhas][num_colunas] = {};
void inicializar_matrix()
{
	int linha, coluna;
	for(linha=0; linha<num_linhas; linha++)
	{
		for(coluna=0; coluna<num_colunas; coluna++)
		{
			scanf("%d", &A[linha][coluna]);
		}
	}
}
int menor_valor_linha(int linha)
{
	int i, menor_valor = 10000000;
	for(i=0; i<num_colunas; i++)
	{
		if(menor_valor > A[linha][i])
		{
			menor_valor = A[linha][i];
		}
	}
	return menor_valor;
}

int main()
{
	int linha, coluna;
	inicializar_matrix();
	for(linha=0; linha<num_linhas; linha++)
	{
		for(coluna=0; coluna<num_colunas; coluna++)
		{
			A_sub[linha][coluna] = A[linha][coluna] - menor_valor_linha(linha);
			printf("%d\t", A_sub[linha][coluna]);
		}
		printf("\n");
	}
	
	return 0;
}
