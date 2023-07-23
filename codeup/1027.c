// 연월일 입력 받은 후, 형식 바꿔 출력하기
//
#include<stdio.h>

int main() {
  int year, month, day;

  scanf("%d.%d.%d", &year, &month, &day);
  printf("%02d-%02d-%04d", day, month, year);

  return 0;
}
