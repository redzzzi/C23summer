#include<stdio.h>

struct A {
  int i;
  char c;
  short s;
};

struct B {
  int i;
  long long l;
};

int main(void) {
  struct A a; // 해당 타입에 a라는 변수를 만들어주는 것! - 변수를 만들어줘야 a에 대한 공간이 생기기 때문
  struct B b; // 위 코드에서 구조체 끝에 별칭을 붙여서 선언할 수도 있음
  printf("a.i: %p\n", &a.i);
  printf("a.c: %p\n", &a.c);
  printf("a.s: %p\n", &a.s);
  printf("b.i: %p\n", &b.i);
  printf("b.l: %p\n", &b.l);
}
