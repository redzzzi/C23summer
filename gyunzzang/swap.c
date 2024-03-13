// 2023-12-16
// SWAP
#include <stdio.h>

void swap(int *p, int *q) {
  int tmp = 0;
  tmp = *p;
  *p = *q;
  *q = tmp;
}

int main() {
  int a = 0, b = 0;

  puts("A is ?");
  scanf("%d", &a);
  puts("B is ?");
  scanf("%d", &b);
  
  puts("Let's SWAP!");
  swap(&a, &b);
  printf("A is %d\n", a);
  printf("B is %d\n", b);

  return 0;
}
