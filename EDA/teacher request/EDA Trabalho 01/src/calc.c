#include "calc.h"
#include "pilha.h"
int isCorrect(char* str, int lenght){
  if(str != '\0'){
    t_pilha* pilha = getPilha(lenght);
    printf("Expressão é valida\n");
    return TRUE;
  }else{
    printf("Expressão não é valida\n");
    return FALSE;
  }
}
