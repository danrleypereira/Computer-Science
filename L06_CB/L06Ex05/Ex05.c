#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n1, n2, n3, cont = 0, j = 0, auxiliar = 0, i = 0;
    int* matriculas;
    char str[30];
    FILE* fp = fopen("entrada.txt", "r");
    for(i = 0; i < 500; i++)
    {
        if(feof(fp))
        {
            break;
        }
        fscanf(fp, "%s %d %d %d %d", str, &m, &n1, &n2, &n3);
        if((n1 + n2 + n3)/3 >= 5)
        {
            cont++;
        }
    }
    fclose(fp);
    matriculas = malloc(sizeof(int)*cont);
    fp = fopen("entrada.txt", "r");
    for(i = 0; i < 500; i++)
    {
        if(feof(fp))
        {
            break;
        }
        fscanf(fp, "%s %d %d %d %d", str, &m, &n1, &n2, &n3);
        if((n1 + n2 + n3)/3 >= 5)
        {
            matriculas[j] = m;
            j++;
        }
    }
    fclose(fp);
    for(i = 0; i < cont; i++)
    {
        for(j = i + 1; j < cont; j++)
        {
            if(matriculas[j] < matriculas[i])
            {
                auxiliar = matriculas[i];
                matriculas[i] = matriculas[j];
                matriculas[j] = auxiliar;
            }
        }
    }
    for(i = 0; i < cont; i++)
        printf("%d\n", matriculas[i]);
    return 0;
}
