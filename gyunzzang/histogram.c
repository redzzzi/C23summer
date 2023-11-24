// 2023-11-21
//

#include<stdio.h>
#include<stdlib.h> // for rand, srand
#include<time.h>

const int LB = 1, UB = 40;

void set_seed() {
  srand((unsigned int)time(NULL));
}

int range_rand(int lower, int upper) {
  int width = upper - lower + 1;
  return rand() % width + lower;
}

void init(int a[], int sz) {
  for (int i=0; i<sz; ++i)
    a[i] = range_rand(1, 6);
}

void print(int a[], int sz) {
  for (int i=0; i<sz; ++i)
    printf("%d\n", a[i]);
}

void repeat(int n, char c) {
  for (int i=0; i<n; ++i) {
    putchar(c);
  }
}

void histogram(int a[], int sz) {
  for (int i=0; i<sz; ++i) {
    printf("[%2d]: ", a[i]);
    repeat(a[i], '#');
    puts("");
  }
}

int main() {
  const int NUM = 10;
  int a[NUM];
  set_seed();
  init(a, NUM);
  histogram(a, NUM);
  return 0;
}
