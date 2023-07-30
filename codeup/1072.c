// 반복실행구조 - 정수 입력받아 계속 출력하기!!
//
#include<stdio.h>

int main(void) {
  int n, m;
  scanf("%d", &n);
  n--; // replay 처음 턴에서 카운트를 해줘야 해서 하나 빼야함.
replay:
  scanf("%d", &m);
  printf("%d\n", m);
  if (n-- != 0) goto replay; // 횟수인 n을 카운트!
  
  return 0;
}
