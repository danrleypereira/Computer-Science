#include "Ex_01.h"
void atribuir_valores_struct(int quantidade_filmes)
{
	struct esqueleto_filmes filmes[quantidade_filmes];
	int i;
	for(i=0; i<quantidade_filmes; i++)
	{
		scanf("%s", &filmes[i].TITLE); __fpurge(stdin);
		scanf("%lf", &filmes[i].ORC); __fpurge(stdin);
		scanf("%d", &filmes[i].ID); __fpurge(stdin);
		scanf("%d", &filmes[i].GEN); __fpurge(stdin);
		scanf("%d", &filmes[i].ANO); __fpurge(stdin);
		scanf("%d", &filmes[i].DUR); __fpurge(stdin);
		
		salvar_arquivo(filmes[i]);
	}
	
}

void salvar_arquivo(struct esqueleto_filmes filme)
{
	FILE* fp;
	fp = fopen("filmes.bin", "ab+");
	if(fp != NULL)
	{
		fwrite(filme.TITLE, sizeof(char), 1, fp);
		fwrite(filme.ORC, sizeof(int), 1, fp);
		fwrite(filme.ID, sizeof(int), 1, fp);
		fwrite(filme.GEN, sizeof(int), 1, fp);
		fwrite(filme.ANO, sizeof(int), 1, fp);
		fwrite(filme.DUR, sizeof(int), 1, fp);
		
	}else
	{
		printf("Error ao abrir arquivo.");
		exit(0);
	}
}
int main()
{
	int QF;
	scanf("%d", &QF);
	atribuir_valores_struct(QF);
	return 0;
}

