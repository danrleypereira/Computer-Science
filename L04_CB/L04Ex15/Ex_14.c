#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  char string1[100] = {}, string2[100] = {}, conc[200] = {};
  gets(string1);
  gets(string2);
  int i, len1 = strlen(string1), len2 = strlen(string2);

  for(i=0; i<100; i++)
  {
    if((strcmp(string1, string2)) > 0)
    {
        printf("%c%c", string1[i], string2[i]);
//      strcat(conc, string1[i]);
//      strcat(conc, string2[i]);
    }else if((strcmp(string1, string2)) < 0)
    {
        printf("%c%c", string2[i], string1[i]);
//      strcat(conc, string2[i]);
  //    strcat(conc, string1[i]);
    }
  }
  //i = len1+len2;
  //conc[i] = "\0";

  printf("\n");
  return 0;
}

