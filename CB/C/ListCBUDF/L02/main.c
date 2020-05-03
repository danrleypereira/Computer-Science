#include<stdio.h>
void task01();
void task02();
void task03();
void task05();

int main(){
	int task;
	do{
		printf("Digite o número do exercício:\n1 a 5\nDigite qualquer outra coisa para sair do programa\n");
		scanf("%d", &task);

		printf("%d", task);

		switch(task)
		{
			case 1:
				printf("Exercício nº 0%d é para calcular o bônus de clientes de um supermercado\n", task);
				task01();
				break;
			case 2:
				printf("O exercicío nº 0%d imprime na tela os números ímpares entre 100 e 200\n", task);
				task02();
				break;
			case 3:
				printf("O exercício nº 0%d converte uma temperatura em Fahrenheit para Celsius\n", task);
				task03();
				break;
			case 4:
				printf("Exercício nº 0%d ainda não implementado\n", task);
				break;
			case 5:
				printf("Exercício nº 0%d informa se um número é divisível por 10, por 5 ou por 2\n", task);
				task05();
				break;
			default:
				printf("Tchau Tchau, Boa viagem, que a porta bata onde o sol não bate, até mais, hasta la vista baby, sai logo daqui, arrevedeste, não volte mais aqui!!!\n");
		}


	}while(task > 0 && task < 6);
	return 0;
}

void task01()
{
	struct 
	{
		char name[12];
		float lastYearSpentAtSupermarket;
	} clientData ;
	int numberOfClients;
	printf("Quantos clientes ?\n");
	scanf("%d", &numberOfClients);
	for(int i = 1; i <= numberOfClients; i++)
	{
		printf("Qual é primeiro nome do cliente nº%d?\n", i);
		//if( fgets(clientData.name, 12, stdin) )
		//	printf("Nome inválido, (máximo de 11 letras)\n");
		scanf("%s", clientData.name);
		printf("Qual é o valor gasto por %s no último ano?\n", clientData.name);
		scanf("%f", &clientData.lastYearSpentAtSupermarket);
		if(clientData.lastYearSpentAtSupermarket < 1000 )
		{
			float bonus = clientData.lastYearSpentAtSupermarket*0.10;
			printf("o valor do bônus é %.2f\n", bonus );
		}
		else
		{
			float bonus = clientData.lastYearSpentAtSupermarket*0.15;
			printf("o valor do bônus é %.2f\n", bonus );
		}
	}

}
void task02()
{
	
	for(int i = 101; i < 200; i++){
		printf("%d\n", i++);
	}
}
void task05()
{
	int number;
	int isDivisible = 0;//test variable to be like a boolean type
	printf("Digite um número: ");
	scanf("%d", &number);
	if( number%10 == 0 ){
		printf("Esse número é divisível por 10\n");
		isDivisible = 1; 
	}
	if( number%5 == 0 ) {
		printf("Esse número é divisível por 5\n");
		isDivisible = 1; 
	}
	if( number%2 == 0 ) {
		printf("Esse número é divisível por 2\n");
		isDivisible = 1; 
	}
	if( isDivisible == 0 )
		printf("Número não é divisível por nenhum deles!\n");
}
void task03()
{
	float tempF, tempC;
	printf("Digite a temperatura em Fahrenheit:\n");
	scanf("%f", &tempF);
	tempC = (5.0000 * (tempF - 32.0000) / 9.0000 );//fórmula para converter Fº to Cº
	printf("Fº: %.4f; Cº: %.4f\n", tempF, tempC);
}
