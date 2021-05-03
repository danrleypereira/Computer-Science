/*	Name: 
	Copyright:  CC0 license
	Author: Danrley Pereira
	Date: 03/05/21 11:06
	Description: Struct anônimo;

    Enunciado.: Usando o tipo PESSOA , definido no exemplo 6.6 , crie uma fun-
	ção para preencher uma agenda com os dados de 5 pessoas. Crie também
	uma função para procurar na agenda o telefone de uma determinada
	pessoa e codifique um programa para testar essas funções.
*/
	
	#include <stdio.h>
	#include <string.h>

	// criando função que converte int para string
	char* itoa(int val, int base){
		static char buf[32] = {0};
		int i = 30;
		for(; val && i ; --i, val /= base)
			buf[i] = "0123456789abcdef"[val % base];
		return &buf[i+1];
	}
	//estrutura DATA
	typedef struct {
		int dia;
		int mes;
		int ano;
	} DATA;
	//estrutura PESSOA
	typedef struct {
		char nome[31];
		char fone[21];
		DATA nasc;
	} PESSOA;

	// variável global agenda
	PESSOA agenda[5];

	// rotina (void) para procurar telefone
	void procurarTelefone(char* telefone) {
		//percorre a agenda
		for(int i = 0; i<5; i++){
			//compara as strings
			if (strcmp(agenda[i].fone, telefone) == 0)
			{
				//se for igual é pq encontrou o telefone passado como parâmetro
				printf("encontrado = ");
				//criar uma variável provisória para ler o telefone
				char *string = telefone;
				//percorre a variável imprimindo cada caractere até o fim da string
				while(*string != '\0'){
					printf("%c", *string++);
				}
				printf("\n");
				//finaliza a rotina
				return;
			}
		}
		printf("not found => ");
		char *string = telefone;
		while(*string != '\0'){
			printf("%c", *string++);
		}
		printf("\n");
	}

	// preenche os dados da agenda
	void preencherDados() {
		//cria ponteiro onde vai ser salvo o número que será convertido em string
		char* number;
		//prefixo do nome e do telefone
		char nome[10] = "nome-";
		char fone[10] = "fone-";
		// percorre a agenda
		for(int i = 0; i<5; i++){
			//passa i e a base do número para retornar a string equivalente
			number = itoa(i, 10);
			//concatena o número. eg.: nome-1; nome-12, nome-123 etc
			strcat(nome, number);
			//mesma coisa do nome só que usando o prefixo fone
			strcat(fone, number);
			//copia a concatenação na agenda
			strcpy(agenda[i].nome, nome);
			strcpy(agenda[i].fone, fone);
			//declara data
			DATA data = {13,04,1941};
			//atribui data na agenda para a pessoa atual
			agenda[i].nasc = data;
		}
	}

	int main(){
		printf("preenchendo dados\n");
		preencherDados();
		procurarTelefone("fone-1234567");
		procurarTelefone("fone-123");
		printf("agenda[2].fone = %s \n", agenda[2].fone);
		return 0;
	}

	