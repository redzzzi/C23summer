// 정수 2개 입력받아 그대로 출력하기
//
#include<stdio.h>

int main() {
  int a;
  int b;

  // 이 밑의 두 줄 scanf("%d%d", &a, &b);로 표현 가능
  scanf("%d", &a);
  scanf("%d", &b);

  printf("%d\n%d\n", a, b);
  return 0;
}
