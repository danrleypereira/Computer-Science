#include<stdio.h> //Biblioteca STard Input Output (para usarmos  printf e scanf)
#include <locale.h>
#include <string.h>


int main() {
    setlocale(LC_ALL, "Portuguese");
    int qtdA, qtdB;
    int contador = 0;
    int opcao, aux;
    int c[30];
    int a[qtdA],b[qtdB];
    printf("Informe a quantidade de numeros que irão no A:");
    scanf("%i", &qtdA);
    for (int i=0; i<qtdA; i=i+1){
        printf ("Informe o %inumero:" ,i);
        scanf("%i", &a[i]);
}
printf("Informe a quantidade de numeros que irão no B:");
    scanf("%i", &qtdB);
    for (int i=0; i<qtdB; i=i+1){
        printf ("Informe o %i. numero:" ,i);
        scanf("%i", &b[i]);
}
    printf("Informe as seguintes opção:\n 1- União\n  2 -  Interseccção\n   3- Diferença\n" );
    scanf("%i", &opcao);
    if(opcao == 1) {


        printf("Você escolheu União\n");
        

    }else if(opcao == 2){
    	
        printf("Você escolheu Interseccção");
        
        for (int i= 0; i<qtdA; i++){
        	
            for(int j= 0; j<qtdB; j++)
            
            if(a[i] == b[j]){
                c[contador] = a[i];
                contador++;
                }
        }
            printf("\ncontador: %i ", contador);

            for(int i = 0; i<contador; i++){
                for(int j = i + 1; j<contador; j++){
                    if(c[i] > c[j]){
                        aux = c[i];
                        c[i] = c[j];
                        c[j] = aux;
                    }
                }
            }
                printf("\nNumeros:");
            for(int i= 0; i<contador; i++){
                printf("\n%i", c[i]);
            }
    }else if(opcao == 3){
        printf("Você escolheu Diferença");
    }else{
        printf("Escolha algo certo");
    }
}