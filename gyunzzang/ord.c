#include<stdio.h>
#include<string.h>

int main() {
  char k;
  scanf("%c", &k);
  int result = 0;
  result = k - 0x41 + 1;
  printf("%d\n", result);
  return 0;
}
