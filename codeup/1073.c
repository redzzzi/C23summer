// 반복실행구조 - 0 입력될 때까지 무한 출력하기 2
//
#include<stdio.h>

int main(void) {
  int num;

  while (1) {
    scanf("%d", &num);
    if (num == 0) {
      break;
    } else {
      printf("%d\n", num);
    }
  }

  return 0;
}
