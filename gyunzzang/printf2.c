#include<stdio.h>

int add (int x) { return x + 1; }
int main() {
  // printf("Hello");
  printf("\n%d\n", add(printf("Hello")));
  return 0;
}
