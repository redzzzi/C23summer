// 반복실행구조 - 문자 1개 입력받아 알파벳 출력하기
//
#include<stdio.h>

int main(void) {
  char last, eng = 'a';
  scanf("%c", &last);
  
  do {
    printf("%c\n", eng);
    eng++;
  } while ( eng <= last );

  return 0;
}
