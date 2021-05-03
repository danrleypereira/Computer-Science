#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define PI 3.14159265
float angulo, sen, coss, tg, sc, cs, ct;
void Seno()
{
    printf("\nDigite o angulo em graus.: ");
    scanf("%f", &angulo);
    sen = sin(angulo * PI / 180);
    printf("\nO seno de %f = %f\n", angulo, sen);
}
void Cosseno()
{
    printf("\nDigite o angulo em graus.: ");
    scanf("%f", &angulo);
    coss = cos(angulo * PI / 180);
    printf("\nO cosseno de %f = %f\n", angulo, coss);
}
void Tangente()
{
    printf("\nDigite o angulo em graus.: ");
    scanf("%f", &angulo);
    tg = tan(angulo * PI / 180);
    printf("\nO tangente de %f = %f\n", angulo, tg);
}
void Secante()
{
    printf("\nDigite o angulo em graus.: ");
    scanf("%f", &angulo);
    sc = 1 / cos(angulo * PI / 180);
    printf("\nA secante de %f = %f\n", angulo, sc);
}
void Cossecante()
{
    printf("\nDigite o angulo em graus.: ");
    scanf("%f", &angulo);
    cs = 1 / sin(angulo * PI / 180);
    printf("\nA cossecante de %f = %f\n", angulo, cs);
}
void Cotangente()
{
    printf("\nDigite o angulo em graus.: ");
    scanf("%f", &angulo);
    ct = 1 / tan(angulo * PI / 180);
    printf("\nA cotangente de %f = %f\n", angulo, ct);
}
int main()
{
    int op;
    printf("\n===============TRIGONOMETRIA CALC===============\n");
    printf("\n=Escolha uma opcao em seguida entre com o angulo=\n");
    printf("\nMenu:\n");
    printf("\n 1-Seno");
    printf("\n 2-Cosseno");
    printf("\n 3-Tangente");
    printf("\n 4-Secante");
    printf("\n 5-cossecante");
    printf("\n 6-cotangente");
    printf("\n\nOpcao.: ");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        Seno();
        break;
    case 2:
        Cosseno();
        break;
    case 3:
        Tangente();
        break;
    case 4:
        Secante();
        break;
    case 5:
        Cossecante();
        break;
    case 6:
        Cotangente();
        break;
    default:
        printf("\nErro! Opcao inexistente.\n");
        break;
    }
    return (0);
}