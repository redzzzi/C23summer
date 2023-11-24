// 2023-09-14 The Binary Representation
//
#include<stdio.h>

int main() {
  // int number; scanf("%d", &number);

  //getchar() - 문자로 받은 걸 숫자로 변환 
  int number = 0, num1 = getchar(), num2 = getchar();
  int num3 = getchar();
  number = (num1-'0')*10 + (num2-'0');
  printf("number is %d\n", number);
  printf("num1 is %d\n", num1);
  printf("num2 is %d\n", num2);
  printf("num3 is %d\n", num3);
  //getchar() 숫자 변환 확인 위한 나눗셈 코드
  // int div; printf("number is %d\nnumber/2 is %d\n", number, number/2);

  int ans = (number&1)+((number>>1)&2)+((number>>2)&4)+((number>>3)&8);
  
  //비트 연산 확인을 위한 코드
  printf("----------------\n");
  printf("number&1: %d\n", number&1);
  printf("(number>>1)&2: %d\n", (number>>1)&2);
  printf("(number>>2)&4: %d\n",(number>>2)&4);
  printf("(number>>3)&8: %d\n", (number>>3)&8);
  printf("----------------\n");
  printf("ans is %d\n", ans);
  
  return 0;
}
