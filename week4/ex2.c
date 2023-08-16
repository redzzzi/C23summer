// 예제 2
//
#include<stdio.h>

long long add(long long d1, long long d2);

int main (void) {
  long long l1 = 100000000000l;
  long long l2 = 300000000000l;

  printf("d1 + d2 = %lld\n", add(l1, l2));
  return 0;
}

long long add(long long d1, long long d2) {
  return d1+d2;
}
