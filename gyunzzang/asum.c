// 2023-10-24
//
#include<stdio.h>

int sum(int sz, int a[]) {
  int s = 0;
  for (int i = 0; i < sz; i++)
    s += a[i];
  return s;
} 

int main() {
  int x[] = {1, 2, 3, 4};
  int SZ = sizeof x / sizeof x[0];
  printf("sum:   %d\n", sum(SZ, x));
  return 0;
}
