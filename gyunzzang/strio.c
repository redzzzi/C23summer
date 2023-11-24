// 2023-10-24 Array 중..

#include<stdio.h>
#include<string.h>

const int MAX = 80;

int main() {
  char line[MAX];
  int n = 1;
  while (line == fgets(line, MAX, stdin)) {
    printf("%3d: %s\n", n++, line);
  }
  return 0;
}
