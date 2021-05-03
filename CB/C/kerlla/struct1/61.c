/*	Name: 
	Copyright:  CC0 license
	Author: Danrley Pereira
	Date: 03/05/21 11:06
	Description: Struct anônimo;

    Enunciado.: Codifique um programa para criar uma variável de tipo anô-
    nimo, capaz de armazenar o título, o autor, a editora e o ano de publicação
    de um livro; atribuir valores aos seus campos e exibi-la no vídeo.
*/
	
	#include <stdio.h>
	#include <string.h>
    // struct anonima livro
	typedef struct {
		char titulo[40];
		char autor[40];
		char editora[40];
		int anoPublicacao;
	} Livro;

	int main(){
        //declara livro
        Livro livro;
        //defini valores
        strcpy(livro.titulo, "titulo qualquer");
        strcpy(livro.autor, "Joseleide da Silva");
        strcpy(livro.editora, "Editora ATila");
        livro.anoPublicacao = 1997;
        //printa valores
        printf("titulo: %s, \nautor: %s, \neditora: %s, \nano de publicação: %d\n", livro.titulo, livro.autor, livro.editora, livro.anoPublicacao);

		return 0;
	}