// 종합 - 여기까지! 이제 그마아아아안~!@!!!!
//
#include<stdio.h>

int main(void) {
  int i, num, sum=0;
  scanf("%d", &num);
  for (i=1; ; i++) {
    sum+=i;
    if (sum >= num) {
      break;
    } 
  }
  printf("%d\n", sum);
  return 0;
}
