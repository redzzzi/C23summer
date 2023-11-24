// 2023-10-24
//
#include<stdio.h>

int main() {
  int x[5], sz = sizeof x / sizeof x[0];
  // int x[5] = {1, 2, 3, 4, 5, 6, 7};
  // int sz = sizeof x / sizeof x[0];
  printf("Enter five integers:\n");
  for (int i=0; i<sz; i++)
    scanf("%d", &x[i]);
  printf("Integers in reverse:\n");
  for (int i=sz; --i >= -1;)
    printf("%d ", x[i]);
  printf("\nThank you\n");
	return 0;
}
