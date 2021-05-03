/*
    Danrley
    2355147-0
*/
#include <stdio.h>

int main()
{
    float salbase, gratif, salbruto, IR, salliq;
  
    printf("Qual é o salário base? \n");
    scanf("%f", &salbase);
    printf("Qual é a gratificação? \n");
    scanf("%f", &gratif);

    salbruto = salbase + gratif;

    if(salbruto < 1000)
        IR = salbruto * (15/100.00);
    else 
        IR = salbruto * (20/100.00);

    salliq = salbruto - IR;
    printf("Salário liquído = %.2f \n", salliq);
    
    return 0;
}