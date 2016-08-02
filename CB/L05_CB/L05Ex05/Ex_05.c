#include <stdio.h>
#include <stdlib.h>

int EhTriangulo(int a, int b, int c);
int TipoTriangulo(int a, int b, int c);
int main()
{
	int i;
	for(i=0; i<5; i++)
	{
		int a, b, c;
		scanf("%d", &a);
		scanf("%d", &b);
		scanf("%d", &c);
	
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

int TipoTriangulo(int a, int b, int c)
{
	if(EhTriangulo(a, b, c))
	{
		if((a==b) && (a==c) && (b==c))
		{
			printf("Triangulo Equilatero\n");
			return 1;
		}else if((a!=b) && (a!=c) && (b!=c))
		{
		
			printf("Triangulo Escaleno\n");
			return 3;
		}else
		{
			printf("Triangulo Isosceles\n");
			return 2;
		}
	}
}
