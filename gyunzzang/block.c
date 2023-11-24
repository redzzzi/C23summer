#include<stdio.h>

extern int curr_max;

int main() {
  int i = 10;
  for (int i = 'A'; i<= 'Z'; ++i) {
    putchar(i);
    printf("\ni = %d\n", i);
    printf("\ncurr_max = %d\n", curr_max);
  }
  return 0;
}
