#include <stdio.h>
#include <string.h>

int main() {
  char line[] = "Hello world";
  char *word;
  
  printf("strlen(\"%s\") = %d\n", line, strlen(line));
  printf("sizeof(\"%s\") = %d\n", line, sizeof(line));

  word = strtok(line, " ");
  do {
    puts(word);
    word = strok(NULL, " ");
  } while (word != NULL);
  return 0;
}

