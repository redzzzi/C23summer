// 예제 1
//
#include<stdio.h>

double add(double d1, double d2) {
  return d1+d2;
}

int main (void) {
  double d1 = 1.3;
  double d2 = 7.6;
  double result = add(d1, d2);
  prinf("d1+d2 = %lf\n", add(d1, d2));

  return 0;
}
