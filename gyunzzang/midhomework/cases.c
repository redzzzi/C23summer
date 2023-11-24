// The Cases of Characters - 하;; 과제 있는지 꼭 확인하기 ㅠ.ㅠ
#include<stdio.h>

int main() {
  char alpha;
  scanf("%c", &alpha);

  if (alpha >= 65 && alpha < 90) {
    printf("%c\n", alpha+1);
  } else if (alpha > 97 && alpha <= 122) {
    printf("%c\n", alpha-1);
  } else if (alpha == 90) {
    printf("%c\n", 65);
  } else {
    printf("%c\n", 122);
  }

  return 0;
}
