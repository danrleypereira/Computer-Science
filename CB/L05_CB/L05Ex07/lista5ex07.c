#include <stdio.h>

int ComparaNum(int numero_1, int numero_2, char tipo_comparacao)
{
    if(tipo_comparacao == 'A')
    {
        if(numero_1 == numero_2)
            return 1;
        else
            return 0;
    }
    else if(tipo_comparacao == 'B')
    {
        if(numero_1 == numero_2 || numero_1 == -(numero_2))
            return 1;
        else
            return 0;
    }
    else if(tipo_comparacao == 'C')
    {
        if(numero_1 == -(numero_2))
            return 1;
        else
            return 0;
    }
}

int main()
{
    int num1, num2;
    char comparacao;
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf(" %c", &comparacao);
    printf("%d\n", ComparaNum(num1, num2, comparacao));
    return 0;
}
