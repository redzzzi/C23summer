#include<stdio.h>
#include<string.h>

int main() {
  char first[40], second[40];

  scanf("%s %s", first, second);
  
  if (strlen(first) >= strlen(second)) {
    for (int i=0; i<strlen(first); i++) {
      printf("%c", first[i]);
      printf("%c", second[i]);
    }
    printf("\n");
  } else {
    printf("_\n");
  }
  return 0;
}
