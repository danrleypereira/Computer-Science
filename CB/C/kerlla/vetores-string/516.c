#include <stdio.h> 
#include <string.h>
#include<locale.h> 
int main() 
{ 
 char s[] = "Facil\0"; 
 char t[] = "idade\0"; 
 
 
 printf("Exercício 5.16 - função strcat(s,t) \n"); 
  
 printf("s = %s\n t = %s\n", s, t); 
 
 strcat(s, t); 
 
 printf("Agora mostrando concatenação %s\n", s); 
 
 return 0;
}