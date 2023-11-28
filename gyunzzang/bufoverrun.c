// 2023-11-28
//

#include<stdio.h>
#include<string.h>

int main() {
  char s[] = "How fun to program in C?";
  int len = strlen(s);
  for (int i = len; i < 10 * len; ++i) {
    s[i] = 'Z';
  }
  printf("len('%s') = %d\n", s, strlen(s));
  return 0;
}
