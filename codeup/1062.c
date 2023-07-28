// 비트단위논리연산 - 비트단위로 XOR 하여 출력!

#include<stdio.h>

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d\n", a^b); // ^은 서로 다를 때 1을 리턴함

  return 0;
}
