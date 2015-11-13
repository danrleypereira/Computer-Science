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


// ##############################################################################

// INSIRA A(S) CHAMADA(S) À(S) SUBROTINA(S) DENTRO DA MAIN. NÃO ALTERE NENHUMA OUTRA PARTE DA MAIN.

int main()
{
    int iNumeArrayElements=0, iIndex, iLIMITE,ARRAYSIZE;
    float *fArray, iElement;

    scanf("%d",&ARRAYSIZE);

    fArray =

    scanf("%f",&iElement);
    while(iElement != 0)
    {
        fArray[iNumeArrayElements]= iElement;
        iNumeArrayElements++;
        if (iNumeArrayElements >= ARRAYSIZE)
            break;
        else scanf("%f",&iElement);
    }

    if (iNumeArrayElements>0){
        scanf("%d",&iLIMITE);
        for (iIndex=0; iIndex<iNumeArrayElements; iIndex++)
        {
            if (fArray[iIndex]>iLIMITE)
                printf("%0.1f ",fArray[iIndex]);
        }
    }

    return 0;
}
