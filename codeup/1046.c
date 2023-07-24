// 정수 3개 입력받고 합과 평균 출력하기
//
#include<stdio.h>

int main() {
  int a, b, c;

  scanf("%d %d %d", &a, &b, &c);
  printf("%d\n%.01f\n", a+b+c, (float)(a+b+c)/3);

  return 0;
}
