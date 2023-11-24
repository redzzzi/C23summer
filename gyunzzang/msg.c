// 2023-09-26
//
#include<stdio.h>

int main() {
  char msg[80] = "Hello"; // msg[0], ..., msg[5] = '\0'
  printf("%s\n", msg);
  printf("%p\n", msg);
  scanf("%79s", msg); //overflow를 막기 위해 문자열 길이 제한
  printf("%s\n", msg);
  printf("%s\n", msg+1);
  char *p = msg;
  while (*p != '\0') {
    printf("%s\n", p);
    p++;
  }

  return 0;
}
