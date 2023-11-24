#include<stdio.h>

int sum_range(int lb, int ub) {
  int sum = 0, i = 0;
  for (i = lb; (i <= ub); i += 1) {
    sum += 1;
  }
  return sum;
}

int main() {
  int lb, ub;
  scanf("%d%d", &lb, &ub);
  printf("%d\n", sum_range(lb, ub));
  return 0;
}
