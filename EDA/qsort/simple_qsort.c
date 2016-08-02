#include <stdio.h>
#include <stdlib.h>

int values[] = { 40, 10, 100, 90, 20, 25, 12, 13, 10, 40 };

int compare (const void *a, const void *b)
{
      const int *ia = (const int *)a; // casting pointer types 
          const int *ib = (const int *)b;
              return *ia  - *ib; 
}

int main ()
{
      int n;
        for (n=0; n<10; n++)
        {
	 	printf("%d ",values[n]);                            
	}
        printf("\n");
        qsort (values, 10, sizeof(int), compare);
        for (n=0; n<10; n++)
        {
        	printf ("%d ",values[n]);
        }
        printf("\n");
        system("pause");
      return 0;
}
