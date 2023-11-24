// 2023-11-11
// 8.2 Programming Assignment 8: finding.c

#include <stdio.h>
#include <ctype.h>

int isvowel(char c) {
  c = tolower(c); 
  switch (c) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      return 1;
  default:
      return 0;
  }
}

int main() {
  char code[98];
  int x = 0, y = 0;
  int xpre, ypre;

  fgets(code, sizeof(code), stdin);
  
  char *s = code;
  char c;
  
  // int i = 0;
  // for (int i = 0; code[i] != '\0' && code[i] != '\n'; i++) {  
  while ((c = *s++) != '\0' && c != '\n') {
  // char c = code[i];

  if (isupper(c)) {
      break;
    }

  switch (c) {
    case ' ':
      // retracting a step
      // if (x != 0 || y != 0) {
          // x -= 1;
      // }
      x = xpre;
      y = ypre;
      break;
    default:
      // move according to the rules
      xpre = x;
      ypre = y;
      if (isalpha(c)) {
        if (isvowel(c)) {
          x += 1;
        } else {
         // check if consonant
          y += 1;
        }
      }
  }
  }

  printf("%d %d\n", x, y);

  return 0;
}

