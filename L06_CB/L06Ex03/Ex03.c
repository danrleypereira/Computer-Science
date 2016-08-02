#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char str1[50], str2[50], str3[50];
    int i;
    FILE* fp1 = fopen("entrada.txt", "w");
    scanf("%s %s %s", str1, str2, str3); fflush(stdin);
    fprintf(fp1, "%s\n%s\n%s", str1, str2, str3);
    fclose(fp1);
    FILE* fp2 = fopen("saida.txt", "w");
    for(i = 0; i < 50; i++)
    {
        if(str1[i] == '\0')
            break;
        fprintf(fp2, "%c", toupper(str1[i]));
    }
    fprintf(fp2, "\n");

    for(i = 0; i < 50; i++)
    {
        if(str2[i] == '\0')
            break;
        fprintf(fp2, "%c", toupper(str2[i]));
    }
    fprintf(fp2, "\n");

    for(i = 0; i < 50; i++)
    {
        if(str3[i] == '\0')
            break;
        fprintf(fp2, "%c", toupper(str3[i]));
    }
    fclose(fp2);
    return 0;
}
