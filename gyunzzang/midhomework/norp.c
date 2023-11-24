// 두번째 과제 2023-09-07

#include<stdio.h>

int main() {
  
  int num;
  scanf("%d", &num);
  
  if (num > 0) {
    printf("%+d\n", num+1);
  } else if (num < 0) {
    printf("%d\n", num-1);
  } else {
    printf("+0\n");
  }
  return 0;
}
