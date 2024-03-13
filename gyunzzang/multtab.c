// 2023-12-16
// 구구단 코드
#include <stdio.h>

int main() {
  int i = 0, j = 0;

  for (i=1; i<10; i++) {
    printf("Column %d:\n", i);
    for (j=1; j<10; j++) {
      printf("%d X %d = %d\n", i, j, i*j);
    }
    printf("\n");
  }
  return 0;
}
