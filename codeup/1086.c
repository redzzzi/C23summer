// 종합 - 그림 파일 저장용량 계산하기
//
#include<stdio.h>

int main(void) {
  long long int w, h, b;
  scanf("%lld %lld %lld", &w, &h, &b);
  double volume = (w*h*b)/(8*1024.0*1024.0);
  printf("%.2f MB\n", volume);

  return 0;
}
