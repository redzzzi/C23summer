// 2023-11-16
// 9.1 Finding a Character

#include<stdio.h>
#include<string.h>

int D(int a) {
  return a * 2;
}

int A(int a) {
  return a + 1;
}

int S(int a) {
  return a - 1;
}

int H(int a) {
  return a / 2;
}

int main() {
  // 최초 숫자
  int num = 0;
  scanf("%d\n", &num);

  char c;
  while (scanf("%c", &c) != EOF) {
    if (getchar() == '\n') {
      break;
    }
    if (c == 'D') {
      num = D(num);
    } else if (c == 'A') {
      num = A(num);
    } else if (c == 'S') {
      num = S(num);
    } else {
      num = H(num);
    }
    printf("here %d\n", num);
  }
  printf("%d\n", num);
  return 0;
}
