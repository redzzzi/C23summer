//buffer overflow
#include<stdio.h>

int main() {
  char s[12];
  printf("Enter a string: ");
  scanf("%11s", s); //원래 크기 12보다 하나 덜 입력받는게 안전
  printf("%s\n", s);
  return 0;
}
