// 정수 하나 입력받아 부호 바꿔 출력하기
//
#include<stdio.h>

int main() {
  int number;

  scanf("%d", &number);
  printf("%d\n", -number); // 단항 연산자 (-)을 붙이면 부호 반대로!

  return 0;
}
