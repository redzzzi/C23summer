// 2023-11-16
// 9.1 Function Pointer

#include<stdio.h>

int add(int a, int b) {
  return a+b;
}

int sub(int a, int b) {
  return a-b;
}

typedef int (*fun)(int, int);

int main() {
  fun f[] = {add, sub};
  int a = 10, b = 5, sz = sizeof f / sizeof *f;
  for (int i=0; i<sz; i++)
    printf("%d\n", f[i](a, b));
  return 0;
}
