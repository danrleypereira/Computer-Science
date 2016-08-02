#include <stdio.h>
/*
                                        LISTA DE EXERCÍCIO 05.
NESTE EXERCÍCIO VOCÊ DEVE:
    1 - CODIFICAR A SUBROTINA(S) SOLICITADA(S) NO LOCAL APONTADO
    2 - REALIZAR A(S) CHAMADA(S) DESTA(S) SUBROTINA(S) DE FORMA CORRETA (COLOCAR OS PARÂMETROS DE ENTRADA, QUANDO FOR O CASO)
        NO(S) LOCAL(AIS) CORRETO(S) (DENTRO DA MAIN)
*/

// ############### Codifique sua(s) solução(ções) aqui. ###################################

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


// INSIRA A(S) CHAMADA(S) À(S) SUBROTINA(S) DENTRO DA MAIN. NÃO ALTERE NENHUMA OUTRA PARTE DA MAIN.

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
