// 2023-12-14
// 13.1 Bit Masking
#include <stdio.h>

int bits(unsigned int n) {
  int cnt = 0;
  while (n > 0) {
    cnt += n & 1;
    n >>=1;
  }
  return cnt;
}

int main() {
  struct {
    unsigned int a: 4, b: 4;
  } n = {0xA, 0xB};

  printf("ones(%X) = %d\n", n.a, bits(n.a));
  printf("ones(%X) = %d\n", n.b, bits(n.b));

  return 0;
}
