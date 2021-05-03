#include<stdio.h> 
#include<string.h> 
#include<locale.h>

int main () {
    char t[8] = ("string");
    char s[6];

    printf("Exercício 5.13\n");
    printf("t = %s. \n", t);
    printf("s = %s. \n", s);
    strcpy(s, t); 
    printf("s = %s. \n", s);
    return 0;
}