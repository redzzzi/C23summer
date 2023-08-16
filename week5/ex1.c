#include<stdio.h>

int main(void) {
  int a=1;
  int *p=&a;

  *p=123;

  printf("a is %d\n", a);
  return 0;
}

// 원래 선언되었던 것보다 초과하는 범위의 타입으로 포인터를 불러내면
// 원래 주소 지정 위치로부터 타입에 해당하는 바이트만큼의 데이터를 읽음
