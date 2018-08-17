#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
#include <editline/history.h>

static char input[2048];

int main(int argc, char** argv){

  puts("Lispy Version 0.1");
  puts("Press Ctrl+c to Exit\n");

  while(1){
    /* output prompt and get input*/
    char* input = readline("lispy> ");

    /* add input to history */
    add_history(input);

    /* echo input */
    printf("No you're a %s", input);

    /* free retrieved input */
    free(input);
  }

  return 0;
}
