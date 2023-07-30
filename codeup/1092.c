// 종합 - 함께 문제 푸는 날
//
# include <stdio.h>

int main ( void ) {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  int days=1;
  while ( days%a!=0 || days%b!=0 || days%c!=0 ) {
    days++;
  }
  printf("%d\n", days);
  return 0;
}
