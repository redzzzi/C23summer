// 2023-11-10
// 8.1 Character Classes
// while과 *s++: 문자열 한 글자씩 순회

#include<stdio.h>
#include<ctype.h>

int main() {
  char p[] = "I like C programming!", c, *s = p;
  int n = 0, u = 0;
  while (c = *s++) {
    if (isalpha(c)) {
      n++;
      if (isupper(c))
        u++;
    }
  }
  printf("'%s' has %d alphabets including %d capital letters\n", p, n, u);
  return 0;
}
