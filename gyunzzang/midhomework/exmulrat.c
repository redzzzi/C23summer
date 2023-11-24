// 6 Rational Number

#include<stdio.h>

int gcd(int a, int b) {
  // assuming positive numbers only
  if (a == b)
    return a; // 두 수 자체가 최대 공약수
  else if (a > b)
    return gcd(b, a); // 항상 a가 b보다 작거나 같게 만들기
  else
    return gcd(a, b - a);
}

int main() {
  int a, b;

  scanf("%d%d", &a, &b);
  printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));

  return 0;
}
