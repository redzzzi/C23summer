// 2023-11-16
// 9.1 Finding a Character

#include<stdio.h>
#include<string.h>

int main() {
  char from[] = "Hello Pointer?";
  char what[] = "HoLa";

  for (char *p = what; *p; p++) {
    // printf("strchr is <%s>\n", strchr(from, *p)); //for debugging
    if (strchr(from, *p) != NULL) {
      printf("'%s' has '%c'.\n", from, *p);
    } else {
      printf("'%s' does not have '%c'.\n", from, *p);
    }
  }
  return 0;
}
