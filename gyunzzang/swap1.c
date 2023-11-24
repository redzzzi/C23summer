#include<stdio.h>

void prAB(int a, int b) {
  printf("a = %d, b = %d\n", a, b);
}

void swap(int a, int b) {
  int tmp = a;
  a = b;
  b = tmp;
}

int main() {
  int a = 2, b = 3;
  int tmp;

  prAB(a, b);
  tmp = a;
  a = b;
  b = tmp;
  prAB(a, b);
  swap(a, b);

  return 0;
}
