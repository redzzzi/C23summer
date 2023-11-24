#include<stdio.h>

int main() {
  int n = 0;

  scanf("%d", &n);
  printf("entered number    = %d\n", n);
  printf("double(%d)    = %d\n", n, n*2);
  printf("triple(%d)    = %d\n", n, n*3);
  printf("quadruple(%d) = %d\n", n, n*4);
  printf("quadruple(%d) = %c\n", n, n*4);

  return 0;
}
