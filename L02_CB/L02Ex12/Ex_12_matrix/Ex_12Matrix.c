#include <stdio.h>
#include <stdlib.h>

char matrix[27][5][40] = {
	"Codigo", "Nome", "Sigla", "Capital", "Regiao",
	"ACRE", "AC", "RIO BRANCO", "NORTE",
	"ALAGOAS", "AL", "MACEIO", "NORDESTE",
	"AMAPA", "AP", "MACAPA", "NORTE",
	"AMAZONAS", "AM", "MANAUS", "NORTE",
	"BAHIA", "BA", "SALVADOR", "NORDESTE",
	"CEARA", "CE", "FORTALEZA", "NORDESTE",
	"ESPIRITO SANTO", "ES", "VITORIA", "SUDESTE",
	"GOIAS", "GO", "GOIANIA", "CENTRO-OESTE",
	"MARANHAO", "MA", "SAO LUIZ", "NORDESTE",
	"MATO GROSSO", "MT", "CUIABA", "CENTRO-OESTE",
	"MATO GROSSO DO SUL", "MS", "CAMPO GRANDE", "CENTRO-OESTE",
	"MINAS GERAIS", "MG", "BELO HORIZONTE", "SUDESTE",
	"PARA", "PA", "BELÉM", "NORTE",
	"PARAIBA", "PR", "JOAO PESSOA", "NORDESTE",
	"PARANA", "PR", "CURITIBA", "SUL",
	"PERNAMBUCO", "PE", "RECIFE", "NORDESTE",
	"PIAUI", "PI", "TERESINA", "NORDESTE",
	"RIO DE JANEIRO", "RJ", "RIO DE JANEIRO", "SUDESTE",
	"RIO GRANDE DO NORTE", "RN", "NATAL", "NORDESTE",
	"RIO GRANDE DO SUL", "RS", "PORTO ALEGRE", "SUL",
	"RONDÔNIA", "RO", "PORTO VELHO", "NORTE",
	"RORAIMA", "RR", "BOA VISTA", "NORTE",
	"SANTA CATARINA", "SC", "FLORIANOPOLIS", "SUL",
	"SAO PAULO", "SP", "SAO PAULO", "SUDESTE",
	"SERGIPE", "SE", "ARACAJU", "NORDESTE",
	"TOCATINS", "TO", "PALMAS", "NORTE"
};


void main()
{
	int codigo;
	scanf("%d", &codigo);
	if(codigo > 0 && codigo < 26)
	{
		int i, k;
		for(i = 0; i < 4; i++)
		{

			k = 0;
			char print[30];
			do
			{
				
				print[k] = matrix[codigo][i][k];
				printf("%c\n", print[k++]);

			}while(print[k] != "\0");
		}
	}else
	{
		printf("INEXISTENTE\n");
	}
}
