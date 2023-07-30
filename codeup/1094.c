// 1차원배열 - 이상한 출석 번호 부르기 2

#include<stdio.h>

int main(void) {
  int i, n;
  scanf("%d", &n);
  int attendance[n];
  for (i=1; i<=n; i++) {
    scanf("%d", &attendance[i]);
  }
  for (i=n; i>=1; i--) {
    printf("%d\n", attendance[i]);
  }
  return 0;
} 
