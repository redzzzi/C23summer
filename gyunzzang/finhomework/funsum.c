// 2023-11-16
// 9.2 Programming Lab 9: funsum.c

#include<stdio.h>

// XOR
int type0(int a, int b) {
  return a ^ b;
}

// normal addition
int type1(int a, int b) {
  return a + b;
}

typedef int (*fun)(int, int);

int main() {
  int num = 0, index = 0;
  int nums[100] = {0};
  while (1) {
    scanf("%d", &num);
    nums[index] = num;
    index++;
    if (getchar() == '\n') {
      break;
    }
  }
  fun f[] = {type0, type1};
  int result = 0;
  if (nums[0]%2==0) {
    for (int i=0; i<index; i++) {
      result = f[0](nums[i], nums[i+1]);
      nums[i+1] = result;
      // printf("type0: the nums[%d] = %d\n", i, result); // for debugging
    }
    printf("%d\n", result);
  } else {
    for (int i=0; i<index; i++) {
      result = f[1](nums[i], nums[i+1]);
      nums[i+1] = result;
      // printf("type1: the nums[%d] = %d\n", i, result); // for debugging
    }
    printf("%d\n", result);
  }
  return 0;
}
