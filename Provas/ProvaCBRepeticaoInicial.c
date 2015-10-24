/*
 ============================================================================
 Name        : ProvaCBRepeticao.c
 Author      : Felipe Pontes Guimarães e André Marques da Silva Rodrigues
 Version     : 1.0
 Copyright   : GPL
 Description : Prova Prática 1 - Estruturas de Repetição
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
// Imprime o menu de ataques
void menu_x();
// Mensagem de erro de opcao invalida
void opcao_invalida();

// mensagem de realizacao de ataque do Megaman
// Recebe um inteiro com o dano causado por Megaman a Vile
// OBS: Apenas imprime a mensagem, sem contabilizar o dano
void ataque_x(int dano);

// mensagem de "Carregando o tiro"
// Recebe como parâmetro o multiplicador da carga
void carregar_x(int mult_carga);

// Mensagem de "Concentrando"
void concentracao_x();

// Mensagem acusando que Megaman já carregou seu tiro ao maximo
void carga_maxima();

// Mensagem indicando que Megaman esquivou de um ataque
void esquiva();

// Mensagem indicando que Vile realizou um ataque simples
void ataque_simples_vile();

// Mensagem indicando que Vile realizou um ataque simples
void ataque_forte_vile();

// Mensagem indicando o relatorio da batalha
// Recebe as vidas de megaman e vile como parametro
void relatorio_batalha(int vida_x, int vida_vile);

// Mensagem indicando que Megaman ganhou
void vitoria_x();
// Mensagem indicando que Megaman perdeu
void vitoria_vile();

int main() {
	return 0;
}

/*////////////////////////////////////////////////////////////////////////////////////////
 FUNCOES Pré-estabelecidas
 ////////////////////////////////////////////////////////////////////////////////////////*/

void opcao_invalida() {
	printf("Opcao invalida\n");
}

void menu_x() {
	printf("1 - Ataque\n2 - Carregar Ataque\n3 - Concentracao\n");
	printf("Acao: ");
}

void ataque_x(int dano) {
	printf("//// Turno de X ////\n");
	printf("X efetuou um Ataque e causou %d de dano a Vile!\n\n", dano);
}

void carga_maxima() {
	printf("X ja carregou seu X-Buster ao maximo! Hora de atacar!\n");
}

void carregar_x(int mult_carga) {
	printf("//// Turno de X ////\n");
	printf("X esta carregando o X-Buster e causara %dX no proximo ataque!\n",
			mult_carga);
	printf("\n");
}

void concentracao_x() {
	printf("//// Turno de X ////\n");
	printf("X se concentrou para se esquivar do proximo ataque de Vile!\n");
	printf("\n");
}

void esquiva() {
	printf("Vile efetuou seu Ataque mas X se esquivou!\n");
}

/*////////////////////////////////////////////////////////////////////////////////////////
 FUNCOES VILE
 ////////////////////////////////////////////////////////////////////////////////////////*/

void ataque_simples_vile() {
	printf("//// Turno de Vile ////\n");
	printf("Vile efetuou o Ataque Simples e causou %d de dano a X!\n", 20);
}
void ataque_forte_vile() {
	printf("//// Turno de Vile ////\n");
	printf("Vile efetuou o Ataque Forte e causou %d de dano a X!\n", 40);
}

//////////////////////////////////////////////////////////////////////////////////////////

void relatorio_batalha(int vida_x, int vida_vile) {
	printf(
			"/// Relatorio de batalha ///\nX: %d pontos de vida\nVile: %d pontos de vida\n\n",
			vida_x, vida_vile);
}

void vitoria_x() {
	printf("X Venceu a batalha! Os Reploids estao a salvo!");
}

void vitoria_vile() {
	printf(
			"Vile venceu a batalha! A horda de Mavericks destruira todos os Reploids =(");
}
