// 2023-12-07
//
#include <stdio.h>

typedef struct Price {
  enum {KRW, USD} tag;
  union {
  int    krw;
  double usd;
  };
} Price;

int main() {
  Price price[] = {{KRW, .krw = 3000}, {USD, .usd = 25.99}};
  int size = sizeof price / sizeof *price;

  for (int i=0; i<size; i++)
    if (price[i].tag == KRW)
      printf("price[%d] = KRW %d\n", i, price[i].krw);
    else
      printf("price[%d] = USD %.2f\n", i, price[i].usd);
  return 0;
}
