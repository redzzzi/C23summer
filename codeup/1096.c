// 2차원 배열 - 바둑판에 흰 돌 놓기
//
#include<stdio.h>

int main(void) {
  int n, i, j, x, y;
  int board[20][20]={};
  scanf("%d", &n);
  for (i=1; i<=n; i++) {
    scanf("%d %d", &x, &y);
    board[x][y]=1;
  }
  for (i=1; i<=19; i++) {
    for (j=1; j<=19; j++) {
      printf("%d ", board[i][j]);
    }
    printf("\n");
  }
  return 0;
}
