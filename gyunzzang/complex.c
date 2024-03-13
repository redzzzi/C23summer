// 2023-12-05
//
#include <stdio.h>

typedef struct __Complex{
  float re, im;
} Complex;

#define PRCOMPLEX(x) printf(#x" = (%.2f, %.2f)\n", x.re, x.im)

int main() {
  Complex x = {2.0, 3.0}, *p = &x;
  PRCOMPLEX(x);
  // (*p).re += (*p).im;
  p -> re += p -> im; // p가 만약에 포인터라면
  PRCOMPLEX((*p));
  return 0;
}
