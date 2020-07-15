#include <stdio.h>

void hello_n_times(int n) {
  while (n) {
    puts("Hello, World!");
    n--;
  }
}

int main(int argc, char** argv) {
  hello_n_times(5);
  return 0;
}
