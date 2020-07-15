#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
#include <editline/history.h>

int main(int argc, char** argv) {

  while (1) {
    char* input = readline("lispy> ");
    add_history(input);
    printf("You said %s\n", input);
    free(input);
  }

  return 0;
}
