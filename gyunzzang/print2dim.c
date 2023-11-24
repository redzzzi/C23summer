// 2023-11-21
// Multi-Dimensional Arrays

#include<stdio.h>

int main() {
  int y[][3] = {{1, 3, 5}, {2, 4, 6}};
  int rows = sizeof y / sizeof y[0];
  // int cols = sizeof y[0] / sizeof y[0][0];
  int cols = sizeof *y / sizeof **y;

  for (int i=0; i<rows; i++) {
    for (int j=0; j<cols; j++) {
      // printf("%d ", y[i][j]);
      printf("%d%s", y[i][j], (j==cols-1)?"":" ");
    }
    printf("\n");
  }
  return 0;
}
