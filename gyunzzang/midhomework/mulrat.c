#include<stdio.h>

// gcd 1
// int gcd(int a, int b) {
//   if (b == 0)
//     return a;
//   return gcd(b, a%b);
// }

// gcd 2
int gcd(int a, int b) {
  if (a == b)
    return a;
  else if (a > b)
    return gcd(b, a);
  else
    return gcd(a, b - a);
}

typedef struct {
  int numer; // 분자
  int denom; // 분모
} Rational;

int main() {
  Rational ration1, ration2;
  scanf("%d %d", &ration1.numer, &ration1.denom);
  scanf("%d %d", &ration2.numer, &ration2.denom);

  int wholnum = ration1.numer * ration2.numer;
  int wholden = ration1.denom * ration2.denom;

  int fracgcd = gcd(wholnum, wholden);

  wholnum /= fracgcd;
  wholden /= fracgcd;

  printf("%d/%d\n", wholnum, wholden);

  return 0;
}
