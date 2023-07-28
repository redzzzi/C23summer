// 삼항연산 - 정수 3개 입력받아 가장 작은 수 출력하기!!

#include<stdio.h>

int main(void) {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  printf("%d\n", (a<b?a:b)<c?(a<b?a:b):c);

  return 0;
}
