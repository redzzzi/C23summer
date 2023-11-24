#include<stdio.h>

void prIntVar(char *name, int value) {
  printf("%s\t = %d\n", name, value);
}

int main() {
  int one = 1, *to_one = &one;
  prIntVar("one", one);
  *to_one = one + 1;
  prIntVar("one", one);
  *to_one = *to_one + 1;
  prIntVar("one", one);
  (*to_one)++;
  prIntVar("*to_one", *to_one);

  return 0;
}
