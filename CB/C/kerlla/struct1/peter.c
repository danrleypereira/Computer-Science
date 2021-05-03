	#include <stdio.h>

	#include <string.h>

	typedef struct

	{

	char nome[50];

	int matricula;

	char sexo;

	float peso;

	}TipoAluno;

int main()
{

	TipoAluno aluno;

	strcpy (aluno.nome, "Peter Lee Bragança");

	aluno.matricula = 130010212;

	printf ("Informe o sexo do aluno: ");

	scanf ("%c", &aluno.sexo);

	getchar();

	aluno.peso = 78.200;	

	printf ("O nome do aluno é: %c \n O peso do aluno: %.2f \nO sexo do aluno é: %c \nA matricula do aluno é: %d", aluno.nome, aluno.peso, aluno.sexo, aluno.matricula);	

	return 0;

}