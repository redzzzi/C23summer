// 조건/선택실행구조 - 평가 입력받아 다르게 출력하기

#include<stdio.h>

int main(void) {
  char grade;
  scanf("%c", &grade);

  switch(grade) {
    case 'A':
      printf("best!!!\n");
      break;
    case 'B':
      printf("good!!\n");
      break;
    case 'C':
      printf("run!\n");
      break;
    case 'D':
      printf("slowly~\n");
      break;
    default:
      printf("what?\n");
  }

  return 0;
}
