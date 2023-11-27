#include <stdio.h>

// 전체 공식
double density(int p, int A) {
  return (double)p / A * 100;
}

int main() {
  int row = 0, col = 0, alpha = 0;
  char type;

  // 행의 개수를 입력받음
  scanf("%d", &col);

  // 개행 문자를 처리
  scanf("%c", &type);

  // 입력 받은 행의 개수만큼 반복
  for (int i = 1; i <= col; i++) {
    for (int j = 1; j <= row; j++) {
      // 문자를 입력 받음
      scanf("%c", &type);

      // 알파벳인 경우에만 alpha를 증가시키고, 띄어쓰기인 경우에는 행을 증가
      if (('a' <= type && type <= 'z') || ('A' <= type && type <= 'Z')) {
        alpha++;
      }

      // 다음 행으로 넘어가기 전에 개행 문자를 읽음
      scanf("%c", &type);
    }
  }

  int area = row * col;
  printf("%.2f\n", density(alpha, area));

  return 0;
}

