#include<stdio.h>

int main() {
  char *msg = "Hello";
  //-----------------------------------------------
  printf("%s\n", msg);
  msg ++ ; //해당 라인이 있을 때와 없을 때를 비교!!
  // msg += 4;
  printf("%c?\n", *msg);
  //-----------------------------------------------
  while (*msg != '\0') { //while 문에서 body 바꾸어 코드 활용
    printf("%c", *msg);
    msg++;
  }
  puts("");
  return 0;
}
