// 2023-09-26 sizeof()
//
#include<stdio.h>

int main() {
  float f = 0.99999999999999F;
  double d = 0.99999999999999;
  long double ld = 0.999999999999L;
  printf("sizeof(f) = %f bytes\n", sizeof(f));
  printf("sizeof(d) = %x bytes\n", sizeof(d));
  printf("sizeof(ld) = %ld bytes\n", sizeof(ld));
  printf("f = %.20f\n", f);
  printf("d = %.20f\n", d);
  printf("ld = %.20f\n", ld);
  return 0;
}
