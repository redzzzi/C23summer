// 2023-11-28
//

#include<stdio.h>
#include<stdlib.h>

int main() {
  int *p, n, i;

  printf("How many integers? \n");
  scanf("%d", &n);
  
  p = (int *) malloc(n * sizeof(int));

  printf("Enter %d integers: \n", n);
  for (i=0; i<n; ++i) {
    scanf("%d", &p[i]);
  }
  printf("Integers in reverse: \n");
  for (i=n-1; i>=0; --i) {
    printf("%d ", p[i]);
  }
  printf("\n");

  free(p);

  return 0;
}
