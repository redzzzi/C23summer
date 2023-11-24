#include<stdio.h>

char last_char(char s[]);

int main() {
  char word[] = "HELLO"; // an array of char
  char s2[] = "WORLD";

  printf("last('%s') = %c\n", word, last_char(word));
  printf("last('%s') = %c\n", s2, last_char(s2));
  printf("sizeof(word) = %d\n", sizeof(word));
  return 0;
}

char last_char(char word[]) { // a pointer to a char
  printf("sizeof(word) = %d\n", sizeof(word));
  char c = '\0';
  // for (int i )
  return c;
}
//
// last('WORLD') = 0
// sizeof(word) = 6
