// 연월일 입력받아 출력
//
#include<stdio.h>

int main() {
  int y;
  int m;
  int d;
  scanf("%d.%d.%d", &y, &m, &d);
  printf("%04d.%02d.%02d\n", y, m, d);
}
