// 2023-11-28
//

#include<stdio.h>

int sum(int a[], int size) {
  return (size == 0)? 0: a[size-1] + sum(a, size-1);
}

int main() {
  int m[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int row = sizeof m /  sizeof *m;
  int col = sizeof *m / sizeof **m;
  for (int i =0; i < row; i++) {
    printf("sum_of_row(%d) = %d\n", i, sum(m[i], col));
  }
  return 0;
}
