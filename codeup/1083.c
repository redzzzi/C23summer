// 종합 - 3 6 9 게임의 왕이 되자!
//
#include<stdio.h>

int main(void) {
  int i, last;
  scanf("%d", &last);
  
  for (i=1; i<=last; i++) {
    if (i==3 || i==6 ||i==9) {
      printf("X\n");
    } else {
      printf("%d\n", i);
    }
  }
  return 0;
}
