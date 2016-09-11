#include<stdio.h>
#include<stdlib.h>
#include"polinomio.h"


int main(int argc, char **argv){
	p_nodo* no;
	l_polinomio* polinomio;

	no = getNodo();
	polinomio = getPolinomio();

	while(1){
		int escolha;
		float aux;

		printf("1 - inserir nó, 2 - imprimir polinomio, 3 - calcular polinomio, 0 - exit\n");
		scanf("%d", &escolha);
		switch (escolha){
			case 1:
				printf("Qual é o coeficiente(float)?\n");
				scanf("%f", &no->coeficiente );
				printf("Qual é o expoente(int)?\n");
				scanf("%d", &no->expoente );
				inserir_nodo(polinomio, no->coeficiente, no->expoente);
				imprime_polinomio(polinomio, 'x');
				break;
			case 2:
				imprime_polinomio(polinomio, 'x');
				break;
		case 3:
			printf("Qual é o valor da variável(float)?\n");
			scanf("%f", &aux );
			imprime_polinomio(polinomio, 'x');
			polinomio->atual = polinomio->primeiro;
			printf("O valor de p(%.2f) = %.2f\n", aux, calcula_polinomio(polinomio, aux) );
			break;
		case 0:
			while(polinomio->primeiro != NULL){
				if(polinomio->primeiro->proximo != NULL){
					polinomio->primeiro = polinomio->primeiro->proximo;
					free(polinomio->primeiro->anterior);
					polinomio->primeiro->anterior = NULL;
				}else
					free(polinomio->primeiro);
					break;
			}
			free(polinomio);
			free(no);
			exit(0);
		}
	}

	return 0;
}
