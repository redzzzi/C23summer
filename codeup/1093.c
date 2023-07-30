// 1차원 배열 - 이상한 출석 번호 부르기 1
//
# include <stdio.h>

int main ( void ) {
  int num, attendance;
  int count[24]={};
  scanf("%d", &num);
  for (int i=0; i<num; i++) {
    scanf("%d", &attendance);
    count[attendance-1]+=1;
  }
  for (int j=0; j<23; j++) {
    printf("%d\n", count[j]);
  }
  return 0;
}
