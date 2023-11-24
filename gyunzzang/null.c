#include<stdio.h>

int main() {
  char *p = "10.23";

  while (*p != '\0') {
    printf("%c\n", *p);
    p++;
  }

  return 0;
}
