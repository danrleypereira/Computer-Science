#include <stdio.h>
#include <stdlib.h>

/*
                                        LISTA DE EXERCÍCIO 05.
NESTE EXERCÍCIO VOCÊ DEVE:
    1 - CODIFICAR A SUBROTINA(S) SOLICITADA(S) NO LOCAL APONTADO
    2 - REALIZAR A(S) CHAMADA(S) DESTA(S) SUBROTINA(S) DE FORMA CORRETA (COLOCAR OS PARÂMETROS DE ENTRADA, QUANDO FOR O CASO)
        NO(S) LOCAL(AIS) CORRETO(S) (DENTRO DA MAIN)
*/

// ############### Codifique sua(s) solução(ções) aqui. ###################################

int* AlocaArrayInt(int dimensao)
{
    return (int*)malloc(sizeof(int)*dimensao);
}

void DesalocaArrayInt(int* array)
{
    free(array);
}

// ##############################################################################

// INSIRA A(S) CHAMADA(S) À(S) SUBROTINA(S) DENTRO DA MAIN. NÃO ALTERE NENHUMA OUTRA PARTE DA MAIN.

int main()
{
    int *iArray, iDimensao, iIndex;
    scanf("%d",&iDimensao);
    
    iArray = AlocaArrayInt(iDimensao);

    for (iIndex=0; iIndex<iDimensao; iIndex++){
        scanf("%d",&iArray[iIndex]);
    }

    for (iIndex=iDimensao-1; iIndex>=0; iIndex--){
        printf("%d ",iArray[iIndex]);
    }
    DesalocaArrayInt(iArray);

    return 0;
}
