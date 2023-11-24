// 2023-10-31
//
//

#include<stdio.h>

typedef struct {int x, y;} Point;

void prpnt(Point p) {
  printf("(%d, %d)\n", p.x, p.y);
}

int main() {
  Point a = {2, 3};
  prpnt(a);
  return 0;
}
