#include<stdio.h>
#include<stdbool.h>

bool is_even (int n) {
  return (n % 2 == 0);
}

bool is_odd (int n) {
  return (! is_even(n));
}

int main() {
  int sum = 0;
  int n = 0;

  while (scanf("%d", &n) == 1)
    // if (n % 2 != 0)
    if (is_odd(n))
      sum += n;
  printf("%d\n", sum);

  return 0;
}
