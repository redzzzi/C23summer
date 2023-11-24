#include<stdio.h>
#include<string.h>

int main() {
  const int MAX_LEN = 100;
  char line[MAX_LEN];

  if (fgets(line, MAX_LEN, stdin) == NULL)
    return -1;
  // printf("%s\n", line);
  for (int i=0; line[i] != '\0'; i++) {
    if (('a' <= line[i]) && (line[i] <= 'z'))
      line[i]-=32;
  }
  // char cmp[50];
  int result;
  // for ()
   result = k - 0x41 + 1;
  // printf("%d\n", result);
  // printf("%s", line);
  int cmp = 0;
  char *word = strtok(line, " \n");
  do {
    puts(word);
    result = word - 0x41 + 1;
    printf("%d\n", word);
    for (int j=0; j<strlen(word); j++)
      result = word[j] - 0x41 + 1;
    if (result >= cmp)
      cmp = result;
  } while (word = strtok(NULL, " \n"));
  printf("%d\n", cmp);
  return 0;
}
