// 2차원배열 - 바둑알 십자 뒤집기
//
#include<stdio.h>

int main(void) {
  int board[20][20]={}; 
  int n, i, j, x, y;
  for (i=1; i<=19; i++) {
    for (j=1; j<=19; j++) {
      scanf("%d", &board[i][j]);
    }
  }
  scanf("%d", &n);
  for (i=1; i<=n; i++) {
    scanf("%d %d", &x, &y);
    for (j=1; j<=19; j++) {
      if (board[x][j]==0) board[x][j]=1;
      else board[x][j]=0; 
    }
    for (j=1; j<=19; j++) {
      if (board[j][y]==0) board[j][y]=1;
      else board[j][y]=0;
    }
  }
  for (i=1; i<=19; i++) {
    for (j=1; j<=19; j++) {
      printf("%d ", board[i][j]);
    }
    printf("\n");
  }
}
