// 1차원배열 - 이상한 출석 번호 부르기 3
//
#include<stdio.h>

int main(void) {
  int i, n, head; scanf("%d", &n);
  int atd[n];
  head=23;
  for (i=0; i<n; i++) {
    scanf("%d", &atd[i]);
    if (head>atd[i]) {
      head=atd[i];
    }
  }
  printf("%d\n", head);
  return 0;
}
