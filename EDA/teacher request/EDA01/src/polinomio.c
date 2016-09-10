#ifndef POLINOMIO_C_
#define POLINOMIO_C_
#include "polinomio.h"
#include <stdio.h>
#include<stdlib.h>

p_nodo* getNodo(){
  p_nodo* nodo;
  nodo = malloc(sizeof(p_nodo));
  nodo->coeficiente = 0;
  nodo->expoente = 0;
  nodo->proximo = NULL;

  return nodo;
}

l_polinomio * getPolinomio(){
  l_polinomio* polinomio;
  polinomio = malloc(sizeof(l_polinomio));
  polinomio->primeiro = NULL;

  return polinomio;
}

void inserir_nodo(l_polinomio* pol, float coef, int expo ){
  if(pol->primeiro != NULL){
    while(1){
      if( pol->primeiro->expoente <= expo ){
        if( pol->primeiro->expoente == expo ){/*se não é igual, então é menor.*/
          pol->primeiro->coeficiente = pol->primeiro->coeficiente + coef;
          break;
        }else if( pol->primeiro->proximo != NULL ){/*se não existi próximo, então este termo é o próximo*/
          if(expo < pol->primeiro->proximo->expoente){
            p_nodo* nodo;
            nodo->coeficiente = coef;
            nodo->expoente = expo;
            nodo->proximo = pol->primeiro->proximo;
            pol->primeiro->proximo = nodo;
            break;
          }
        }else{
          pol->primeiro->proximo = getNodo();
          pol->primeiro->proximo->coeficiente = coef;
          pol->primeiro->proximo->expoente = expo;
          break;
        }
      }else{
        p_nodo* auxNode = getNodo();
        auxNode->coeficiente = coef;
        auxNode->expoente = expo;
        auxNode->proximo = pol->primeiro;
        pol->primeiro = auxNode;
        break;
      }
      pol->primeiro = pol->primeiro->proximo;
    }
  }else{
    pol->primeiro = getNodo();
    pol->primeiro->coeficiente = coef;
    pol->primeiro->expoente = expo;
  }
}

void imprime_polinomio(l_polinomio* pol, char n){
  printf("p(x) = ");
  while(pol->primeiro != NULL){
    if(pol->primeiro->expoente == 0){
      printf("%.2f ", pol->primeiro->coeficiente);
    }else{
      printf("%.2f*X^%d ", pol->primeiro->coeficiente, pol->primeiro->expoente);
    }
    pol->primeiro = pol->primeiro->proximo;
  }
  printf("\n");
}

float calcula_polinomio(l_polinomio* pol, float x){
  float valorTermo;
  if(pol->primeiro == NULL){
    return 1;
  }
  valorTermo = ( pol->primeiro->coeficiente *  pow(x, pol->primeiro->expoente) );
  if(pol->primeiro->proximo != NULL)
    pol->primeiro = pol->primeiro->proximo;
  else
    return valorTermo;

  return (valorTermo + calcula_polinomio(pol, x) );
}

float pow(float base, int expoente){
  if(expoente == 0){
    return 1;
  }
  return ( base*pow(base, (expoente-1)) );
}

#endif
