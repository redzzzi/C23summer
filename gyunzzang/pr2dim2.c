// 2023-11-21
// Multi-Dimensional Arrays

#include<stdio.h>

void pr2dim(void *a0, int row, int col) {
  int (*a)[col] = a0;
  for (int i=0; i<row; i++) {
    for (int j=0; j<col; j++) {
      printf("%d%s", a[i][j], (j==col-1)?"":" ");
    }
    printf("\n");
  }
}

int main() {
  int y[2][3] = {{1, 3, 5}, {2, 4, 6}};
  int rows = sizeof y / sizeof y[0];
  int cols = sizeof *y / sizeof **y;
  pr2dim(y, rows, cols);
  return 0;
}
