#include <stdio.h>
#include <stdlib.h>

int values[7][3] = { {40,55}, {10,52}, {100,8}, {90,90}, {20,91}, {25,24} };

int compare (int a[2], int b[2])
{
      return a[1] - b[1];
}

int main ()
{
      int n;
          for (n=0; n<6; n++)
                {
                          printf ("%d,",values[n][0]);
                                  printf ("%d ",values[n][1]);
                                      }
              printf("\n");
                  qsort (values, 6, sizeof(int)*3, compare);
                      for (n=0; n<6; n++)
                            {
                                      printf ("%d,",values[n][0]);
                                              printf ("%d ",values[n][1]);
                                                  }
                          printf("\n");
                              system("pause");
                                  return 0;
}
