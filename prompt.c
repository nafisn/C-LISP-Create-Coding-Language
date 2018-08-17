#include <stdio.h>

static char input[2048];

int main(int argc, char** argv){

  puts("Lispy Version 0.1");
  puts("Press Ctrl+c to Exit\n");

  while(1){
    /* output prompt */
    fputs("lispy> ", stdout);

    /* read a line of user input max size 2048 */
    fgets(input, 2048, stdin);

    /* echo input */
    printf("No you're a %s", input);
  }

  return 0;
}
