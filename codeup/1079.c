// 종합 - 원하는 문자가 입력될 때까지 반복 출력하기!
//
#include<stdio.h>

int main(void) {
  char letter;
  
  do {
  scanf(" %c", &letter);
  printf("%c\n", letter);
  } while (letter != 'q');

  return 0;
}
