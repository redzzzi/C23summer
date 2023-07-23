// 문장 1개 입력받아 그대로 출력하기
//
#include<stdio.h>

int main() {
  char sentence[51];
  scanf("%s", sentence);
  printf("%s\n", sentence);
}

// 해당 코드에서 사용된 scanf()는 공백을 기준으로 출력함
// 따라서 "hello world"와 같은 문자열을 입력하였을 때
// "hello"만 출력이 됨

