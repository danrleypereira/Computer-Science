#include <stdio.h>

int EhBisexto(int ano);

int main()
{
int ano_1, ano_2, cont, qtd_bisextos=0;

scanf("%d %d", &ano_1, &ano_2);

if (ano_1 < ano_2)
{
    for (cont = ano_1; cont <= ano_2; cont ++)
    {
        if (EhBisexto(cont) == 1)
        {
            printf("%d\n", cont);
            qtd_bisextos += 1;
        }

    }
}
else
{
    for (cont = ano_2; cont <= ano_1; cont ++)
    {
        if (EhBisexto(cont) == 1)
        {
            printf("%d\n", cont);
            qtd_bisextos += 1;
        }

    }
    }
printf("%d\n", qtd_bisextos);

    return 0;
}

int EhBisexto(int ano)
{
    if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0)
    return 1;

    else
    return 0;
}
