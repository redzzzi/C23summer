// 종합 - 3의 배수는 통과?
//
#include<stdio.h>

int main(void) {
  int i, num;
  scanf("%d", &num);
  
  for (i=1; i<=num; i++) {
    if (i%3!=0) {
      printf("%d\n", i);
    }
  }
  return 0;
}
