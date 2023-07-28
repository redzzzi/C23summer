// 비트시프트 연산으로 한 번에 2의 거듭제곱 배로 출력하기!!

#include<stdio.h>

int main( void ) {
  int a, b;

  scanf("%d %d", &a, &b);
  printf("%d\n", a<<b);

  return 0;
}
