#include <stdio.h>
#include <stdlib.h>
typedef int bool;
#define true 1
#define false 0
#define numbers_input 500

int matrix_lidos[] = {},  matrix[numbers_input] = {};

/*void check_allocation(int *ptr)
{
    // Check to see if we were successful 
    if (ptr == NULL)
    {
      // We were not so display a message 
      printf("Could not allocate required memory\n");
                     
      // And exit 
      exit(1);
    }
}*/

void initialize_matrix()
{
  int i =0;
  for(i=0; i<numbers_input; i++)
  {
    scanf("%d", &matrix[i]);
  }
}

/*int size_of_array(int* array)
{
  int a = (sizeof(array)/sizeof(*array));
  printf("%d", a);
  return a;
}
*/
bool is_read(int length)
{
  int i;
  for(i=0; i<length; i++)
  {
    if(matrix[length] == matrix[i]) return false;
  }
  return true;
}

void printar_valor(int valor)
{
    printf("%d ", valor);
}

int main()
{
  int j;
  initialize_matrix();
  for(j=0; j<numbers_input; j++)
  {
    if(is_read(j))
    {
      printf("j = %d ", j);
      printar_valor(matrix[j]);
    }
  }
  printf("\n");
  return 0;
}
