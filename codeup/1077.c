// 반복실행구조 - 정수 1개 입력받아 그 수까지 출력하기
//
#include<stdio.h>

int main ( void ) {
  int num, i;
  scanf("%d", &num);

  for ( i=0; i<=num; i++ ) {
    printf("%d\n", i);
  }

  return 0;
}
