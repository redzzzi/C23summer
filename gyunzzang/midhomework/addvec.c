#include<stdio.h>
#include<math.h>
#define pi acos(-1.0)

typedef struct {
  int x;
  int y;
} Vector;

double vector(int x1, int y1, int x2, int y2) {
  int x = x1 + x2;
  int y = y1 + y2;
  double t = (double)y/x;
  double theta = (atan(t)/pi)*180.0;
  // if (x==0 || t==0) { // 이 조건만 넣었을 때 아마 90점 나옴
  //   return 0.00;
  // }
  if (t==0) {
    return 0.00;
  }
  if (x==0) {
    return 90.00;
  }
  return theta;
}

int main() {
  Vector p, q;
  scanf("%d %d", &p.x, &p.y);
  scanf("%d %d", &q.x, &q.y);
  double result = vector(p.x, p.y, q.x, q.y);

  printf("%.2f\n", result);
  return 0;
}
