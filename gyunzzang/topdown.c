#include<stdio.h>

int read_int();
void print_next(int);
void print_half(int);

int main() {
  int n = read_int();
  print_next(n);
  print_half(n);

}

#include<stdio.h>

int read_int() {
  int x;
  scanf("%d", &x);
  return x;
}

void print_next(int n) {
  printf("%d\n", n+1);
}

void print_half(int n) {
  printf("%f\n", n/2.0);
}
