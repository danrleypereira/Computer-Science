    /*	Name: 
	Copyright:  CC0 license
	Author: Danrley Pereira
	Date: 03/05/21 11:06
	Description: Vetor unidimensional representado []
	vetores de strings: char nome[40];
	strcpy = aluno[1].nome, "Valeria";*/
	
	#include <stdio.h>
	#include <string.h>

	typedef struct{
		char nome[40];
		int idade;
		float peso;
		char endereco[50];
		char sexo;
		double CPF;
	}TipoAluno;

	int main(){
        TipoAluno aluno[50];
        int i;
		for(i=1;i<=50;i++){
			aluno[i].CPF=83330062134;
			strcpy(aluno[i].nome,"kerlla");
			aluno[i].idade=20;
			aluno[i].peso=70.00;
			aluno[i].sexo='f';
			strcpy(aluno[i].endereco,"Avenida 30");
			printf(
                "Os dados do aluno cadastrado:\n %d) nome:%s\n idade:%d\n sexo:%c\n peso:%.2f\n CPF:%.f\n", 
                i,
                aluno[i].nome, 
                aluno[i].idade,
                aluno[i].sexo,
                aluno[i].peso,
                aluno[i].CPF
            );
        }

		return 0;
	}