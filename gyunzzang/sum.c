#include<stdio.h>

int main() {
  int sum = 0, i = 0;
  int lb, ub;

  scanf("%d%d", &lb, &ub);

  i = lb;
  while (i <= ub) {
    sum += i;
  }

  printf("%d\n", sum);

  return 0;
}
