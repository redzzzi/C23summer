## type casting 우선 순위
* 사이즈가 다를 때 >> **더 큰 것**을 따른다!
* unsigned + signed >> **unsigned**
* 실수 + 정수 >> **실수**
<br>

## C언어 프로그램의 구조
* 선언*declaration*
* 문장*sentence*
* 블록*block*
<Br>

## [논리 연산자](https://hellodoor.tistory.com/145)

|연산자|의미|기본 형식|기능|
|:---:|:---:|:---:|:---:|
|&&|논리곱<Br>(and)|x && y|x와 y의 값이 모두 참이면 참,<br>하나라도 거짓이면 거짓|
|\|\||논리합<br>(or)|x \|\| y|x나 y 중 하나라도 참이면 결과값은 참,<br>둘 다 거짓이면 거짓|
|!|논리 부정<br>(not)|! x|X의 논리 값이 참이면 거짓,<br>거짓이면 참|

## C언어에서의 true, false

* True: 0 이외의 모든 값
* False: 0
<details>
<summary><code>백준 10952</code></summary>
<div markdown="1">

<br>

  ```c
  // A + B - 5
  //
  #include<stdio.h>
  
  int main( void ) {
    int a, b;
  
    while (1) {
      scanf("%d %d", &a, &b);
      if (a==0 && b==0) {
        break;
      }
      else {
        printf("%d\n", a+b);
      }
    }
    return 0;
  }
  ```
</details>

## 배열 범위 벗어난 출력
