// 2023-11-24
// 10.1 Scanning a String

#include<stdio.h>

static char* strcpy(char t[], const char s[]) {
  char *rv = t;
  while (*t++ = *s++);
  return rv;
}

int main() {
  char *source = "Hello", target[10];

  strcpy(target, source);
  puts(source);
  puts(target);

  return 0;
}
