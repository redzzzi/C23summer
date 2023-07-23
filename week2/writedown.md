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

## C lang type
정수

|signed|unsigned|바이트|비트표현범위|
|:---:|:---:|:---:|:---:|
|char|``|1|2<sup>7</sup>-1~-2<sup>7</sup>|
|short|``|2|-|
|int|``|4|-|
|long|``|8|-|
|long long|``|8|-|
<br>

실수

|이름|바이트|
|:---:|:---:|
|float|4|
|double|8|
|long double|-|

# float
* 32bit
* | 부호i/u(1) |      exponential(23)     |  숫자(8) |
