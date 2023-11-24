// Assignment 2: The Cases of Characters
#include<stdio.h>

int main() {
  char c1 = 'A', c2 = 'B', c3 = 'a';

  if  (c1 < c2)
    printf("'%c' < '%c'\n", c1, c2);
  else
    printf("'%c' < '%c'\n", c1, c2);

  if  (c2 < c3)
    printf("'%c' < '%c'\n", c2, c3);
  else
    printf("'%c' < '%c'\n", c2, c3);

  if  (c3 < c1)
    printf("'%c' < '%c'\n", c3, c1);
  else
    printf("'%c' < '%c'\n", c3, c1);
  
  return 0;
}
