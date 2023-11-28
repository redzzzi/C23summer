// 2023-11-28
//

#include<stdio.h>
#include<stdlib.h>

int main() {
  int n, i;

  printf("How many integers? \n");
  scanf("%d", &n);
  int p[n];
  
  printf("Enter %d integers: \n", n);
  for (i=0; i<n; ++i) {
    scanf("%d", &p[i]);
  }
  printf("Integers in reverse: \n");
  for (i=n-1; i>=0; --i) {
    printf("%d ", p[i]);
  }
  printf("\n");

  return 0;
}
