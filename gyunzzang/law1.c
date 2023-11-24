#include<stdio.h>

void prIntVar(char *name, int value) {
  printf("%s\t = %d\n", name, value);
}

int main() {
  int n;

  printf("Enter an integer n: ");
  scanf("%d", &n);

  prIntVar("n", n);
  prIntVar("*&n", *&n);
  prIntVar("*(&n)", *(&n));

  return 0;
}
