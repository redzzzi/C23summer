// 단어 1개 입력받아 나누어 출력하기
//
#include<stdio.h>

int main() {
  char sentence[21];
  int i;

  scanf("%s", sentence);

  for (i = 0; sentence[i] != '\0'; i++) {
    printf("\'%c\'\n", sentence[i]);
  }

  return 0;
}
