// 2023-11-07
//

#include<stdio.h>

int minimum(int a, int b) {
  int min;
  if (a < b) {
    min = a;
  } else {
    min = b;
  }
  return min;
}

int main() {
  int num1, num2, num3, min = 0;

  printf("Enter three integers: ");
  scanf("%d %d %d", &num1, &num2, &num3);

  min = minimum(num1, minimum(num2, num3));
  // if (num1 < num2) {
    // if (num2 < num3) {
  //     min = num1;
  //   } else {
  //     min = num3;
  //   }
  // } else {
  //   if (num2 < num3) {
  //     min = num2;
  //   } else {
  //     min = num3;

  printf("The minimum: %d\n", min);
  return 0;
}
