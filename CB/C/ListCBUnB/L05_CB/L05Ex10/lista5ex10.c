#include <stdio.h>
/*
                                        LISTA DE EXERC�CIO 05.
NESTE EXERC�CIO VOC� DEVE:
    1 - CODIFICAR A SUBROTINA(S) SOLICITADA(S) NO LOCAL APONTADO
    2 - REALIZAR A(S) CHAMADA(S) DESTA(S) SUBROTINA(S) DE FORMA CORRETA (COLOCAR OS PAR�METROS DE ENTRADA, QUANDO FOR O CASO)
        NO(S) LOCAL(AIS) CORRETO(S) (DENTRO DA MAIN)
*/

// ############### Codifique sua(s) solu��o(��es) aqui. ###################################

int MaiorAltura(double *vetor_de_alturas, int quantidade)
{
    double maior_altura;
    int i = 0, posicao = 0;
    maior_altura = vetor_de_alturas[i];
    for(i = 1; i < quantidade; i++)
    {
        if(vetor_de_alturas[i] > maior_altura)
        {
            maior_altura = vetor_de_alturas[i];
            posicao = i;
        }
    }
    return posicao;
}


// ##############################################################################


// INSIRA A(S) CHAMADA(S) �(S) SUBROTINA(S) DENTRO DA MAIN. N�O ALTERE NENHUMA OUTRA PARTE DA MAIN.


int main()
{
  int pind, pposicao, qtde_Alturas;
  double * Alturas;
  scanf("%d", &qtde_Alturas);
  Alturas = (double*)malloc(sizeof(double)*qtde_Alturas);
  for(pind=0;pind<qtde_Alturas;pind++)
  {
    scanf("%lf", &Alturas[pind]);
  }
  pposicao = MaiorAltura(Alturas, qtde_Alturas);
  printf("Maior Altura: %.1lf - Posicao: %d", Alturas[pposicao], pposicao);
  return 0;
}

