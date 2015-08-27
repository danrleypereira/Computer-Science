#include <stdio.h>
#include <stdlib.h>

int main()
{
	int A, B, C;
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	
	if(A<B && A<C)
	{
		printf("%d ", A);
		if(B<C){
			printf("%d %d\n", B, C);
		}else
		{
			printf("%d %d\n", C, B);
		} 
	}else if(B<C)
	{
		printf("%d ", B);
		if(A<C)
		{
			printf("%d %d \n", A, C);
		}else
		{
			printf("%d %d \n", C, A);
		}
	}else
	{
		printf("%d ", C);
		A < B ? printf("%d %d\n", A, B) : printf("%d %d \n", B, A);
	}
	return 0;
}
