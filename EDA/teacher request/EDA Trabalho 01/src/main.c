
int main(int argc, char* argv) {
  char* string = "[(A+B)*{G*R}]\0";
  int lenght = sizeof(string)/sizeof(char);
  printf("%s", string);
  exibir_menu();
  if( isCorrect(string, lenght) ) {
    printf("Congratulations. You're not a idiot.");
  }else {
    printf("Sorry, but you are a idiot.");
  }

  return 0;
}
