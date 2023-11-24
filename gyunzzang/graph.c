#include<stdio.h>
#include<math.h>

double f(double);
void pr_space(int);

int main() {
  const double Y_MAX = 4.0, Y_INCR = 1.0, X_PER_Y = 2.0;

  for (double y = 0.0; y<Y_MAX; y+=Y_INCR) {
    double x = f(y);
    printf("%5.2f|", x);
    pr_space(round(x*X_PER_Y));
    printf("+\n");
  }
  return 0;
}

double f(double y) {
  return pow(2.0, y);
}
void pr_space(int indent) {
  for (int i=0; i<indent; i++)
    putchar(' ');
}
