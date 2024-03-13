// 2023-12-07
//
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
  return *(int *)a - *(int *)b;
}

void print(int a[], int n) {
  for (int i=0; i<n; ++i) {
    printf("%d%s", a[i], (i==n-1)?"\n":" ");
  }
}

int main() {
  int a[] = {5, 1, 0, 3, 5, 1, 0}, sz = sizeof a / sizeof *a;
  print(a, sz);
  qsort(a, sz, sizeof *a, cmp);
  print(a, sz);
  return 0;
}
