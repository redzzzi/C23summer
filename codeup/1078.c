// 종합 - 짝수 합 구하기
//
#include<stdio.h>

int main ( void ) {
  int i, num, sum = 0; 
  scanf("%d", &num);
  for (i=0; i<=num; i++) {
    if (i%2==0) {
      sum+=i;
    }
  }
  printf("%d\n", sum);

  return 0;
}
