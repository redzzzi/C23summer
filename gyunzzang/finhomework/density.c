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

  // 입력 버퍼에 남아 있는 개행 문자 처리
  scanf("%c", &type);

  // 입력 받은 행의 개수만큼 반복
  for (int i = 1; i <= col; i++) {
    // 행마다 알파벳 개수를 초기화
    int row_alpha = 0;

    // 행의 문자를 입력받음
    while (1) {
      scanf("%c", &type);

      if (type == '\n') {
        break;
      }
      if (type == ' ') {
        row_alpha++;
      }
      if (('a' <= type && type <= 'z') || ('A' <= type && type <= 'Z')) {
        alpha++;
        row_alpha++;
      }
    }
    if (row_alpha > row) {
      row = row_alpha;
    }
  }

  int area = row * col;

  printf("%.2f\n", density(alpha, area));
  // printf("alpha : %d\narea : %d\n", alpha, area);
  // printf("row : %d\ncol : %d\n", row, col);

  return 0;
}

