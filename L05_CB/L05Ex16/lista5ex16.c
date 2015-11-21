#include <stdio.h>

double calculaVacina(int N,int idadeBovinos[],int pesoBovinos[],int M,double QV)
{
    int quantidade = 0, i, *peso_acima, j;
    double resultado = 0;
    for(i = 0; i < N; i++)
    {
        if(idadeBovinos[i] > M)
        {
            quantidade++;
        }
    }
    peso_acima = (int*)malloc(sizeof(int)*quantidade);
    for(i = 0, j = 0; i < N; i++)
    {
        if(idadeBovinos[i] > M)
        {
            peso_acima[j] = pesoBovinos[i];
            j++;
        }
    }
    for(i = 0; i < quantidade; i++)
    {
        resultado += peso_acima[i];
    }
    resultado = (double)(resultado * QV);  
    return resultado;
}

int main()
{
    int bovinos, *idade, *peso, idade_min;
    int i;
    double resultado, vacina_kg;
    scanf("%d", &bovinos);
    idade = (int*)malloc(sizeof(int)*bovinos);
    peso = (int*)malloc(sizeof(int)*bovinos);
    for (i = 0; i < bovinos; i++)
    {
        scanf("%d", &idade[i]);
        scanf("%d", &peso[i]);
    }
    scanf("%d", &idade_min);
    scanf("%lf", &vacina_kg);
    resultado = calculaVacina(bovinos,idade,peso,idade_min,vacina_kg);
    
    printf("Total de vacina: %.0lf ml.\n", resultado);
    return 0;
}
