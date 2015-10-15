#include <stdio.h>
#include <stdlib.h>

/* Declaração das funções. Não precisa mexer. */
void musica_empolgante();
void escolha_item();
void item_invalido();
void tartaruga();
void banana();
void cogumelo();

void resultado_volta_Mario(int tempo_volta, int tempo_total);
void resultado_volta_Toad(int tempo_volta, int tempo_total);
void resulado_volta_Bowser(int tempo_volta, int tempo_total);
void resultado_volta_Yoshi(int tempo_volta, int tempo_total);

void venceu();
void perdeu();


int main()
{
    /* PONHA SEU CÓDIGO AQUI */
    /* PONHA SEU CÓDIGO AQUI */
    /* PONHA SEU CÓDIGO AQUI */
    /* PONHA SEU CÓDIGO AQUI */
    /* PONHA SEU CÓDIGO AQUI */
    /* PONHA SEU CÓDIGO AQUI */
    /* PONHA SEU CÓDIGO AQUI */
    
    return 0;
}



/* Implementação das funções. Não precisa mexer. */

void musica_empolgante(){
    printf("Musica empolgante!! Ultima rodada\n");
}

void escolha_item(){
    printf("\nEscolha o item: (1) Tartaruga, (2) Banana ou (3) Cogumelo\n");
}

void item_invalido(){
    printf("Item invalido. Escolha uma opcao valida\n");
}


void tartaruga(){
    printf("Mario usou Tartaruga!! Toad rodou na Tartaruga!\n");
}

void banana(){
    printf("Mario usou Banana!! Bowser rodou na Banana!\n");
}

void cogumelo(){
    printf("Mario usou Cogumelo!! Deixou todo mundo comendo poeira!\n");
}

void resultado_volta_Mario(int tempo_volta, int tempo_total){
    printf("Mario:\n   Volta: %d:%2d segundos\n   Total: %d segundos\n",tempo_volta/60, tempo_volta%60, tempo_total);
}

void resultado_volta_Toad(int tempo_volta, int tempo_total){
    printf("Toad:\n   Volta: %d:%2d segundos\n   Total: %d segundos\n",tempo_volta/60, tempo_volta%60, tempo_total);
}

void resulado_volta_Bowser(int tempo_volta, int tempo_total){
    printf("Bowser:\n   Volta: %d:%2d segundos\n   Total: %d segundos\n",tempo_volta/60, tempo_volta%60, tempo_total);
}

void resultado_volta_Yoshi(int tempo_volta, int tempo_total){
    printf("Yoshi:\n   Volta: %d:%2d segundos\n   Total: %d segundos\n",tempo_volta/60, tempo_volta%60, tempo_total);
}

void venceu(){
    printf("Parabens!! Mario venceu!! Conquistou a Star Cup!!\nVoce desbloqueou o Dry Bowser!!");
}

void perdeu(){
    printf("Nao foi desta vez!! Voce perdeu!!");
}
