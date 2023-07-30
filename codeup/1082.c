// 종합 - 16진수 구구단?
//
#include<stdio.h>

int main(void) {
  unsigned int hexa, i;
  scanf("%x", &hexa);
  
  for (i=1; i<=15; i++) {
    printf("%X*%X=%X\n", hexa, i, hexa*i);
  }
  return 0;
}
