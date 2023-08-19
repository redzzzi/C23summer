## 📍scanf와 fgets의 차이
* 위 두 개 동시에 쓰려면(?) → 중간에 엔터 값을 비워주는 ```get char();```을 사용!
* fgets: 설정된 바이트만큼 또는 ```\n```가 나올 때까지 입력을 받음
    * 엔터 기준이므로 그 뒤의 문자를 입력받지 않음
    * buffer에 엔터를 비워줘야 함

## 📍f(flush)();
buffer을 비워주는 함수임

## 📍운영체제에서의 32bit와 64bit
|크기|32bit|64bit|
|:---:|:---:|:---:|
|프로세서 범용 레지스터|32bit(=4byte)|64bit(=8byte)|
|프로그램 카운터|4byte|8byte|
|메모리 어드레싱<sup>최대</sup>|32bit|64bit|
|어드레싱 모드 범위|4GB|256TB|
<br>

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
<pre>
✅메모리 계층 구조의 필요성✅<br>
   <b><i>CPU는 작은 메모리에 더 빨리 접근할 수 있다!</i></b>
</pre>

### ✏️[프로그램 카운터](https://ko.wikipedia.org/wiki/%ED%94%84%EB%A1%9C%EA%B7%B8%EB%9E%A8_%EC%B9%B4%EC%9A%B4%ED%84%B0)<sub><i>명령어 포인터</i></sub>
* CPU 내부 레지스터 중 하나.
* 다음에 실행될 명령어의 주소를 가지고 있어, 실행할 기계어 코드의 위치를 지정한다.
* 인텔 x86 계열 CPU에서는 IP<sub>Instruction Pointer</sub>라고 함.
<br>

<pre><b>(메모리 크기)</b> = 2 <sup>bit의 수</sup> X 1B</pre>
* 4GB 계산 과정: 메모리크기=2<sup>32</sup>X1B=2<sup>2</sup>X2<sup>30</sup>X1B=4GB
* 16EB 계산 과정: 메모리크기=2<sup>64</sup>X1B=2<sup>4</sup>X2<sup>60</sup>X1B=16EB
   * *실제로는 하위 48bit만 사용하여 256TB의 어드레싱 모드 범위를 가짐*

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

## 주소값
* 데이터 주소값: 해당 데이터가 저장된 메모리의 시작 주소
   * 1바이트 크기 메모리 공간에 저장됨
  
<p align="center">
   <img src="https://github.com/redzzzi/C23summer/assets/127263392/12dfd749-e4d8-4a0c-b153-cfe8318ddec6" width="200px">
</p>

* 타입의 바이트 수에 따라 뜻하는 출력값이 달라질 수 있음.

## 포인터의 포인터
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

[^id]: 접근하려면? 하드 디스크의 데이터를 메모리로 이동시킨 후, 메모리에서 접근해야 함. 다만, 아주 접근만 허용.
