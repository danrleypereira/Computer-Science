/*
    Danrley
    2355147-0
*/
#include <stdio.h>

int main()
{
    int numero;
  
    printf("Qual é o número? \n");
    scanf("%d", &numero);

    if((numero % 2) == 0 )
        printf("%d é par \n", numero);
    else 
        printf("%d é impar \n", numero);

    return 0;
}