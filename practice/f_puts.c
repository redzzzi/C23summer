// puts와 fputs의 차이점

#include <stdio.h>

int main() {
  printf("-----------------------");
  printf("//////대상 문자열//////");
  printf("Fantastic OLD-FASHIONED");
  printf("Jannabi song is good.");
  printf("-----------------------");

  printf("여기는 puts 함수다!");
  puts("Fantastic OLD-FASHIONED");
  puts("Jannabi song is good.");

  printf("여기는 fputs 함수다!");
  fputs("Fantastic OLD-FASHIONED", stdout);
  fputs("Jannabi song is good.", stdout);

  return 0;
}
