// 2023-12-05
//
#include <stdio.h>
#include <string.h>

int main() {
  char *ss[] = {"Hello", "Hola", "Sain uu", "Ahnyeong", "Hola"};
  int sz = sizeof ss / sizeof *ss, hola_count = 0;
  for (int i=0; i<sz; i++) {
    if (strcmp(ss[i], "Hola") == 0) {
      hola_count++;
    }
  }
  printf("Number of 'Hola' in the string array: %d\n", hola_count);
  return 0;
}
