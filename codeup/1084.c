// 종합 - 빛 섞어 색 만들기
//
#include<stdio.h>

int main(void) {
  int a, b, c, count=0;
  int R, G, B;
  scanf("%d %d %d", &R, &G, &B);
  
  for (a=0; a<R; a++) {
    for (b=0; b<G; b++) {
      for (c=0; c<B; c++) {
        printf("%d %d %d\n", a, b, c);
        count++;
      }
    }
  }
  printf("%d\n", count);
  return 0;
}
