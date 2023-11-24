// 2023-10-31
//
//

#include<stdio.h>

int sum(int p[], int sz) { // int *p
  if (sz == 0)
    return 0;
  return p[0] + sum(&p[1], sz-1);
}

int main() {
  int a[] = {1, 2, 3, 4};
  printf("%d\n", sum(a, sizeof a/sizeof a[0]));
  return 0;
}
