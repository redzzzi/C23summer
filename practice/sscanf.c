// 2023-12-02
// copyright -> https://modoocode.com/67
// sscanf 함수를 이용해서 문자열을 수로 바꾸기

#include <stdio.h>

int main() {
  char str[30] = "1234";
  int i;

  sscanf(str, "%d", &i);

  printf("Number from : '%s'.\n", str);
  printf("number : %d\n", i);

}
