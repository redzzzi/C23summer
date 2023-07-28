// 조건/선택실행구조 - 정수 1개 입력받아 평가 출력하기
//
#include<stdio.h>

int main(void) {
  int score;
  scanf("%d", &score);

  if ( 90 <= score && score <= 100 ) {
    printf("A\n");
  } else if ( 70 <= score && score <= 89 ) {
    printf("B\n");
  } else if ( 40 <= score && score <= 69 ) {
    printf("C\n");
  } else {
    printf("D\n");
  }

  return 0;
}
