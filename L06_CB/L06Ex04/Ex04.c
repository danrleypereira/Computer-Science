#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[30];
    int m, n1, n2, n3;
    int i;
    FILE* fp = fopen("entrada.txt", "r");
    for(i = 0; i < 500; i++)
    {
        if(feof(fp))
        {
            break;
        }
        fscanf(fp, "%s %d %d %d %d", str, &m, &n1, &n2, &n3);
        if((n1 + n2 + n3)/3 >= 5)
        {
            printf("%d\n", m);
        }
    }
    fclose(fp);
    return 0;
}
