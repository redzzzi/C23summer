#include<stdio.h>

int add (int a, int b);

int main(void) { 
// int: return type, main: func name, void: parameter type

  int result = add(1, 2);
  printf("Hello, world!\n");
  printf("The result is %d.\n", result);
  return 0;
}

int add(int a, int b) {
  return a+b;
}
