#include <stdio.h>
#include <stdlib.h>

int main(){
	for( ; ; )
	{
		int Num;
		scanf("%d", &Num);
		if(Num<0)
		{
			break;
		}else if(Num%2 == 0)
		{
			printf("%d: par\n", Num);
		}else
		{
			printf("%d: impar\n", Num);
		}	
		
	}

	return 0;
}
