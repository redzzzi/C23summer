// 2023-11-28
//

#include<stdio.h>
#include<stdlib.h>

int sum(int a[], int size) {
  return (size == 0)? 0: a[size-1] + sum(a, size-1);
}

int* column(int row, int col, int a[row][col], int j) {
  int *c = (int *)malloc(sizeof(int) * row);
  for (int i =0; i < row; i++) {
    c[i] = a[i][j];
  }
  return c;
}

int main() {
  int m[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int row = sizeof m /  sizeof *m;
  int col = sizeof *m / sizeof **m;

  for (int j =0; j < col; j++) {
    int *c = column(row, col, m, j);
    printf("sum_of_col(%d) = %d\n", j, sum(c, row));
    free(c);
  }
  return 0;
}
