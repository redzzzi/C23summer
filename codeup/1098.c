// 2차원배열 - 설탕과자 뽑기
//
#include<stdio.h>

int main(void) {
  int h, w, n, l, d, x, y, i, j;
  scanf("%d %d", &h, &w);
  int grid[100][100]={};
  
  scanf("%d", &n);
  int turn;
  for (turn=1; turn<=n; turn++) {
    scanf("%d %d %d %d", &l, &d, &x, &y);
    if (d==0) {
      for (j=y; j<y+l; j++) {  // 좌표칸 포함한 길이이기 때문에 l 범위 잘 잡아야 함
        if (grid[x][j]==0) grid[x][j]=1;
      }
    } 
    else {
      for (j=x; j<x+l; j++) {
        if (grid[j][y]==0) grid[j][y]=1;
      }
    }
    /* 디버깅 코드
    for (i=1; i<=h; i++) {
      for (j=1; j<=w; j++) {
        printf("%d", grid[i][j]);
      }
      printf("\n");
    }*/
  }
  for (i=1; i<=h; i++) {
    for (j=1; j<=w; j++) {
      printf("%d ", grid[i][j]);
    }
    printf("\n");
  }
}
