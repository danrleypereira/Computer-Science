#ifndef POLINOMIO_H_
#define POLINOMIO_H_

#define MALLOC(x) (x *) malloc ( sizeof(x) )/*bad*/

typedef struct nodo{
  float coeficiente;
  int expoente;
  struct nodo* proximo;
  struct nodo* anterior;
} p_nodo;
typedef struct polinomio{
  p_nodo* primeiro;
  p_nodo* atual;
} l_polinomio;
/*
Funcão retorna um nodo do polinomio inicializado
com zero e ponteiro NULL.
*/
p_nodo* getNodo();
/*
Função retorna a estrutura do polinômio com
ponteiro NULL.
*/
l_polinomio * getPolinomio();
/*
Função adiciona um termo a um polinômio.
*/
void inserir_nodo(l_polinomio* pol, float coef, int expo );
/*
Função adiciona um termo no começo de um polinômio.
*/
void inserir_nodo_comeco(l_polinomio* pol, p_nodo* no );
/*
Função imprime um polinômio segundo especificacão.
*/
void imprime_polinomio(l_polinomio* pol, char n);
/*
Função imprime um polinômio segundo especificacão.
*/
void imprime_termo(float coeficiente, int expoente, char n);
/*
Função realiza o cálculo do polinômio dado um valor de X.
*/
float calcula_polinomio(l_polinomio* pol, float x);

float pow(float base, int expoente);

#endif
