// 2023-09-26
//
#include<stdio.h>

int main() {
  FILE *of = fopen("hello.out", "w");
  fprintf(of, "Hello, world !\n");
  fclose(of);
  return 0;
}
