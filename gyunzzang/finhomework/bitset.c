// 2023-12-16
// 13.2 Programming Assignment 13: bitset.c
#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  for (int i = 0; i < sizeof(int) * 8 - 1; i++) {
    if ((n >> i) & 1) {
      printf("%d\n", i);
    }
  }

  return 0;
}

