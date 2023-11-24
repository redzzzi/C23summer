// 2023-10-24
//
#include<stdio.h>

int main() {
  int x[] = {1, 2, 3, 4, 5, 6, 7};
  int SZ = sizeof x / sizeof x[0];
  printf("name:      %16u\n", x);
  printf("size:      %16d\n", sizeof x);
  printf("elem size: %16d\n", sizeof x[0]);
  return 0;
}
