// 2023-11-16

#include<stdio.h>

void hello() {
  puts("Hello");
}

void hola() {
  puts("Hola");
}

int main() {
  // void (*fun)(); //1
  void (*fun)() = hello;
  // fun = &hello; //1
  (*fun)();
  return 0;
}
