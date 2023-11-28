// 2023-11-28
//

#include<stdio.h>

int main() {
  int a[5], i;
  printf("Enter five integers: \n");
  for (i=0; i<5; ++i) {
     scanf("%d", &a[i]);
  }
  printf("Integers in reverse: \n");
  for (i=4; i>=0; --i) {
     printf("%d ", a[i]);
  }
  printf("\n");
  return 0;
}
