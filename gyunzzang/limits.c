// 2023-11-23

#include <stdio.h>
#include <limits.h>

int main() {
  printf("char range: %d ~ %d\n", CHAR_MIN, CHAR_MAX);
  printf("short range: %d ~ %d\n", SHRT_MIN, SHRT_MAX);
  printf("int range: %d ~ %d\n", INT_MIN, INT_MAX);
  printf("long range: %ld ~ %ld\n", LONG_MIN, LONG_MAX);

  return 0;
}
