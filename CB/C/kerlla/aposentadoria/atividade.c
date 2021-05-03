#include <stdio.h>
#include <stdlib.h>

float idade, tempo;

char *Idade()
{
    printf("\nDigite a idade.: ");
    scanf("%f", &idade);
    if(idade > 60)
        return "pode aposentar\n";
    return "não pode aposentar\n";
}

char *IdadeETempo()
{
    printf("\nDigite a idade.: ");
    scanf("%f", &idade);
    printf("\nDigite o tempo de serviço.: ");
    scanf("%f", &tempo);
    if((idade+tempo) > 60)
        return "pode aposentar\n";
    return "não pode aposentar\n";
}

char *Tempo()
{
    printf("\nDigite a idade.: ");
    scanf("%f", &tempo);
    if(tempo > 35)
        return "pode aposentar\n";
    return "não pode aposentar\n";
}

int main()
{
    int op;
    printf("\n===============TRIGONOMETRIA CALC===============\n");
    printf("\n=Escolha uma opcao de aposentadoria em seguida entre com os dados =\n");
    printf("\nMenu:\n");
    printf("\n 1-Idade");
    printf("\n 2-Idade+Tempo de serviço");
    printf("\n 3-Tempo de serviço");
    printf("\n\nOpcao.: ");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("%s", Idade());
        break;
    case 2:
        printf("%s", IdadeETempo());
        break;
    case 3:
        printf("%s", Tempo());
        break;
    default:
        printf("\nErro! Opcao inexistente.\n");
        break;
    }
    return (0);
}