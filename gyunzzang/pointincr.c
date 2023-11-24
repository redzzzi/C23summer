#include<stdio.h>

int main() {
  int n = 2, *p = &n;
  printf("%p\n", &n);
  printf("%p\n", p);
  printf("%p\n", p+1); //dangerous
  
  return 0;
}
