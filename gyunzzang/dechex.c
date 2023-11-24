#include<stdio.h>

int main() {
  int n = 99;
  printf("%d in dec: %d\n", n, n);
  printf("%d in hex: %X\n", n, n); //16진수로 출력
  
  int m = 0x64;
  printf("%x in dec: %d\n", m, m);
  
  int two = 2; //0010 두번째 비트 구하기, 세번째 비트 구하려면 4로!
  printf("2nd(%X) = %d\n", n, n & two);
  printf("2nd(%X) = %d\n", m, m & two);
  
  int n2 = n & two;
  int m2 = m & two;
  printf("2nd(%X) = %d\n", n, n2);
  printf("2nd(%X) = %d\n", m, m2);
  
  int four = 4; // 0100
  printf("3rd(%X) = %d\n", n, n2 / four);
  printf("3rd(%X) = %d\n", m, m2 / four);

  return 0;
}
