// 몇시 몇분 몇초인지 입력받은 후, 몇분인지만 출력하기
//
#include<stdio.h>

int main() {
  
  int h, m, s;

  scanf("%d:%d:%d", &h, &m, &s);
  printf("%d\n", m);

  return 0;
}
