// 3. Floating-Point Numbers in Binary

#include<stdio.h>

int main() {
  int pizza = 0, person = 1;
  double share = 0.0;

  fscanf(stdin, "%d%d", &pizza, &person);
  share = pizza;
  share /= person;
  fprintf(stdout, "%f pizza/person\n", share);
  if (share >= 0.5)
    fputs("No less than 0.1 (in binary) pizzas can be shared!\n", stdout);

  return 0;
}
