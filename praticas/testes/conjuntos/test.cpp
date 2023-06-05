#include<stdio.h> //Biblioteca STard Input Output (para usarmos  printf e scanf)
#include <locale.h>
#include <string.h>
#include <iostream>

using namespace std;

int main(){
  cout << "tamanho de int\n";
  int sizeofint = sizeof(char);
  cout << sizeofint;
  return 0;
}