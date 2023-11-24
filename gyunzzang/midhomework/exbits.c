// 2023-09-14 The Binary Representation

#include<stdio.h>

int main() {
  int c = getchar() , d = c - '0';

  printf("ASCII('%c')    = %d\n", c, c);
  printf("Decimal('%c')  = %d\n", c, d);
  printf("LSB(%d): %d\n", d, d & 1);
  // LSB: Least Significant Bit

  return 0;
}
