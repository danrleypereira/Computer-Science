#include <stdio.h>


int main()
{
    int i, quanttidade_de_caracteres, deslocamento, j = 65;
    char* string;
    scanf("%d", &quanttidade_de_caracteres);
    string = (char*)malloc(sizeof(char)*quanttidade_de_caracteres);
    scanf("%s", string);
    scanf(" %d", &deslocamento);
    
    for(i = 0; i < quanttidade_de_caracteres; i++)
    {
        for(j = 65; j <= 90; j++)
        {
            if(string[i] == (char)j)
                string[i] = (string[i] + 32);
        }
        string[i] = (string[i] + deslocamento);
        if((int)string[i] > 122)
            string[i] = (char)(string[i] - 26);
    }
    printf("%s\n", string);
    return 0;
}
