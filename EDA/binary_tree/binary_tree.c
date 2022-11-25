#include <stdio.h>
#include <stdlib.h>

typedef struct no {
	int cont;
	struct no *esq, *dir;
	struct no *pai;
} abb;

abb *insere (abb *arv, int cont);
//se x for a raiz devolver NULL, se x não pertence a árvore devolver NULL
abb *pegar_pai_de_x(int* raiz_abb, int* x){
	return NULL;	
}

abb *Abb (int cont, abb *esq, abb *dir, abb *pai);

abb *popular_arvore(){
	abb *arvore = NULL;
   	arvore = insere(arvore, 4);
	arvore = insere(arvore, 2);
	arvore = insere(arvore, 6);
	arvore = insere(arvore, 1);
	arvore = insere(arvore, 3);
	arvore = insere(arvore, 5);
	arvore = insere(arvore, 7);
	return arvore;

}

void printa(abb * arv);

int main() {
	abb *arvore = popular_arvore();
	printa(arvore);
	return 0;
}


abb *insere (abb *arv, int cont){
	if (arv == NULL) return Abb(cont, NULL, NULL, NULL);
	if (arv->cont > cont) {
		arv->esq = insere(arv->esq, cont);
		arv->esq->pai = arv;
	} else {
		arv->dir = insere(arv->dir, cont);
		arv->dir->pai = arv;
	}
	return arv;
}


void printa(abb * arv){
	if (arv != NULL) {
		printa(arv->esq);
		printf("%d, ", arv->cont);
		printa(arv->dir);
	}
}

abb *Abb (int cont, abb *esq, abb *dir, abb *pai){
    abb *nova = malloc(sizeof(abb));
    nova->cont = cont;
    nova->esq = esq;
    nova->dir = dir;
    nova->pai = pai;
    return nova;
}