#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
/*
    Procedimento troca_ponteiros
    Entrada:
        Dois ponteiros passados por referência
    Descrição:
        Neste procedimento você receberá dois ponteiros para strings passados por referência (por isso o char **) e deverá fazer com que pt_str1 passe a apontar para onde pt_str2 apontava originalmente e pt_str2 passa a apontar para onde pt_str1 apontava originalmente
    Retorno:
        Nada.
    Pontuação:
        2.0 pontos
*/
void troca_ponteiros(char** pt_str1, char** pt_str2){
	char *slv_str1 = *pt_str1, *slv_str2 = *pt_str2; 
	
	*pt_str1 = slv_str2;
	*pt_str2 = slv_str1;
}
 
/*
    Funcao ordem_alfabetica
    Entrada:
        Duas cadeias de caracteres str1 e str2
    Retorno:
        -1 se a cadeia str1 vier antes de str2 na ordem alfabética
        0 se as duas forem iguais
        1 se a cadeia str1 vier depois de str2 na ordem alfabética
    Pontuação:
        2.0 pontos
 
    Observações:
        Não esqueça de considerar os casos onde as strings são parecidas mas possuem tamanho distinto.
            "exemplo" e "exemplo" retornaria 0;
        no entanto,
            "exemplo" e "exemplos" retornaria -1 pois "exemplo" vem antes de "exemplos" na ordem alfabética
        e, similarmente,
            "exemplos" e "exemplo" retornaria 1 pois "exemplos" vem depois de "exemplo" na ordem alfabética
*/
int ordem_alfabetica(char *str1, char *str2){
	int comp1 = comprimento(str1), comp2 = comprimento(str2), i;
	int comp = (comp1 > comp2) ? comp1 : comp2 ;
	if(comp1 == comp2)
	{
		return ( strcmp(str1, str2) );
	}
	for(i=0; i<comp; i++)
	{
		if(comp1 > i && comp2 > i)
		{
			if(strcmp(str1[i], str2[i]))
			{
				return strcmp(str1[i], str2[i]);
			}else{continue;}
		}
		return 0;
	}
}
 
int comprimento(char *str){
	return strlen(str);
}
 
 
/* Funcao localiza_menor_string
    Entrada:
        vetor_str:      vetor de strings
        inicio:         indice do primeiro indice
        termino:        indice do ultimo indice
    Saida:
        indice do elemento que vem primeiro na ordem alfabetica
    Descrição:
        Esta função percorre os indices inicio a termino do vetor vetor_str e retorna o indice do elemento que tem o menor valor lexicografico, isto é, o que vem primeiro na ordem alfabetica.
    Pontuação:
        2.0 pontos
*/
char* localiza_menor_entre_duas(char* str1, char* str2)
{
		if(ordem_alfabetica(str1, str2) == -1)
		{
			return str1;
		}else if(ordem_alfabetica(str1, str2) == 1)
		{
			return str2;
		}
}

int localiza_menor_string(char* vetor_str[5], int inicio, int termino){
	int i, j;
	char* v_str[5];
	for(i=inicio; i<=termino; i++)
	{
		for(j=inicio; j<=termino; j++)
		{
			v_str[i] = localiza_menor_entre_duas(vetor_str[i], vetor_str[j]);
		}
	return v_str[0];
	}
}
 
/* Procedimento ordena_vetor_strings
 
    Entrada:
        vetor_str[5]:   vetor de 5 strings (char*)
        inicio:         indice do inicio da ordenação
        termino:        indice do término da ordenação
    Retorno:
        Nada
    Descrição:
        Ordenar os elementos do vetor vetor_str entre os indices inicio e termino (inclusive eles) em ordem alfabetica crescente.
    Pontuação:
        3.0 pontos
*/
void ordena_vetor_strings(char* vetor_str[5], int inicio, int termino){
	char* str[5];
	int i, j;
	for(i=inicio; i<termino; i++)
	{
		for(j=inicio; j<termino; j++){
			switch(localiza_menor_string(vetor_str, i, j)){
				case i:
				str[i] = vetor_str[i];
				break;
				case j:
				str[i] = vetor_str[j];
				break;
			}
		}
	
	}


}
 
 
 
/*******************************
 NÃO MEXA MAIS DAQUI PARA BAIXO!
 *******************************/
int ler_status_implementacao();
 
int main(){
    ler_status_implementacao();
    return 0;
}
 
int ler_status_implementacao(){
    int questoes, ordem;
    char *str1, *str2, *gabarito1, *gabarito2;
    char* vetor_str[5];
 
    printf("Qual questao você vai testar?\n");
    printf("1) troca_ponteiros\n2) ordem_alfabetica\n3)localiza_menor_string \n4) ordena_vetor_strings\n");
    scanf("%d", &questoes);
 
    switch (questoes){
        case 1:
            printf("str1: ");
            str1 = malloc(sizeof(char)*50);
            gabarito1 = str1;
            scanf("%s", str1);
 
            printf("str2: ");
            str2 = malloc(sizeof(char)*50);
            gabarito2 = str2;
            scanf("%s", str2);
 
            troca_ponteiros(&str1, &str2);
            if( (str2 == gabarito1) && (str1 == gabarito2)){
                printf("Parabens, parece bom.\n");
                printf("Valor original de str1: %s\nValor Atual de str1: %s\n", gabarito1, str1);
                printf("Valor original de str2: %s\nValor Atual de str2: %s\n", gabarito2, str2);
            }
            break;
        case 2:
            printf("str1: ");
            str1 = malloc(sizeof(char)*50);
            scanf("%s", str1);
            gabarito1 = str1;
 
            printf("str2: ");
            str2 = malloc(sizeof(char)*50);
            gabarito2 = str2;
            scanf("%s", str2);
 
            ordem = ordem_alfabetica(str1, str2);
 
            switch(ordem){
                case -1:
                    printf("%s vem antes de %s\n", str1, str2);
                    break;
                case 0:
                    printf("%s e %s são iguais\n", str1, str2);
                    break;
                case 1:
                    printf("%s vem depois de %s\n", str1, str2);
                    break;
                default:
                    printf("Algo deve ter dado errado!");
                    break;
            }
 
            break;
        case 3:
            {
                int i, inicio, fim, menor;
                for(i=0; i<5; i++){
                    printf("string %d:", i);
                    vetor_str[i] = malloc(sizeof(char)*50);
                    scanf("%s",vetor_str[i]);
                }
 
                printf("Indice do inicio da busca: ");
                scanf("%d", &inicio);
                printf("Indice do fim da busca: ");
                scanf("%d", &fim);
 
                menor = localiza_menor_string(vetor_str, inicio, fim);
                printf("A primeira string na ordem alfabetica entre os indices %d e %d eh:\n vetor_str[%d]: %s\n", inicio, fim, menor, vetor_str[menor]);
 
            }
            break;
 
        case 4:
            {
                int i;
                for(i=0; i<5; i++){
                    printf("string %d:", i);
                    vetor_str[i] = malloc(sizeof(char)*50);
                    scanf("%s",vetor_str[i]);
                }
 
                ordena_vetor_strings(vetor_str, 0, 4);
 
                for(i=0; i<5; i++){
                    printf("string %d:", i);
                    printf("%s\n", vetor_str[i]);
                }
            }
 
            break;
        default:
            ler_status_implementacao();
    }
}
