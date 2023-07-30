// 종합 - 주사위를 2개 던지면?
//
#include<stdio.h>

int main(void) {
  int i, j, side1, side2;
  scanf("%d %d", &side1, &side2);

  for (i=1; i<=side1; i++) {
    for (j=1; j<=side2; j++) {
      printf("%d %d\n", i, j);
    }
  }
  return 0;
}
