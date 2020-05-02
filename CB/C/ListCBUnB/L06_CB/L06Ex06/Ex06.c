#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matricula, n1, n2, n3, cont1 = 0, j = 0, k = 0, aux = 0, i = 0, cont12 = 0;
    int* aprovados, *reprovados, *pb1, *pb2, *pb3, *pr1, *pr2, *pr3;
    char str[30];
    FILE* fp = fopen("entrada.txt", "r");
    for(i = 0; i < 500; i++)
    {
        if(feof(fp))
        {
            break;
        }
        fscanf(fp, "%s %d %d %d %d", str, &matricula, &n1, &n2, &n3);
        if((n1 + n2 + n3)/3 >= 5)
        {
            cont1++;
        }
        else
            cont12++;
    }
    fclose(fp);
    aprovados = malloc(sizeof(int)*cont1);
    pb1 = malloc(sizeof(int)*cont1);
    pb2 = malloc(sizeof(int)*cont1);
    pb3 = malloc(sizeof(int)*cont1);
    reprovados = malloc(sizeof(int)*cont12);
    pr1 = malloc(sizeof(int)*cont12);
    pr2 = malloc(sizeof(int)*cont12);
    pr3 = malloc(sizeof(int)*cont12);
    fp = fopen("entrada.txt", "r");
    for(i = 0; i < 500; i++)
    {
        if(feof(fp))
        {
            break;
        }
        fscanf(fp, "%s %d %d %d %d", str, &matricula, &n1, &n2, &n3);
        if((n1 + n2 + n3)/3 >= 5)
        {
            aprovados[j] = matricula;
            pb1[j] = n1;
            pb2[j] = n2;
            pb3[j] = n3;
            j++;
        }
        else
        {
            reprovados[k] = matricula;
            pr1[k] = n1;
            pr2[k] = n2;
            pr3[k] = n3;
            k++;
        }
    }
    fclose(fp);
    for(i = 0; i < cont1; i++)
    {
        for(j = i + 1; j < cont1; j++)
        {
            if(aprovados[j] < aprovados[i])
            {
                //matricula aprovados
                aux = aprovados[i];
                aprovados[i] = aprovados[j];
                aprovados[j] = aux;
                //n1 aprovados
                aux = pb1[i];
                pb1[i] = pb1[j];
                pb1[j] = aux;
                //n2 aprovados
                aux = pb2[i];
                pb2[i] = pb2[j];
                pb2[j] = aux;
                //n3 aprovados
                aux = pb3[i];
                pb3[i] = pb3[j];
                pb3[j] = aux;
            }
        }
    }
    for(i = 0; i < cont12; i++)
    {
        for(j = i + 1; j < cont12; j++)
        {
            if(reprovados[j] < reprovados[i])
            {
                //matricula reprovados
                aux = reprovados[i];
                reprovados[i] = reprovados[j];
                reprovados[j] = aux;
                //n1 reprovados
                aux = pr1[i];
                pr1[i] = pr1[j];
                pr1[j] = aux;
                //n2 reprovados
                aux = pr2[i];
                pr2[i] = pr2[j];
                pr2[j] = aux;
                //n3 reprovados
                aux = pr3[i];
                pr3[i] = pr3[j];
                pr3[j] = aux;
            }
        }
    }
    FILE* fp2 = fopen("aprovados.txt", "w");
    for(i = 0; i < cont12; i++)
    {
        fprintf(fp2, "%d %d %d %d\n", aprovados[i], pb1[i], pb2[i], pb3[i]);
    }
    fclose(fp2);
    FILE* fp3 = fopen("reprovados.txt", "w");
    for(i = 0; i < cont12; i++)
    {
        fprintf(fp2, "%d %d %d %d\n", reprovados[i], pr1[i], pr2[i], pr3[i]);
    }
    fclose(fp3);
    free(aprovados);
    free(reprovados);
    free(pb1);
    free(pb2);
    free(pb3);
    free(pr1);
    free(pr2);
    free(pr3);
    return 0;
}
