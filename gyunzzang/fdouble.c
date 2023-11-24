// 2023-09-26
//
#include<stdio.h>

int main() {
  FILE *fp = fopen("input.txt", "r");
  if (fp == NULL) {
    printf("Error in opening the input file\n");
    return 1;
  }
  int n;
  printf("Enter an integer: ");
  fscanf(fp, "%d", &n);
  printf("2 * %d = %d\n", n, n * 2);
}
