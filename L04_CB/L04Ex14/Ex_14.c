#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  char string[100] = {};
  gets(string);
  int i, len = strlen(string);
  for(i=(len-1); i>=0; i--) printf("%c", string[i]);
  printf("\n");
  return 0;
}

