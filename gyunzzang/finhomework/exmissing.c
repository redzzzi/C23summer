// 2023-10-31
// 7.1 Algorithm 
//

#include<stdio.h>

int sum1(int n) {
  int s = 0;
  for (int i=1; i<=n; i++)
    s += i;
  return s;
} 

int sum2(int n) {
  return n*(n+1)/2;
}

int main() {
  int n = 10;
  printf("1 + ... + %d = %d\n", n, sum1(n));
  printf("1 + ... + %d = %d\n", n, sum2(n));
}
