// 논리연산 - 둘 다 참일 경우만 참 출력
//
#include<stdio.h>

int main(void) {
  int a, b;

  scanf("%d %d", &a, &b);
  printf("%d\n", a&&b);

  return 0;
}
