// 실수 1개 입력 받은 후, 부분별로 출력하기!!
//
#include<stdio.h>

int main() {
  int 정수부;
  int 소수부;

  scanf("%d.%d", &정수부, &소수부);
  printf("%d\n%d\n", 정수부, 소수부);
}
