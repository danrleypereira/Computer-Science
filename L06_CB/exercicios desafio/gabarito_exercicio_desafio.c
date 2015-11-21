#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 10


struct dados{
    double notas;
    char nome[40];
    int idade;
};

typedef struct dados dados;


void scanear_notas(){
    int i;
    FILE *fp;
    
    dados notas[n];
    
    
    fp = fopen("notas.txt", "w");
    if(!fp){
        printf("erro");
    }
    
    for(i=0;i<n;i++){
        scanf("%lf", &notas[i].notas);
        fprintf(fp, "%.1lf\n", notas[i].notas);
    }
    fclose(fp);
}


int main()
{
    int i;
    char numb[n], str[600];
    
    dados dados[n];
    
    scanear_notas();
    
    FILE* fp;
    
    fp = fopen("notas.txt", "r");
    rewind(fp);
    
    
    
    for(i=0;i<n;i++){
        fscanf(fp, "%s", numb);
        //printf("%s", numb);
        dados[i].notas = atof(numb);
    }
    fclose(fp);
    
    for(i=0;i<n;i++){
        scanf("%s", dados[i].nome);
        scanf("%d", &dados[i].idade);
    }
    
    fp = fopen("dados_aluno.txt", "w");
    
    for(i=0;i<n;i++){
        fprintf(fp, "%s \n%d \n%.1lf\n\n", dados[i].nome, dados[i].idade, dados[i].notas);
    }
    fclose(fp);
    
    printf("\n\n");
    
    
    if( ( fp = fopen("dados_aluno.txt", "r") ) == NULL )
    {
        printf("Error: File \"%s\" cannot be opened\n", "dados.txt");
        //continue;
    }
    
    while( fgets (str, 600, fp)!=NULL )
    {
        
        printf("%s",str);
        printf("\n");
    }
    
    fclose(fp);

    
    return 0;
    
}
