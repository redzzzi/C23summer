## 📍scanf와 fgets의 차이
* 위 두 개 동시에 쓰려면(?) → 중간에 엔터 값을 비워주는 ```get char();```을 사용!
* fgets: 설정된 바이트만큼 또는 ```\n```가 나올 때까지 입력을 받음
    * 엔터 기준이므로 그 뒤의 문자를 입력받지 않음
    * buffer에 엔터를 비워줘야 함
<p align="right">ꉂ☺ᵎᵎᵎ</p>

## 📍f(flush)();
buffer을 비워주는 함수임
<p align="right">ꉂ☺ᵎᵎᵎ</p>

## 📍운영체제에서의 32bit와 64bit
|크기|32bit|64bit|
|:---:|:---:|:---:|
|프로세서 범용 레지스터|32bit(=4byte)|64bit(=8byte)|
|프로그램 카운터|4byte|8byte|
|메모리 어드레싱<sup>최대</sup>|32bit|64bit|
|어드레싱 모드 범위|4GB|256TB|

<pre><b>(메모리 크기)</b> = 2 <sup>bit의 수</sup> X 1B</pre>
* 4GB 계산 과정: 메모리크기=2<sup>32</sup>X1B=2<sup>2</sup>X2<sup>30</sup>X1B=4GB
* 16EB 계산 과정: 메모리크기=2<sup>64</sup>X1B=2<sup>4</sup>X2<sup>60</sup>X1B=16EB
   * *실제로는 하위 48bit만 사용하여 256TB의 어드레싱 모드 범위를 가짐*
<p align="right">ꉂ☺ᵎᵎᵎ</p>

### ✏️[프로그램 카운터](https://ko.wikipedia.org/wiki/%ED%94%84%EB%A1%9C%EA%B7%B8%EB%9E%A8_%EC%B9%B4%EC%9A%B4%ED%84%B0)<sub><i>명령어 포인터</i></sub>
* CPU 내부 레지스터 중 하나
* 다음에 실행될 명령어의 주소를 가지고 있어, 실행할 기계어 코드의 위치를 지정함
* 인텔 x86 계열 CPU에서는 IP<sub>Instruction Pointer</sub>라고 함
<p align="right">ꉂ☺ᵎᵎᵎ</p>

### ✏️프로세서 범용 레지스터
* 작은 데이터의 임시 저장공간
* 연산 처리<sub>연산 입력 또는 연산 결과 일시 저장</sub> 및 데이터의 주소 지정, 컴퓨터 장치 제어 역할
* (레지스터 비트 수)==CPU 1회 연산에 처리 가능한 데이터 비트
<p align="right">ꉂ☺ᵎᵎᵎ</p>

#### ➕[프로세서 레지스터](https://ko.wikipedia.org/wiki/%ED%94%84%EB%A1%9C%EC%84%B8%EC%84%9C_%EB%A0%88%EC%A7%80%EC%8A%A4%ED%84%B0)
* 컴퓨터의 프로세서 내에서 자료를 보관하는 아주 빠른 **기억 장소**.
* 현재 계산을 수행중인 값을 저장하는 데 사용.
* 프로세서==CPU
* 가장 빠른 속도로 접근 가능.

#### ➕[메모리 계층 구조](https://ko.wikipedia.org/wiki/%EB%A9%94%EB%AA%A8%EB%A6%AC_%EA%B3%84%EC%B8%B5_%EA%B5%AC%EC%A1%B0)
<p align="right">
   <img src="https://github.com/redzzzi/C23summer/assets/127263392/c0ee1d7b-681a-4ede-8c29-52fe402f30b5" width="300px">
</p>

* CPU가 메모리에 더 빨리 접근하기 위해 해당 계층이 존재함.
* 레지스터와 캐시는 CPU 내부에, 메모리는 CPU 외부에 존재. 하드디스크는 CPU가 직접 접근 불가[^id].
#### ✅메모리 계층 구조의 필요성✅

