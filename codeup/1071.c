// 반복실행구조 - 0 입력될 때까지 무한 출력하기 1
//
#include<stdio.h>

int main(void) {
  int num;
replay:
  scanf("%d", &num);

  if (num!=0) {
    printf("%d\n", num);
    goto replay;
  }

  return 0;
}
