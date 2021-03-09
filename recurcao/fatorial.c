#include <stdio.h>

int fatorial(int n) {
  if (n < 0) return -1;

  if (n == 0 || n == 1) return 1;

  return n * fatorial(n - 1);
}

int main() {
  printf("fatorial(%d) = %d\n", 0, fatorial(0));
  printf("fatorial(%d) = %d\n", 1, fatorial(1));
  printf("fatorial(%d) = %d\n", 3, fatorial(3));
  printf("fatorial(%d) = %d\n", 5, fatorial(5));
  printf("fatorial(%d) = %d\n", 7, fatorial(7));
}
