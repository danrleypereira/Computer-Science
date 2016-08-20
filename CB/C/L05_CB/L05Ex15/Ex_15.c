#include <stdio.h>
#include <stdlib.h>

char* direitaDaString(myString, index);
int tamanho_string(string);
char* subString (const char* input, int offset, int len, char* dest);

int main()
{
	char* nome; 
	int i;
	scanf("%s", nome);
	scanf("%d", i);
	
	nome = direitaDaString(nome, i);
	
	
	return 0;
}

char* direitaDaString(char* myString, int index)
{	
	char* nome;
	int tamanho = tamanho_string(myString);
	
	nome = subString(myString, index, (tamanho-index), nome);
	
	return nome;
}

int tamanho_string(char* string)
{
	int tamanho = (sizeof(string)/sizeof(char*));
	return tamanho;
}

char* subString (const char* input, int offset, int len, char* dest)
{
	int input_len = strlen (input);

	if (offset + len > input_len)
	{
		return NULL;
  	}

	strncpy (dest, input + offset, len);
	return dest;
}

