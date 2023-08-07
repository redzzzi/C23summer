## ASCII
0x41: A ~ 
0x61: a ~ 
0x30: 0 ~

## 함수의 필요성
* 코드 유지•보수의 용이함
* 효율성

## 함수 활용 예시
```c
int add(int a, int b) {
  return a+b;
}
```
```c
#include<stdio.h>

int add(int a, int b) {
  return a+b;
}

int main(void) {
  int result = add(1, 2);
  printf("Hello, world!\n");
  printf("The result is %d.\n", result);
  return 0;
}
```
