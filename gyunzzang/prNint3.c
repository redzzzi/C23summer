// 2023-11-28
//

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

int main() {
  int *p, i;
  long long n;

  printf("How many integers? ");
  scanf("%lld", &n);
  assert(n > 0);
  p = (int *) malloc(n * sizeof(int));
}
