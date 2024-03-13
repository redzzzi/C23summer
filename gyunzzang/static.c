// 2023-12-12
#include <stdio.h>

int f() { 
  // /*static*/ int x = 0;
  // return x++;
  static int x = 0;
  return ++x;
}
int main() {
  for (int i=0; i<5; i++)
    printf("%d\n", f());
  return 0;
}
