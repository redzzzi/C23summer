📜Table of Contents📜
===
[폰 노이만 구조](#폰-노이만-구조)&emsp;
[C언어 기본 구조](#c언어-기본-구조)&emsp;
[C언어 컴파일 과정](#c언어-컴파일-과정)
<br>

## 폰 노이만 구조
image from [here](https://yoons2owo.tistory.com/5)<br>
<img src="https://github.com/redzzzi/C23summer/assets/127263392/325896ee-ed33-414a-a26c-ec66c8533207" width="500px"><br>
* [CPU] ← [memory(RAM)] ← [storage(SSD)]
* 연산 수행과 관련하여 기억장치에 저장된 명령어를 통해 CPU에서 연산 수행.
<br><br>

## C언어 기본 구조
<br><br>

## C언어 컴파일 과정
```mermaid
flowchart LR
    A[helloworld.c] -->|전처리기| B[helloworld.i]
    B[helloworld.i] -->|컴파일러| C[helloworld.s]
    C[helloworld.s] -->|어셈블러| D[helloworld.o]
    D[helloworld.o] -->|링커| E[helloworld\n실행파일]
```
