// 2023-12-0%
//
#include <stdio.h>

#define PR1(x) printf(#x": %dKRW\n", x.val.krw)
#define PR2(x) printf(#x": %.2fUSD\n", x.val.usd)

typedef struct {
  enum {KRW, USD} kind;
  union price {
    int krw;
    float usd;
  } val;
} Price;

int main() {
  Price p1, p2;
  p1.kind = KRW, p1.val.krw = 2500;
  p2.kind = USD, p2.val.usd = 1.90;
  PR1(p1);
  PR2(p2);

  return 0;
}
