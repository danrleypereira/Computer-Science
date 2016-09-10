#ifndef POLINOMIO_H_
#define POLINOMIO_H_

typedef struct nodo{
float coeficiente;
int expoente;
struct nodo* proximo;
} p_nodo;
typedef struct polinomio{
p_nodo* primeiro;
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
Função imprime um polinômio segundo especificacão.
*/
void imprime_polinomio(l_polinomio* pol, char n);
/*
Função realiza o cálculo do polinômio dado um valor de X.
*/
float calcula_polinomio(l_polinomio* pol, float x);

float pow(float base, int expoente);

#endif
