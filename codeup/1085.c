// 종합 - 소리 파일 저장용량 계산하기
//
#include<stdio.h>

int main(void) {
  long long int h, b, c, s;
  scanf("%lld %lld %lld %lld", &h, &b, &c, &s);
  double mega = (h*b*c*s)/(float)(8*1024*1024);
  printf("%0.1lf MB\n", mega);
  return 0;
}
