📜Table of Contents📜
===
[폰 노이만 구조](#폰-노이만-구조)&emsp;
[C언어 기본 구조](#c언어-기본-구조)&emsp;
[C언어 컴파일 과정](#c언어-컴파일-과정)
<br>

## 폰 노이만 구조
source from [here](https://yoons2owo.tistory.com/5)<br>
<img src="https://github.com/redzzzi/C23summer/assets/127263392/325896ee-ed33-414a-a26c-ec66c8533207" width="500px"><br>
* [CPU] ← [memory(RAM)] ← [storage(SSD)]
* 연산 수행과 관련하여 기억장치에 저장된 명령어를 통해 CPU에서 연산 수행.
<br><br>

## C언어 기본 구조
source from [here](https://atomic0x90.github.io/c-language/2019/05/23/Characteristics-and-structure-of-language-C.html) [also here](https://m.blog.naver.com/PostView.naver?isHttpsRedirect=true&blogId=2000pansung&logNo=222135219204)
```C
#include<stdio.h>
int main(void)
{
    printf("Hello, world!");
    return 0;
}
```
```#include<stdio.h>```
--
*  **파일처리  전처리기문**
* ```#```은  [*전처리기preprocessor*](https://ko.wikipedia.org/wiki/C_%EC%A0%84%EC%B2%98%EB%A6%AC%EA%B8%B0)를 의미. 컴파일 전 미리 처리하라는 명령어.
* ```<stdio.h>```은 ```.h``` 확장자를 갖는 [**헤더파일**](https://ko.wikipedia.org/wiki/%ED%97%A4%EB%8D%94_%ED%8C%8C%EC%9D%BC).
  <details>
  <summary>간략한 뜻</summary>
  <div markdown="1">
      
      💗 이미 만들어진 함수가 어떤 것이 있는지 정리해놓은 일종의 목차.
      💗 컴파일러에 의해 포함된 소스 코드의 파일.
      💗 특정 파일을 읽어 소스 파일에 포함해줌.
      💗 헤더파일이 사용되려면 컴파일러에 의해 불러져야 함.
  </details>
* 위 코드를 적음으로써 입출력, 반복문, 조건문 등을 사용할 수 있음.
<br><br>
➕ ```#define문```
* **형태처리 전처리기문**
<br><br>

```int main(void) { }```
--
* ```main```: C언어의 가장 기본적인 함수
    * 실행 시 ```{ }``` 사이의 구문이 순차적으로 실행
    * C언어는 main 함수부터 찾기 때문에, main 함수부터 실행
    * 해당 함수가 종료되면 프로그램도 종료
* ```int main()```같은 경우 **정수형을 반환하는 메인 함수**
<br><br>

명령문
--
* **입력문**: ```scanf()```, etc.
* **처리문**
    * 연산문: 산술, 대입, 증감, 비교, 논리, 비트, etc.
    * 제어문: 조건문, 반복문, etc.
* **출력문**: ```printf()```, etc.
<br><br>

```printf("Hello, world!");```
--
* ```출력(print)```와 ```형식(format)```이 합쳐진 **C언어 표준 출력 함수**
* *함수 선언, 전처리기*같은 경우를 제외하고 구문 끝에 ```;``` 붙이는 게 국룰
* 위 코드는 "Hello, world!" 부분 출력 의미
<br><br>

```return 0;```
--
* C로 구성된 프로그램은 main 함수를 제일 처음으로 실행하며 **main 함수에서 0이 반환되어야 정상적으로 종료되었다고 판단**
* 그냥 저거 쓰는게 C언어 표준임
<br><br>

## C언어 컴파일 과정
```mermaid
flowchart LR
    A[helloworld.c] -->|전처리기| B[helloworld.i]
    B[helloworld.i] -->|컴파일러| C[helloworld.s]
    C[helloworld.s] -->|어셈블러| D[helloworld.o]
    D[helloworld.o] -->|링커| E[helloworld\n실행파일]
```
