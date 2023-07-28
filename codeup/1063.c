// 삼항연산 - 두 정수 입력받아 큰 수 출력하기
//
#include<stdio.h>

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d\n", a>b ? a:b);
  
  return 0;
}
