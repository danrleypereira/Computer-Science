#include <stdio.h>

int main()
{
    int i, numero_de_letras;
    char *string;
    scanf("%d", &numero_de_letras);
    string = (char*)malloc(sizeof(char)*numero_de_letras);
    scanf("%s", string);
    for(i = 0; i < numero_de_letras; i += 2)
    {
        string[i] = (string[i] - 32);
    }
    printf("%s\n", string);
    return 0;
}
