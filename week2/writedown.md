2023.07.10.

# scanf("%d", &a);
```&n```에서 ```&```을 사용하는 이유: ```&```을 붙이면 변수에 주소를 지정해주는 거임
* 변수가 사용되는 경우
    * 변수가 값으로 바뀌는 경우
    * 변수가 위치한 주소를 지정함(?)
* 함수 호출이될 때 값이 먼저 참조가 됨

## format specifier
|서식 지정자|출력 대상|출력형태|
|:---:|:---:|:---:|
|%d|char, short, int|부호 있는 10진 정수|
|%ld|long|부호 있는 10진 정수|
|%lld|long long|부호 있는 10진 정수|
|%u|unsigned int|부호 없는 10진 정수|
|%o|unsigned int|부호 없는 8진 정수|
|%x, %X|float, double|부호 없는 16진 정수|
|%f|float|10진수 방식의 부동소수점 실수|
|%lf|long double, double|10진수 방식의 부동소수점 실수|
|%c|char, short, int|값에 대응하는 문자 한 개|
|%s|char*(문자열)|문자열|
|%p|void(주소값)|포인터 주소값|

```%x```와 ```%X```의 이해를 돕기 위한 그림<br>

<img src="https://github.com/redzzzi/C23summer/assets/127263392/c7e639ab-0c05-4497-b0a5-e836fb7f3440" width="200px"><Br>
알파벳 대소문자는 표현만 다를뿐 같은 값을 의미함!!

## C lang type

정수형 변수
|자료형|메모리 크기|값의 범위|-|
|:---:|:---:|:---:|:---:|
|char|1byte = 8bit|-2<sup>7</sup> ~ 2<sup>7</sup>-1|-128 ~ 127|
|unsigned char|``|0 ~ 2<sup>8</sup>-1|0 ~ 255|
|int|4byte|-2<sup>31</sup> ~ 2<sup>31</sup>-1|-2,147,483,648 ~ 2,147,483,647|
|unsigned int|``|0 ~ 2<sup>32</sup>-1|0 ~ 4,294,967,296|
|short|2byte|-2<sup>15</sup> ~ 2<sup>15</sup>-1|-32,768 ~ 32,768|
|long long int|8byte|-2<sup>63</sup> ~ 2<sup>63</sup>-1|-9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807|

<details>
   <summary>이해를 돕는 토글...</summary>
   <div markdown="1">

   int의 경우
   * 양수: 0 ~ 2<sup>31</sup>-1
   * 음수: -2<sup>31</sup> ~ -1 (0의 역할을 -2<sup>31</sup>이 함)
      
</details>
<br>

실수형 변수
|자료형|메모리 크기|값의 범위(대략)|-|
|:---:|:---:|:---:|:--:|
|float|4byte|±3.4x10<sup>-38</sup> ~ ±3.4x10<sup>38</sup>|소수점 이하 7자리까지|
|double|8byte|±1.7x10<sup>-308</sup> ~ ±1.7x10<sup>308</sup>|소수점 이하 15자리까지|
|long double|8 or 16|double보다 큼|-|

## IEEE 754 Floating-point standard
[블로그설명](https://jake-seo-dev.tistory.com/428)
* float가 아래와 같은 형식으로 저장됨

|🖥️|32bit|🖥️|
|:---:|:---:|:---:|
| 부호i/u(1비트) |      exponential(8비트)     |  숫자(23비트) |

|🖥️|64bit|🖥️|
|:---:|:---:|:---:|
| 부호i/u(1비트) |      exponential(10비트)     |  숫자(53비트) |

<img src="https://github.com/redzzzi/C23summer/assets/127263392/ad66efb7-772f-4172-b8db-d9922f2c4b3b" width="600px">

