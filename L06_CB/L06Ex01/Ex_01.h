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
void criar_arquivo(struct esqueleto_filmes filme);
void ler_arquivo(int QF);
