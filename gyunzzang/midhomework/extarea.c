#include<stdio.h>
#include<math.h>

int main() {
  for (double e = 0.0; e < 5.0; e++) {
    double dunit = pow(10.0, e * 3.0), bunit = pow(2.0, e * 10.0);
    printf("%13.0f vs %13.0f\n", dunit, bunit);
  }
  return 0;
}
