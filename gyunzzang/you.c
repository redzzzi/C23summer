#include <stdio.h>
#include <string.h>

int main() {
  const int MAX_LEN = 100;
  char line[MAX_LEN];

  if (fgets(line, MAX_LEN, stdin) == NULL)
    return -1;

  int cmp = 0; // cmp 변수 초기화

  for (int i = 0; line[i] != '\0'; i++) {
    if ('a' <= line[i] && line[i] <= 'z')
      line[i] -= 32; // 소문자를 대문자로 변환
  }

  int result; // result 변수 선언

  char *word = strtok(line, " \n");
  do {
    puts(word);
    result = 0; // result 변수 초기화
    for (int j = 0; word[j] != '\0'; j++) {
      result += word[j] - 'A' + 1; // 문자의 아스키 코드 값을 사용하여 계산
    }
    printf("%d\n", result);
    if (result >= cmp)
      cmp = result;
  } while (word = strtok(NULL, " \n"));

  printf("%d\n", cmp);

  return 0;
}

