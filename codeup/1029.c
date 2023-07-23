// 실수 하나 입력받은 후 그대로 출력하기 222
//
#include<stdio.h>

int main() {
  double point;

  scanf("%lf", &point);
  printf("%.11lf\n", point); //11자리까지 출력, 반올림
  
  return 0;
}
