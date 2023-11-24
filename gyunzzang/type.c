#include<stdio.h>

int main() {
  int i = 2;
  double f = 3.14;
  char c = '5';
  printf("i = %d\n", i);
  printf("f = %f\n", f);
  printf("c = %c\n", c);

  //아래에서 d가 출력하는 것이 무엇일까
  printf("%d\n", printf("Hello\n"));
  printf("Hello\n");
  printf("World\n");
  return 0;
}
