#include<stdio.h>
#include<string.h>

int main() {
  const int MAX_LEN = 101;
  char line[MAX_LEN];

  if (fgets(line, MAX_LEN, stdin) == NULL)
    return -1;
  char *word = strtok(line, " \n");
  do {
    puts(word);
  } while (word = strtok(NULL, " \n"));

  return 0;
}
