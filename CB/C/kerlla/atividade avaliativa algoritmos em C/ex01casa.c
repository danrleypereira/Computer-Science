/*
    Danrley
    2355147-0
*/

#include <stdio.h>
#define TRUE 1
#define FALSE 0

// put signature into stack
void qualAlternativa(int alternativa);
void questao01a();
void questao01b();
void questao01c();
void questao02();
void questao03();
int primeNumber(int number);


int main()
{
    int numero;
    int alternativa;

    do{
        printf("\nEscolha uma questão: \n 1 - 2 - 3 \nDigite 0 para sair.\n");
        scanf("%d", &numero);
        
        switch (numero)
        {
            case 1:
                printf("escolha uma alternativa: \n 1 - 2 - 3\n");
                scanf("%d", &alternativa);
                qualAlternativa(alternativa);
            break;
        
            case 2:
                questao02();
            break;
        
            case 3:
                questao03();
            break;

            case 0:
                printf("Saindo...");
            break;
        
            default:
                printf("entrada inválida");
        }
    }while( numero != 0 );
    
    

    return 0;
}

void qualAlternativa(int alternativa) {
    switch (alternativa)
    {
        case 1:
            questao01a();
        break;
    
        case 2:
            questao01b();
        break;
       
        case 3:
            questao01c();
        break;
    
        default:
            printf("entrada inválida");
    }
}


void questao01a() {
    int i = 1;
    do
    {
        printf("%d ", i++);
    } while (i<=100);
    
    // for(int i = 1; i <=100; i++){
    //     printf("%d ", i);
    // }
}

void questao01b(){
    for(int i = 100; i <1000; i++){
        if(primeNumber(i))
            printf("%d ", i);
    }
}


int primeNumber(int number){
    int loop;
    int prime = 1;

    for(loop = 2; loop < number; loop++) {
        if((number % loop) == 0) {
            prime = 0;
        }
    }

    if (prime == 1)
        return TRUE;
    else
        return FALSE;
}

void questao01c(){
    int numero;
    printf("1 -\n2 +\n3 *\n4 / \n");
    scanf("%d", &numero);
    printf("Qual é o número?");

    switch (numero)
    {
    case 1:
        scanf("%d", &numero);
        for(int i = 1; i <10; i++){
        printf("%d - %d = %d \n", numero, i, numero-i);
    }
    break;
    case 2:
        scanf("%d", &numero);
        for(int i = 1; i <10; i++){
        printf("%d + %d = %d \n", numero, i, numero+i);
    }
    break;
    case 3:
        scanf("%d", &numero);
        for(int i = 1; i <10; i++){
        printf("%d * %d = %d \n", numero, i, numero*i);
    }
    break;
    case 4:
        scanf("%d", &numero);
        for(int i = 1; i <10; i++){
        printf("%d %% %d = %d \n", numero, i, numero/i);
    }
    break;
    
    default:
        printf("inválido!");
        break;
    }

    
}


void questao02(){
    int numero, i;
    i = 0;
    printf("Quantos anos ?");
    scanf("%d", &numero);

    while(i <= (numero*12)){
        printf("A prestação nº %d foi paga com sucesso.\n", i);
        i++;
    }
}

void questao03(){
    int numero, i;
    int senha;
    i = 0;
    do{
        if(i != 0)
            printf("senha inválida!\n");
        printf("Digite a senha:  ");
        scanf("%d", &senha);
        i++;
    }while( (senha != 1234) && i < 3 );

    if(senha != 1234){
        printf("Tente novamente mais tarde");
    } else {
        printf("Acertou a senha\n");
    }
    printf("%d ", senha);

}






