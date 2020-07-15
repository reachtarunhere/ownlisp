#include <stdio.h>

static char text_buffer[2048];

int main(int argc, char** argv) {

  while (1) {
    fputs("lispy> ", stdout);
    fgets(text_buffer, 2048, stdin);
    printf("You said %s", text_buffer);
  }

  return 0;
}
