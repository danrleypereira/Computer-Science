/*
    Danrley
    2355147-0
*/
#include <stdio.h>

float pesoIdealHomem(int h) {
    return (72.7*h/100)-58; 
    // divido por 100 porque pego a altura em centímetros
}
float pesoIdealMulher(int h) {
    return (62.1*h/100)-44.7; 
    // divido por 100 porque pego a altura em centímetros
}
  
int main()
{
    int h; //height
    int g; //gender
  
    printf("Qual é sua altura em centímetros? \n");
    scanf("%d", &h);
    printf("Sou: 1 para homem ou 2 para mulher? \n");
    printf("Qualquer outra tecla sai do programa \n");
    scanf("%d", &g);

    if(g == 1)
        printf("seu peso ideal é %.2f\n", pesoIdealHomem(h));
    else if(g == 2)
        printf("seu peso ideal é %.2f\n", pesoIdealMulher(h));
    else
        goto error;
  
    return 0;

    error:
        printf("genêro inválido!\n");
        return 1;
}