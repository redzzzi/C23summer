// 2023-11-23
// 10.2 Programming Lab 10: jewels.c

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int distance(int r1, int c1, int r2, int c2, int map) {
  int d = abs(r1-r2)+abs(c1-c2);
  return d;
}

int main() {
  int row = 0, col = 0, value = 0;
  scanf("%d %d", &row, &col);

  int map[row][col];
  int rcur = 0, ccur = 0;
  
  int no_location = 1;
  for (int r=0; r<row; r++) {
    for (int c=0; c<col; c++) {
      scanf("%d", &map[r][c]);
      if (map[r][c] == -1) {
        rcur = r;
        ccur = c;
        no_location = 0;
      }
    }
  }

  // for debugging
  // for (int i=0; i<row; i++) {
  //   for (int j=0; j<col; j++) {
  //     printf("%d ", map[i][j]);
  //   }
  //   printf("\n");
  
  // for debugging
  // int count = 0;

  int near = row + col;
  for (int i=0; i<row; i++) {
    for (int j=0; j<col; j++) {
      // for debugging
      // if (map[i][j] == 0) {
      //   count++;
      // }
      int update = distance(i, j, rcur, ccur, map[row][col]);
      if ((update < near) && map[i][j] != 0 && map[i][j] != -1) {
        near = update;
      }
    }
  }
  if (no_location) {
    near = 0;
  }
  printf("%d\n", near);
  // for debugging
  // printf("current location : (%d, %d)\n", rcur, ccur);
  // printf("number of zero : %d\n", count);
  
  return 0;
}
