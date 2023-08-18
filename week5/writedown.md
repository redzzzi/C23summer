## scanf와 fgets의 차이
* 위 두 개 동시에 쓰려면(?) → 중간에 엔터 값을 비워주는 ```get char();```을 사용!
* fgets: 설정된 바이트만큼 또는 ```\n```가 나올 때까지 입력을 받음
    * 엔터 기준이므로 그 뒤의 문자를 입력받지 않음
    * buffer에 엔터를 비워줘야 함

## f(flush)();
buffer을 비워주는 함수임

## 운영체제에서의 32bit와 64bit
|크기|32bit|64bit|
|:---:|:---:|:---:|
|프로세서 범용 레지스터|32bit(=4byte)|64bit(=8byte)|
|프로그램 카운터|4byte|8byte|
|메모리 어드레싱<sup>최대</sup>|32bit|64bit|
|-|4GB 메모리|256TB|

<br>

# 포인터 <sup><i>⭐매우 헷갈리는 아이임⭐</i></sup>
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
<br>

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