> 🤔사전 지식🤔
>> 🏷️[폰 노이만 구조](https://ko.wikipedia.org/wiki/%ED%8F%B0_%EB%85%B8%EC%9D%B4%EB%A7%8C_%EA%B5%AC%EC%A1%B0)
>> #### 🏷️[시스템 버스](https://dheldh77.tistory.com/entry/%EC%BB%B4%ED%93%A8%ED%84%B0%EA%B5%AC%EC%A1%B0-%EC%8B%9C%EC%8A%A4%ED%85%9C-%EB%B2%84%EC%8A%A4System-bus)
>> <img src="https://github.com/redzzzi/C23summer/assets/127263392/13c9e8d2-88c6-42b9-8fb5-7c6b432b5ba2" width="300px">
>>
>>   * 컴퓨터의 구성요소를 서로 연결하고 데이터 전달을 위한 경로
>>   * 주소 버스, 데이터 버스, 제어 버스로 구성
>>     1. ***주소 버스***
>>        * **CPU가 메모리의 어느 부분의 데이터에 접근할지** 나타냄
>>        * 메모리 주소나 I/O Unit 포트 번호 전달
>>        * CPU와 메모리는 <b>단방향</b>으로 데이터 전달이 가능한 버스 이용하므로, 주소 전달이 CPU에서 메모리로만 이루어짐
>>        * (CPU or 메모리)와 I/O Unit은 양방향으로 데이터 전달이 가능한 버스 사용
>>     2. ***데이터 버스***
>>        * (접근메모리부분→CPU or CPU→메모리) 방향으로 데이터 전달
>>        * 각 구성요소<sup>CPU, 메모리, I/O Unit</sup>는 양방향으로 데이터 전달이 가능한 버스 사용
>>     3. ***제어 버스***
>>        * **CPU가 메모리에 접근할지 안 할지** 제어 신호 전달
>>        * 컨트롤 신호 없으면 CPU와 메모리는 아무 일도 할 수 없음
>>        * Read와 Write 신호가 전달됨
>>        * 각 구성요소는 양방향으로 데이터 전달이 가능한 버스 사용
>> #### 💡CPU의 메모리 접근
>> <img src="https://github.com/redzzzi/C23summer/assets/127263392/535b5ea5-ccee-4ad5-b38e-777de483011e" width="300px">
>>
>>   * 위 3개의 버스를 통해 메모리에 접근함
>>   * 위 그림의 경우, 제어 신호 보내는 즉시 CPU가 메모리에 접근하는 것이 가능
  
<pre>
<b><i>CPU는 작은 메모리에 더 빨리 접근할 수 있다!</i></b><br>
   디코딩 속도를 통해 이를 설명할 수 있다. 아래 그림을 살펴보자.<br>
   <p align="center"><img src="https://github.com/redzzzi/C23summer/assets/127263392/ca4570c4-e40e-4b31-be0b-1ba73e07e25b" width="300px"></p>
   <상황>
   1. 1KB 메모리 2개를 사용해 2KB 메모리로 사용
   2. CPU가 두 메모리 중 원하는 메모리에 접근하고자 함
   
   <이후 작동 과정>
   🍀한 메모리에는 컨트롤 신호 미전송, 다른 한 메모리에는 전송
   🍀어떤 메모리 블록에 접근해야 하는지를 파악하는 디코딩 과정에서 시간 소요
   🍀더 큰 용량의 메모리 사용 경우, 더 많은 시간 소요<br>
   ⭐따라서 <b>데이터를 저장하는 메모리가 작아야 함!!</b>⭐
</pre>
<p align="right">ꉂ☺ᵎᵎᵎ</p>

# 📌포인터 <sup><i>⭐매우 헷갈리는 아이임⭐</i></sup>
[포인터의 개념 - TCPschool](http://www.tcpschool.com/c/c_pointer_intro)
<details>
   <summary>다른 파일에서 살짝 언급한 개념</summary>
   <div markdown="1">

   <br>
   <pre>💡 다른 변수 또는 데이터 구조의 <b>메모리 주소를 저장하는 변수</b> 💡</pre>
   
   * 포인터 변수 선언 방법: 변수 타입 뒤에 ```*``` 기호 사용
   * 사용 예시
     <br>
   
     ```c
     int num = 10;
     int *ptr = &num;
     printf("%d\n", *ptr); // 포인터를 통해 변수의 값 읽기
     *ptr = 20; // 포인터를 통해 변수의 값 수정
     printf("%d\n", num); // 변경된 값 출력
     ```
       * 포인터를 통해 변수를 수정할 때 ```&num = 20;```이라고 쓰면 안됨<br>
         ∵ ```&``` 연산자는 <b>변수의 주소를 나타내는 것일뿐, <i>변수를 가리키지 않음</i></b>
       <br>
       
       * ```*ptr = 20;```은 **ptr**이 가리키는 변수 **num**의 값을 수정함
    </div>
      
</details>
<details>
   <summary><code>포인터사용코드와 출력결과예상1</code></summary>
   <div markdown="1">

   <br>

   난이도: ★☆☆
   ```c
   #include <stdio.h>
   
   int main( void )
   {
   	int x = 10;
   	int *p = &x;
   	printf( "%d", *p );
   	return 0;
   }
   ```
</details>
<details>
   <summary><code>포인터사용코드와 출력결과예상2</code></summary>
   <div markdown="1">

   <br>

   난이도: ★☆☆
   ```c
   #include <stdio.h>
   
   int main( void )
   {
   	int x = 10;
   	int y = 20;
   	int *p1 = &x;
   	int *p2 = &y;
   	printf( "%d %d", *p1, *p2 );
   	return 0;
   }
   ```
</details>
<details>
   <summary><code>포인터사용코드와 출력결과예상3</code></summary>
   <div markdown="1">

   <br>

   난이도: ★☆☆
   ```c
   #include <stdio.h>
   
   int main( void )
   {
   	int x = 10;
   	int *p = &x;
   	*p = 20;
   	printf( "%d", x );
   	return 0;
   }
   ```
</details>
<details>
   <summary><code>포인터사용코드와 출력결과예상</code></summary>
   <div markdown="1">

   <br>

   난이도: ★☆☆
   ```c

```
</details>
<p align="right">ꉂ☺ᵎᵎᵎ</p>

## 📍주소값
* 데이터 주소값: 해당 데이터가 저장된 메모리의 시작 주소
   * 1바이트 크기 메모리 공간으로 나누어 표현됨
  
<p align="center">
   <img src="https://github.com/redzzzi/C23summer/assets/127263392/12dfd749-e4d8-4a0c-b153-cfe8318ddec6" width="200px">
</p>

* 타입의 바이트 수에 따라 뜻하는 출력값이 달라질 수 있음.
<p align="right">ꉂ☺ᵎᵎᵎ</p>

## 📍포인터의 포인터
<sup>진짜 헷갈림..</sup>
* 예제 코드와 메모리 그림

  ```c
  int x=7;        // 변수 선언
  int *ptr=&x;    // 포인터 선언
  int *pptr=&ptr; // *pptr==**ptr 포인터 참조
  ```
  
<p align="center">
   <img src="https://github.com/redzzzi/C23summer/assets/127263392/7d25295a-d070-4ab6-93bd-3c40b7586b58" width="200px">
</p>

<p align="center">
   <img src="https://github.com/redzzzi/C23summer/assets/127263392/74a730bb-bd03-40c7-8982-acd27ca925f4" width="700px">

* 32비트 운영체제에서 포인터 크기는 4바이트, **64비트 운영체제에서 포인터 크기는 8바이트**임
   * 메모리 접근을 위한 주소가 각각 32비트, 64비트만큼 가능하기 때문
* 메모리 주소값이 계속 바뀌는 이유: 가상 메모리와 [메모리 관리 기법](https://dheldh77.tistory.com/entry/%EC%9A%B4%EC%98%81%EC%B2%B4%EC%A0%9C%EB%A9%94%EB%AA%A8%EB%A6%AC-%EA%B4%80%EB%A6%AC-%EC%A0%84%EB%9E%B5Memory-Management-Strategy)의 동작으로 인해 프로세스들의 주소가 **동적으로 매핑되고 변경되기** 때문 <sub>→ 메모리의 효율성, 안정성, 다중 프로세스 관리 보장</sub>
<p align="right">ꉂ☺ᵎᵎᵎ</p>

[^id]: 접근하려면? 하드 디스크의 데이터를 메모리로 이동시킨 후, 메모리에서 접근해야 함. 다만, 아주 느린 접근만 허용.
