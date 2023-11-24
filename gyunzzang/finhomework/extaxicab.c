// 2023-11-09
// 8.1 Converting a String
//

#include<stdio.h>
#include<stdlib.h>

int main() {
  char *s[] = {"100", "-12"};
  int sz = sizeof s / sizeof s[0], sum = 0;

  for (int i=0; i<sz; i++) {
    sum += atoi(s[i]);
  }
  printf("sum = %d\n", sum);

  return 0;
}
