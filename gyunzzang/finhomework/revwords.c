// 2023-12-03
// 11.2 Programming Assignment 11: revwords.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char *s;
  int len;
} String;

// int punc(const char* word) {

// }

String filtersym(const char* word) {
  String result;
  char punc[11] = {'?', '!', '.', ',', ';', ':', '\'', '"', '-', '_'};
  printf("punc len is %d\n", strlen(punc));
  int cmp = 0;
  for (int i=0; i<strlen(word); i++) {
    for (int j=0; j<strlen(punc); j++) {
      if (word[i] == punc[j]) {
        result[i] = word[i+1];
        i++;
      }
      else {
        result[i] = word[i];
      }
    }
  }
  result[j] = '\0';
  return result.s;
}

String revstr(const char* word) {
  String result;
  result.len = strlen(word);
  result.s = (char *)malloc((result.len + 1) * sizeof(char));

  for (int i=0; i<result.len; i++) {
    result.s[i] = word[result.len - i - 2];
  }
  result.s[result.len - 1] = '\0';

  return result;
}

int main() {
  char str[256], *point = str;
  int n = 0;

  fgets(str, sizeof(str), stdin);

  for (int pos=0; sscanf(point, "%s", &n, &pos) == 1; point += pos) {
    String reversed = revstr(filtersym(n).s);
    printf("%s\n", reversed.s);
    printf("sscanf applied\n");
  }
  return 0;
}
