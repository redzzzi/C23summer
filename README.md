# C lang studynote during summer vacation ~ ☀️

[CodeUp_C100](https://codeup.kr/problemsetsol.php?psid=23)<br>
[Cbasics](https://opentutorials.org/module/3921/23494)<br>
[백준문제집](https://www.acmicpc.net/workbook/view/2047)<br>
[정보통신기술용어해설](http://www.ktword.co.kr/index.php)
---

🏷️[메모리 writedown](https://github.com/redzzzi/C23summer/blob/main/week5/writedown.md)<br>
🏷️[메모리 구조](http://www.tcpschool.com/c/c_memory_structure)<br>
🏷️[문자열 입력 함수](https://iridescent-zeal.tistory.com/2)<br>
🏷️[자료형](https://github.com/redzzzi/C23summer/blob/main/week2/writedown.md)<br>
🏷️[형 변환](http://www.tcpschool.com/c/c_datatype_typeConversion)<br>
🏷️[연산자 우선순위](https://dojang.io/mod/page/view.php?id=188)<br>
🏷️[비트 연산](http://www.tcpschool.com/c/c_refer_bitCalculation)<br>

- `gcc <file>.c` 컴파일을 할 때 왜 `a.exe`가 아닌 `a.out`이 만들어질까?
    - [관련 스택오버플로우 글](https://stackoverflow.com/questions/47377488/why-i-get-an-a-exe-instead-of-a-out-on-window-c-programming)
    - 윈도우에는 `a.exe`가 생기지만 다른 플랫폼에서는 지원을 안 하는 듯
        - 만약에 윈도우에서 `.out`을 만들어내고 싶다?
            - `gcc "<source>" -o "<dest>.out`
    - 리눅스에서는 `.out`을 만들어냄
```
a.out file can be further linked to the definitions (or more technically libraries) represent int eh OS to form the executable image
```
