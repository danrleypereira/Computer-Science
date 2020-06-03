#include "Ex_01.h"
int main()
{
	int QF;
	scanf("%d", &QF);
	atribuir_valores_struct(QF);
	return 0;
}
void atribuir_valores_struct(int quantidade_filmes)
{
	struct esqueleto_filmes filmes[quantidade_filmes];
	int i;
    FILE* fp;
	for(i=0; i<quantidade_filmes; i++)
	{
		scanf("%s", &filmes[i].TITLE);  
		scanf("%lf", &filmes[i].ORC);  
		scanf("%d", &filmes[i].ID);  
		scanf("%d", &filmes[i].GEN);  
		scanf("%d", &filmes[i].ANO);  
		scanf("%d", &filmes[i].DUR);  
	}
    if((fp = fopen("filmes.bin", "wb")) != NULL)
    {
		fwrite(filmes, sizeof(filmes), 1, fp);
        fclose(fp);
	}else
	{
		exit(0);
	}
    ler_arquivo(quantidade_filmes);
}

void filmes_ano_lancamento_maior(int QF)
{
    int D; scanf("%d", &D);  
    FILE* fp;
    int i;
    FILMES filmes[QF];
    fp = fopen("filmes.bin", "rb");
	fread(&filmes, sizeof(filmes), 1, fp);
    for(i=0; i<QF; i++)
    {
        if(filmes[i].ANO > D)
        {
            printf("%s\n", filmes[i].TITLE);
        }
    }
    fclose(fp);
    printf("\n\n");
}

void idioma_igual(int QF)
{
    int I; scanf("%d", &I);  
    FILE* fp;
    int i;
    FILMES filmes[QF];
    fp = fopen("filmes.bin", "rb");
	fread(&filmes, sizeof(filmes), 1, fp);
    for(i=0; i<QF; i++)
    {
        if(filmes[i].ID == I)
        {
            printf("%s\n", filmes[i].TITLE);
        }
    }
    fclose(fp);
    printf("\n\n");
}
void duracao_maior(int QF)
{
    int T; scanf("%d", &T);  
    FILE* fp;
    int i;
    FILMES filmes[QF];
    fp = fopen("filmes.bin", "rb");
	fread(&filmes, sizeof(filmes), 1, fp);
    for(i=0; i<QF; i++)
    {
        if(filmes[i].DUR > T)
        {
            printf("%s\n", filmes[i].TITLE);
        }
    }
    fclose(fp);
    printf("\n\n");
}
void orcamento_menor(int QF)
{
    double O; scanf("%lf", &O);
    FILE* fp;
    int i;
    FILMES filmes[QF];
    fp = fopen("filmes.bin", "rb");
	fread(&filmes, sizeof(filmes), 1, fp);
    for(i=0; i<QF; i++)
    {
        if(filmes[i].ORC < O)
        {
            printf("%s\n", filmes[i].TITLE);
        }
    }
    fclose(fp);
    printf("\n\n");
}

void ler_arquivo(int QF)
{
    filmes_ano_lancamento_maior(QF);
    idioma_igual(QF);
    orcamento_menor(QF);
    duracao_maior(QF);
}
