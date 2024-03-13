// 2023-11-30
// 11.1 Scanning in a String

#include <stdio.h>

int main() {
  char line[] = "10 20 30 40", *buf = line;
  int sum = 0, n = 0;

  // 원래 코드
  for (int pos=0; sscanf(buf, "%d%n", &n, &pos) == 1; buf += pos) {
    printf("%3d %4d\n", n, sum += n);
  }
  // 설명
  // buf가 line의 포인터로 설정돼있으므로, 제일 처음 값 10부터
  // 서식 지정자 %d을 통해 읽게 됨.
  // %n는 여태껏 읽어들인 문자들의 수를 의미하며 pos에 저장됨
  // buf 포인터는 line의 처음을 가리키지만 pos를 더함에 의해
  // 문자열을 따라 이동하여 계속 가리키는 위치가 갱신됨.
  // 이후 %d가 숫자를 계속 가리키면서 원래 숫자에 덧셈을 수행.

  // -----------------------------------------------------------
  //  무한 출력
  // for (int pos=0; sscanf(buf, "%d", &n) == 1; buf += pos) {
  //   printf("%3d %4d\n", n, sum += n);
  // }

  // 아무것도 출력이 안됨
  // for (int pos=0; sscanf(buf, "%n", &pos) == 1; buf += pos) {
  //   printf("%3d %4d\n", n, sum += n);
  // }
  // -----------------------------------------------------------
  return 0;
}
