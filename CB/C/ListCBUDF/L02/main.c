#include<stdio.h>
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
				printf("Você digitou o número %d\n", task);
				break;
			case 2:
				printf("Você o exercicío 0%d\n", task);
				task02();
				break;
			case 3:
				printf("Você digitou o número %d\n", task);
				task03();
				break;
			case 4:
				printf("Você digitou o número %d\n", task);
				break;
			case 5:
				printf("Você digitou o número %d\n", task);
				task05();
				break;
			default:
				printf("Tchau Tchau, Boa viagem, que a porta bata onde o sol não bate, até mais, hasta la vista baby, sai logo daqui, arrevedeste, não volte mais aqui!!!\n");
		}


	}while(task > 0 && task < 6);
	return 0;
}

void task02(){
	for(int i = 101; i < 200; i++){
		printf("%d\n", i++);
	}
}
void task05(){
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
void task03(){
	float tempF, tempC;
	printf("Digite a temperatura em Fahrenheit:\n");
	scanf("%f", &tempF);
	tempC = (5.0000 * (tempF - 32.0000) / 9.0000 );//fórmula para converter Fº to Cº
	printf("Fº: %.4f; Cº: %.4f\n", tempF, tempC);
}
