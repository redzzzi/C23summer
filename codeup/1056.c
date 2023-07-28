// 논리연산 - 참/거짓이 서로 다를 때만 참 출력
//
#include<stdio.h>

int main(void) {
  int a, b;

  scanf("%d %d", &a, &b);
  printf("%d\n", (!a&&b)||(a&&!b));

  return 0;
}
