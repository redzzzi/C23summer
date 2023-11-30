// 2023-11-30
// 11.1 Making a String Type

#include<stdio.h>
#include<string.h>

typedef struct {
  char *s;
  int len;
} String;

#define MKSTR(s) {s, strlen(s)}

int main() {
  String s1 = MKSTR("Hello C");
  String s2 = MKSTR("Hola C++");

  printf("s1(%d) = '%s'\n", s1.len, s1.s);
  printf("s2(%d) = '%s'\n", s2.len, s2.s);

  return 0;
}
