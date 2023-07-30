// 종합 - 수 나열하기 3
//
#include<stdio.h>

int main(void) {
  long long int a, m, d, n;
  scanf("%lld %lld %lld %lld", &a, &m, &d, &n);
  for (int i=1; i<n; i++) {
    a*=m;
    a+=d;
  }
  printf("%lld\n", a);
  return 0;
}
