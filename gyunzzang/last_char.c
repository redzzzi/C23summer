#include<stdio.h>

char last_char(char s[]);

int main() {
  char s1[] = "HELLO";
  char s2[] = "WORLD";

  printf("last('%s') = %d\n", s1, last_char(s1));
  printf("last('%s') = %d\n", s2, last_char(s2));

  return 0;
}

char last_char(char word[]) { // a pointer to a char
  int i = 0;
  char c = word[i];
  while (word[i] != '\0') {
    c = word[i];
    i++;
  }
  return c;
}
