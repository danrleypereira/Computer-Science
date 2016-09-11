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
    pol->atual = pol->primeiro;

    while(pol->atual){
      if( novoNo->expoente == pol->atual->expoente ){/*se é igual então soma os coeficientes.*/
        pol->atual->coeficiente = pol->atual->coeficiente + coef;
        free(novoNo);
        break;
      }else if(novoNo->expoente < pol->primeiro->expoente){/*se é menor que o primeiro, novoNo = primeiro*/
        novoNo->proximo = pol->primeiro;
        pol->primeiro->anterior = novoNo;
        pol->primeiro = novoNo;
        break;
      }else if(novoNo->expoente < pol->atual->expoente){/*adiciona antes do atual*/
        novoNo->proximo = pol->atual;
        if(pol->atual->anterior != NULL){
          pol->atual->anterior->proximo = novoNo;
          novoNo->anterior = pol->atual->anterior;
        }
        pol->atual = novoNo;
        break;
      }else if(novoNo->expoente > pol->atual->expoente){
        if(pol->atual->proximo == NULL){/*adiciona por ultimo*/
          novoNo->anterior = pol->atual;
          pol->atual->proximo = novoNo;
          pol->atual = novoNo;
          break;
        }else if(novoNo->expoente < pol->atual->proximo->coeficiente){/*adiciona entre*/
          novoNo->proximo = pol->atual->proximo;
          novoNo->anterior = pol->atual;
          pol->atual->proximo->anterior = novoNo;
          pol->atual->proximo = novoNo;
          break;
        }
      }

      if(pol->atual->proximo != NULL){
        pol->atual = pol->atual->proximo;
      }
    }
  }else{
    pol->primeiro = getNodo();
    pol->primeiro->coeficiente = coef;
    pol->primeiro->expoente = expo;
    pol->atual = pol->primeiro;
  }
}

void inserir_nodo_comeco(l_polinomio* pol, p_nodo* novoNo ){
  novoNo->proximo = pol->primeiro;
  pol->primeiro = novoNo;
  pol->atual = pol->primeiro;
}

void imprime_polinomio(l_polinomio* pol, char n){
  pol->atual = pol->primeiro;
  printf("p(%c) = ", n);
  while(pol->atual != NULL){
    imprime_termo(pol->atual->coeficiente, pol->atual->expoente, n);

    if(pol->atual->proximo != NULL)
      pol->atual = pol->atual->proximo;
    else
      break;
  }
  printf("\n");
}

void imprime_termo(float coeficiente, int expoente, char n){
  if(expoente == 0){
    if(coeficiente < 0)
      printf("%.2f ", coeficiente);
    else
      printf("+%.2f ", coeficiente);
  }else{
    if(coeficiente < 0)
      printf("%.2f*%c^%d ", coeficiente, n, expoente);
    else
      printf("+%.2f*%c^%d ", coeficiente, n, expoente);
  }
}

float calcula_polinomio(l_polinomio* pol, float x){
  float valorTermo;
  if(pol->atual == NULL){
    return 1;
  }
  valorTermo = ( pol->atual->coeficiente *  pow(x, pol->atual->expoente) );
  if(pol->atual->proximo != NULL)
    pol->atual = pol->atual->proximo;
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
