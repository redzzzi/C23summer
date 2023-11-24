// 2023-11-23
// 10.1 Using Constant

#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#include<stdbool.h>

bool is_less(int a, int b) {
  return a < b;
}

int main() {
  int min = INT_MAX;
  int n[] = {5, -2, 7, -5, -10, 25, 12}, sz = sizeof n / sizeof *n;
  
  for (int i=0; i<sz; ++i) {
    if (is_less(abs(n[i]), min) == true) {
      min = abs(n[i]);
    }
  }
  printf("min. dist: %d\n", min);

  return 0;
}
