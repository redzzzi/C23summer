// 2023-10-19 factorial

#include<stdio.h>

int fact(int n) {
  if (n == 0)
    return 1;
  return n * fact(n - 1);
}

int main() {
  for (int n = 0; n <= 12; n++) // 15로 설정했을 때, overflow 발생 -> type을 long으로!
    printf("%2d != %10d\n", n, fact(n));
  return 0;
}
