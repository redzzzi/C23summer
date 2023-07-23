// 문장 1개 입력받아 그대로 출력하기!
//
#include<stdio.h>

int main() {
  char data[2001];  // data는 문자열변수 이름임
  fgets(data, 2000, stdin);  // 2000은 문자열 최대 크기를 의미
  printf("%s", data);
}
