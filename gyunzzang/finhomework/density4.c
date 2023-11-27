// 2023-11-24
// 10.2 Programming Assignment 10: density.c
#include<stdio.h>

// whole formula
double density(int p, int A) {
  return (double)p/A*100;
}

int main() {
  int row = 0, col = 0, alpha = 0;
  char type;
  int cmp = 0;
  scanf("%d\n", &col);
  for (int i=1; i<=col;) {
    scanf("%c", &type);
    if (type == '\n') {
      if (cmp < row) {
        cmp = row;
      }
      i++;
      row = 0;
    }
    if (type == ' ') {
      row++;  
    }
    if (('a' <= type && type <= 'z') || ('A' <= type && type <= 'Z')) {
      row++;
      alpha++;
    }
  }
  int area = row * col;
  printf("%f\n", density(alpha, area));
  printf("%.2f\n", density(alpha, area));
  // printf("row : %d\ncol : %d\n", row, col);

  return 0;  
}
