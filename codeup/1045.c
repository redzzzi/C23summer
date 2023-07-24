// 정수 2개 입력받아 자동 계산하기
//
#include<stdio.h>

int main() {
  long long int a, b;

  scanf("%lld %lld", &a, &b);
  printf("%lld\n", a+b);
  printf("%lld\n", a-b);
  printf("%lld\n", a*b);
  printf("%lld\n", a/b);
  printf("%lld\n", a%b);
  printf("%.02f\n", (float)a/b);

  return 0;
}
