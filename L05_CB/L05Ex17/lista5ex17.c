#include <stdio.h>

int main()
{
    int quantidade_de_alunos, *matricula, *idade, i, maior_idade, posicao_maior_idade = 0, posicao_menor_peso = 0;
    double *peso, menor_peso;
    scanf("%d", &quantidade_de_alunos);
    matricula = (int*)malloc(sizeof(int)*quantidade_de_alunos);
    idade = (int*)malloc(sizeof(int)*quantidade_de_alunos);
    peso = (int*)malloc(sizeof(double)*quantidade_de_alunos);
    for(i = 0; i < quantidade_de_alunos; i++)
    {
        scanf("%d", &matricula[i]);
        scanf("%d", &idade[i]);
        scanf("%lf", &peso[i]);
    }
    maior_idade = idade[0];
    menor_peso = peso[0];
    for(i = 1; i < quantidade_de_alunos; i++)
    {
        if(idade[i] > maior_idade)
        {
            maior_idade = idade[i];
            posicao_maior_idade = i;
        }
        if(peso[i] < menor_peso)
        {
            menor_peso = peso[i];
            posicao_menor_peso = i;
        }
    }
    printf("%d\n", matricula[posicao_maior_idade]);
    printf("%d\n", matricula[posicao_menor_peso]);

    return 0;
}
