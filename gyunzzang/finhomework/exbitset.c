// 2023-12-16
// 13.1 Bitwise Operators
#include <stdio.h>

void swap(int *a, int *b) {
  *a ^= *b, *b ^= *a, *a ^= *b;
}

int main() {
  int n = 123;
  // dividing by two, multiplying by two
  int a = n >> 1, b = n << 1;

  printf("a:%3X\tb:%3X\n", a, b);
  swap(&a, &b);
  printf("a:%3X\tb:%3X\n", a, b);

  return 0;
}
