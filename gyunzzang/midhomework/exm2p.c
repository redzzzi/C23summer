#include<stdio.h>

int main() {
  int pizza = 0;
  int person = 0;
  double share = 0.0;

  fscanf(stdin, "%d%d", &pizza, &person);
  share = pizza;
  share = share / person;
  fprintf(stdout, "%.3f pizza/person\n", share);

  return 0;
}


