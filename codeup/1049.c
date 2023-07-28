//[비교연산자] 두 정수 입력받아 비교하기 1
//
#include<stdio.h>

int main(void) {
  int a, b;

  scanf("%d %d", &a, &b);

  if (a > b) {
    printf("1");
  } else {
    printf("0");
  }
  
  return 0;
}
