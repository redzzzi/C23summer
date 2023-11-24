// 2023-11-09
// 8.2 Programming Lab 8: taxicab.c
// hint: using fgets(), applying switch() to character

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
  char clue[10];
  char *value;
  int east=0, west=0, south=0, north=0;

  while (fscanf(stdin, "%s", clue) == 1) {
    if (getchar() == '\n') {
      break;
    }
    char *inst = strtok(clue," ");
    value = strtok(NULL, " ");
    char *d = strtok(NULL, " ");
    printf("%s\n%s\n", inst, d);
  }
  return 0;
}
