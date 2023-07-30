// 종합 - 수 나열하기2
//
#include<stdio.h>
#include<math.h>

int main(void) {
  long long int a, r, n;
  scanf("%lld %lld %lld", &a, &r, &n);
  for (int i=1; i<n; i++) {
    a*=r;
  }
  printf("%lld\n", a);
  return 0;
}
