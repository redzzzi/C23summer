// 2차원배열 - 성실한 개미
//
#include<stdio.h>

int main(void) {
  int maze[11][11]={};
  int i, j, what;
  for (i=1; i<=10; i++) {
    for (j=1; j<=10; j++) {
      scanf("%d", &maze[i][j]);
    }
  }
  
  int x1=2, y1=2;
  while (1) {
    if (maze[y1][x1]==0) {
      maze[y1][x1]=9;
      x1++;
    }
    else if (maze[y1][x1]==1) {
      x1--;
      y1++;
      if (maze[y1][x1]==0) {
        maze[y1][x1]=9;
        x1++;
      } else if (maze[y1][x1]==2) {
        maze[y1][x1]=9;
        break;
      }
      else {
        break;
      }
      }
    else if (maze[y1][x1]==2) {
      maze[y1][x1]=9;
      break;
    }
    else {
      break;
    }
  }

  for (i=1; i<=10; i++) {
    for (j=1; j<=10; j++) {
      printf("%d ", maze[i][j]);
    } printf("\n");
  }
  return 0;
}
