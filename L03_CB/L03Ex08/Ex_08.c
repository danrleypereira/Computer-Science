#include <stdio.h>
#include <stdlib.h>

int main(){
	int N, i;//Numero que sera transformado em uma string.
	char str[15];//esta string possibilitara acessar as casas do int inversamente.
	scanf("%d", &N);
	sprintf(str, "%d", N);
	for(i = my_strlen(str); i>0; i++)
	{
		printf("%c", str[i]);
	}
	
	
	
	
	
	return 0;
}

int my_strlen(const char *str)
{
	const char *s;
	
	for(s = str; *s; ++s);
	return (s - str); //retorna a posicao da memoria de s menos o de anchor, o que retorna o tamnho da string.
}
