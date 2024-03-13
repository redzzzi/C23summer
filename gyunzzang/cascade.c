// 2023-12-12
#include <stdio.h>
#define PR(x) printf(#x" = %d\n", x)

int main() {
  // 1
	// int a, b;
	// a = b = 5;
	// PR(a);
	// PR(b);
  // 2
  int a; double b;
  a = b = 3.14;
  printf("a" " = %d\n", a);
  printf("b" " = %f\n", b);
	return 0;
}
