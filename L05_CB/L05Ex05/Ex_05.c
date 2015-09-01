#include <stdio.h>
#include <stdlib.h>

int EhTriangulo(int a, int b, int c);
void TipoTriangulo(int a, int b, int c);
int main()
{
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if(EhTriangulo(a, b, c))
	{
		TipoTriangulo(a, b, c);
	}
	
	return 0;
}

int EhTriangulo(int a, int b, int c)
{
	int ab = a < b ? -1 : 1;
	int ac = a < c ? -1 : 1;
	int bc = b < c ? -1 : 1;
	if(((bc*(b-c))<a && a<(b+c)) && ((ac*(a-c))<b && b<(a+c)) && ((ab*(a-b))<c && c<(a+b)))
	{
		return 1;
	}else
	{
		printf("Nao e Triangulo\n");
		return 0;
	}
}

void TipoTriangulo(int a, int b, int c)
{
	if((a==b) && (a==c) && (b==c))
	{
		printf("Triangulo Equilatero\n");

	}else if((a!=b) && (a!=c) && (b!=c))
	{
		
		printf("Triangulo Escaleno\n");

	}else
	{

		printf("Triangulo Isosceles\n");
	}
}
