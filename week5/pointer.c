// 전역 변수
// CODE/DATA(전역변수)/BSS(전역변수?)/Heap/Stack(지역변수
//
#include<stdio.h>

int global = 0;
int global_2;

int main (void) {
  int arr[3] = {1, 2, 3};
  char c = 'A';
  long long ll = 1000000;

  int *p = &arr[1]; // 2
  char *p_c = &c;   // c의 주소는? 0x10C - 메모리(?)에도 저렇게 들어감
  
  // 위치를 나타낼 때, &와 *을 사용함
  // 운영 체제에서 64bit 이런 거 -> 주소와 관련된 것임
  // 32bit 운영체제: 4G의 공간
  printf("p: %p\n", p);
  printf("*p: %d\n", *p);
  return 0;
}
