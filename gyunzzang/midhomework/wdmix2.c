#include<stdio.h>
#include<string.h>

int main() {
  char whole[80];
  char *first, *second;

  fgets(whole, sizeof(whole), stdin);
  first = strtok(whole, " ");
  second = strtok(NULL, " ");
  
  if ((strlen(first)<=40)&&(strlen(second)<=39)) {
    printf("_\n");
  } else {
    if (strlen(first) >= strlen(second)-1) {
      for (int i=0; i<strlen(first); i++) {
        printf("%c", first[i]);
        printf("%c", second[i]);
      }
      printf("\n");
    } else {
      printf("_\n");
    }
  }
  
    // printf("the first is \"%s\"\n", first);
    // printf("the second is \"%s\"\n", second);
    // printf("the first len is %ld\n", strlen(first));
    // printf("the second len is %ld\n", strlen(second));
  return 0;
}
