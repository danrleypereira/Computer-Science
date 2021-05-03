/*
    Danrley
    2355147-0
*/

#include <stdio.h>

int main (){
    int vet[10] = {1,2,3,4,5,6,7,8,9,10};

    printf("vet[2] = %d\nResposta => terceiro elemento\n", vet[2]);


    int vet1[30];
    for (int j=0; j <= 30; j++) {
        vet1[j] = j*j;
        printf("vet[%d] = vet[%d]\n", j, vet1[j]);
    }
    printf("Resposta => Não, pois deveria ser j<30, porque vet[30] fica out of bounds (passa do limite do vetor)\n ");
    

    return 0;
}