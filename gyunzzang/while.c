// 2023-09-26
//
#include<stdio.h>

int main() {
  double d = 0.0;
  const double i = 0.1;
  while (d < 1.0) {
    printf("d = %.15f\n", d);
    d += i;
  }
  return 0;
}
