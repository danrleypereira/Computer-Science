#include <stdio.h>
/*
                                        LISTA DE EXERC�CIO 05.
NESTE EXERC�CIO VOC� DEVE:
    1 - CODIFICAR A SUBROTINA(S) SOLICITADA(S) NO LOCAL APONTADO
    2 - REALIZAR A(S) CHAMADA(S) DESTA(S) SUBROTINA(S) DE FORMA CORRETA (COLOCAR OS PAR�METROS DE ENTRADA, QUANDO FOR O CASO)
        NO(S) LOCAL(AIS) CORRETO(S) (DENTRO DA MAIN)
*/

// ############### Codifique sua(s) solu��o(��es) aqui. ###################################

int SomaVet(int *vetor, int quantidade_elementos)
{
    int soma = 0, i;
    for(i = 0; i < quantidade_elementos; i++)
    {
        soma += vetor[i];
    }
    return soma;
}

// ##############################################################################


// INSIRA A(S) CHAMADA(S) �(S) SUBROTINA(S) DENTRO DA MAIN. N�O ALTERE NENHUMA OUTRA PARTE DA MAIN.

int main()
{
  int pind, Nums[70];

  for(pind=0;pind<70;pind++)
  {
    scanf("%d", &Nums[pind]);
  }
  printf("%d",  SomaVet(Nums, 70));
  return 0;
}
