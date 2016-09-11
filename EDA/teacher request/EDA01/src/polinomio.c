#ifndef POLINOMIO_C_
#define POLINOMIO_C_
#include "polinomio.h"
#include <stdio.h>
#include<stdlib.h>

p_nodo* getNodo(){
  p_nodo* nodo;
  nodo = MALLOC(p_nodo);
  if(!nodo)
  {
    perror("Malloc: ");
    exit(0);
  }
  nodo->coeficiente = 0;
  nodo->expoente = 0;
  nodo->proximo = NULL;

  return nodo;
}

l_polinomio * getPolinomio(){
  l_polinomio* polinomio;
  polinomio = MALLOC(l_polinomio);
  if(!polinomio)
	{
		perror("Malloc: ");
    exit(0);
	}
  polinomio->primeiro = NULL;

  return polinomio;
}

void inserir_nodo(l_polinomio* pol, float coef, int expo ){
  if(pol->primeiro != NULL){
    p_nodo* novoNo = getNodo();
    novoNo->coeficiente = coef;
    novoNo->expoente = expo;
    while(1){
      if( novoNo->expoente == pol->primeiro->expoente ){/*se é igual então soma os coeficientes.*/
        printf("debug1\n");
        printf("coef == %f\n", coef);
        printf("primeiro expoente == %d\n", pol->primeiro->expoente);
        printf("expo == %d\n", expo);
        pol->primeiro->coeficiente = pol->primeiro->coeficiente + coef;
        free(novoNo);
        break;
      }else if( novoNo->expoente < pol->primeiro->expoente ){
        printf("debug1\n");
        printf("coef == %f\n", coef);
        printf("primeiro expoente == %d\n", pol->primeiro->expoente);
        printf("expo == %d\n", expo);
        novoNo->proximo = pol->primeiro;
        pol->primeiro->proximo = novoNo;
        pol->primeiro = novoNo;
        break;
      }else if( novoNo->expoente > pol->primeiro->expoente ){
        if(pol->primeiro->proximo == NULL){
          pol->primeiro->proximo = novoNo;
        }else if(novoNo->expoente < pol->primeiro->proximo->expoente){
          printf("debug1\n");
          printf("coef == %f\n", coef);
          printf("primeiro expoente == %d\n", pol->primeiro->expoente);
          printf("expo == %d\n", expo);
          novoNo->proximo = pol->primeiro->proximo;
          pol->primeiro->proximo = novoNo;
          break;
        }
      }
      if(pol->primeiro->proximo != NULL)
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
      if(pol->primeiro->coeficiente < 0)
        printf("%.2f ", pol->primeiro->coeficiente);
      else
        printf("+%.2f ", pol->primeiro->coeficiente);
    }else{
      if(pol->primeiro->coeficiente < 0)
        printf("%.2f*X^%d ", pol->primeiro->coeficiente, pol->primeiro->expoente);
      else
        printf("+%.2f*X^%d ", pol->primeiro->coeficiente, pol->primeiro->expoente);
    }
    if(pol->primeiro->proximo != NULL)
      pol->primeiro = pol->primeiro->proximo;
    else
      break;
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
