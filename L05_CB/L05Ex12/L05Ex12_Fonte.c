#include <string.h>
#include <ctype.h>
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


void contaVogais(char* palavra, int tamanho, int vetor[5])
{
	int i;
	for(i=0; i<5; i++) vetor[i] = 0;
	int v = 0;
	while((palavra != NULL) && (*palavra != '\0'))
	{
		int y = toupper(*palavra);
		if (y == 'A')
		{
			vetor[0] = vetor[0] +1;
		}else if( y == 'E' )
		{
			vetor[1] = vetor[1] +1;
		}else if( y == 'I' )
		{
			vetor[2] = vetor[2] +1;
		}else if( y == 'O')
		{
			vetor[3] = vetor[3] +1;
		}else if( y == 'U')
		{
			vetor[4] = vetor[4] +1;
		}
		palavra++;
	}
}


// ##############################################################################


// INSIRA A(S) CHAMADA(S) À(S) SUBROTINA(S) DENTRO DA MAIN. NÃO ALTERE NENHUMA OUTRA PARTE DA MAIN.

int main()
{
  char Palavra[21];
  int pi, Contagem[5];

  for(pi=0;pi<21;pi++)
  {
    Palavra[pi] = '\0';
  }
  scanf("%s", Palavra);
  Palavra[20] = '\0';

  contaVogais(Palavra, 20, Contagem);

  for(pi=0;pi<5;pi++)
    printf("%d ", Contagem[pi]);

  return 0;
}
