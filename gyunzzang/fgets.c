// 2023-09-26
//
#include<stdio.h>

int main() {
  const int MAX = 26;
  char buf[MAX];
  while (fgets(buf, MAX, stdin) == buf)
    fputs(buf, stdout);
  return 0;
}
