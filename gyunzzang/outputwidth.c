#include<stdio.h>

int main() {
  int     i = 2;
  double  f = 3.14159265358979323846;
  char    c = '5';

  printf("         12345\n");
  printf("i = %10d\n", i);
  printf("f = %10f\n", f);
  printf("c = %10c\n", c);

  printf("%3d, %3d, %3d\n", 1, 30, 500);
  printf("%-3d, %-3d, %-3d\n", 1, 30, 500);
  return 0;
}
