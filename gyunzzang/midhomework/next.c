// 첫번째 과제 2023-09-07

#include<stdio.h>

int main() {
  int n = 0; // 처음에 그냥 바로 n으로 받았는데 100점 안 나옴 왜지?
  int rv = scanf("%d", &n); // n에 '입력값 숫자'가 들어감
  // rv값은 입력받을 때의 유효성을 검사 후, 0 또는 1 리턴
  // 숫자가 들어오면 format d에 맞기 때문에 1 반환

  if (rv == 1) {
    printf("%d\n", n+1);
  } else {
    printf("NaN\n");
  }

  return 0;
}
