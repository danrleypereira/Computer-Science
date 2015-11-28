#include "Ex_01.h"
int main()
{
	int QF;
	scanf("%d", &QF);
	atribuir_valores_struct(QF);
    ler_arquivo();
	return 0;
}
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
	    
        printf("leu todos os dados!!\n");
	
		criar_arquivo(filmes[i]);
	}
    ler_arquivo(quantidade_filmes);
}
void criar_arquivo(struct esqueleto_filmes filme)
{
	FILE* fp;
    printf("entrou na função criar arquivo!!\n");
	fp = fopen("filmes.bin", "w+b");
	if(fp != NULL)
	{
		fwrite(&filme.TITLE, sizeof(char), 1, fp);
		fwrite(&filme.ORC, sizeof(double), 1, fp);
		fwrite(&filme.ID, sizeof(int), 1, fp);
		fwrite(&filme.GEN, sizeof(int), 1, fp);
		fwrite(&filme.ANO, sizeof(int), 1, fp);
		fwrite(&filme.DUR, sizeof(int), 1, fp);
		
        fclose(fp);
	}else
	{
		printf("Error ao abrir arquivo.");
		exit(0);
	}
    printf("arquivo cadastrado!\n");
}

void ler_arquivo(int QF)
{
    FILE* fp;
    FILMES filme[QF]
    fp = fopen("filmes.bin", "r+b");
    fread();  
		fread(&filme.TITLE, sizeof(char), 1, fp);
		fread(&filme.ORC, sizeof(double), 1, fp);
		fread(&filme.ID, sizeof(int), 1, fp);
		fread(&filme.GEN, sizeof(int), 1, fp);
		fread(&filme.ANO, sizeof(int), 1, fp);
		fread(&filme.DUR, sizeof(int), 1, fp);
    fclose(fp);
}
