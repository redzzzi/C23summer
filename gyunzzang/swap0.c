#include<stdio.h>

void prAB(int a, int b) {
  printf("a = %d, b = %d\n", a, b);
}

int main() {
  int a = 2, b = 3;
  int tmp;

  prAB(a, b);
  tmp = a;
  a = b;
  b = tmp;
  prAB(a, b);

  return 0;
}
