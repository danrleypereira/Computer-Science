#include <stdio.h>

void print_matrix(int* A, int i, int j){
  printf("size of a integer: %d bytes\n", sizeof(int));
  printf("A[0][0] => %d\n", &A);
}

int main()
{

  int m = 2;
  int n = 3;
  int p = 6;

  int a1[n] = {1,1,1};
  int a2[n] = a1;
  int b1[0][n] = {
    1,
    1,
    1
  };

  int A[m][n] = {
    1, 1, 1,
    1, 1, 1
  };

  int B[n][p] = {
    1,1,1,1,1,6,
    1,1,1,1,6,1,
    1,6,1,1,1,1
  };

  int C[m][p] = {};

  print_matrix(A, m, n);
  return 0;
}