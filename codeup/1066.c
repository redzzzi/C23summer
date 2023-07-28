// 조건/선택실행구조 - 정수 3개 입력받아 짝/홀 출력하기

#include<stdio.h>

int main(void) {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

  if (a%2==0) {
    printf("even\n");
  } else {
    printf("odd\n");
  }

  if (b%2==0) {
    printf("even\n");
  } else {
    printf("odd\n");
  }

  if (c%2==0) {
    printf("even\n");
  } else {
    printf("odd\n");
  }

  return 0;
}
