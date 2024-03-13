// 2023-12-07
//
#include <stdio.h>

// test 1
// int id(int n) {
//   return n;
// }
// text 2
// int id(int *p) {
//   return *p;
// }
// test 3
// int id(void *p) {
//   int *q = (int *)p;
//   return *q;
// }
// test 4
int id(void *p) {
  return *(int *)p;
}

int main() {
  int x = 5;
  // printf("x = %d\n", id(x));
  printf("x = %d\n", id(&x));
  return 0;
}
