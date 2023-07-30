// 종합 - 언제까지 더해야 할까??
//
#include<stdio.h>

int main(void) {
  int i, sum = 0, crit;
  scanf("%d", &crit);

  for (i=1; sum+i<crit; i++) {
    sum+=i;
  }
  printf("%d\n", i);

  return 0;
}
