// 주민번호 형태 바꿔 출력
//
#include<stdio.h>

int main() {
  int front;
  int back;
  scanf("%d-%d", &front, &back);
  printf("%06d%d\n", front, back);
}
