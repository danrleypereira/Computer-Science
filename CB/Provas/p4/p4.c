#include <stdio.h>
#include <stdlib.h>

int quantidade_de_linhas_fp1 = 0;
int quantidade_de_colunas_fp1[];
int colunas = 0;

int caractere;

int quantidade_de_linhas_fp2 = 0;
int quantidade_de_colunas_fp2[];

int main()
{
    FILE *fp1, *fp2, *fpout;
    fp1 = fopen("Input1.txt", "r");
    fp2 = fopen("Input2.txt", "r");
    fpout = fopen("Output.txt", "w");

    if(fp1 == NULL) exit(0);
    if(fp2 == NULL) exit(0);
    if(fpout == NULL) exit(0);


    while(!feof(fp1))
    {
        static int i = 0;
        if(caractere = fgetc(fp1)) colunas++;
        quantidade_de_colunas_fp1[i++] = colunas;
        if(caractere == '\n') quantidade_de_linhas_fp1++;
    }
    colunas =0;
    while(!feof(fp2))
    {
        static int i = 0;
        if(caractere = fgetc(fp2)) colunas++;
        quantidade_de_colunas_fp2[i++] = colunas;
        if(caractere == '\n') quantidade_de_linhas_fp2++;
    }

    rewind(fp1);
    rewind(fp2);

    int i, j;

        for(i=0; i<quantidade_de_linhas_fp1; i++)
        {
            if(quantidade_de_colunas_fp1[i] >= quantidade_de_colunas_fp2[i])
            {
                for(j=0; j<quantidade_de_colunas_fp1[i]; j++){
                fprintf(fpout,"%d", getc(fp1)); }
                fprintf(fpout, "%c", ' ');
            }
            else
            {
                for(j=0; j<quantidade_de_colunas_fp2[i]; j++){
                    fprintf(fpout,"%d", getc(fp1));}
                    fprintf(fpout, "%c", '\n');
            }
            
        }
    return 0;
}
