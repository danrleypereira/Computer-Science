#include <stdio.h>
#include <stdlib.h>

typedef struct esqueleto_filmes {
	char TITLE[100];
	double ORC;
	int ID;
	int GEN;
	int ANO;
	int DUR;
}FILMES;

void atribuir_valores_struct(int QF);
void ler_arquivo(int QF);
void filmes_ano_lancamento_maior(int QF);
void orcamento_menor(int QF);
void idioma_igual(int QF);
void duracao_maior(int QF);
