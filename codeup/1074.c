// 반복실행구조 - 정수 1개 입력받아 카운트다운 출력하기 1
//
#include<stdio.h>

int main(void) {
  int num;
  scanf("%d", &num);

  while (num != 0) {
    printf("%d\n", num);
    num--;
  }

  return 0;
}
