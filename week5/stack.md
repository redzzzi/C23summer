# 📌[스택](https://ko.wikipedia.org/wiki/%EC%8A%A4%ED%83%9D)<sub><i>stack</i></sub>
<p align="center">
 <img src="https://github.com/redzzzi/C23summer/assets/127263392/48494759-a43c-4e1f-981a-227e765e9d9a" width="400px">
</p>

* 제한적으로 접근할 수 있는 나열 구조
  * 접근은 목록의 맨끝에서 가능 <i>pushdown list</i>
  * ```선형 구조LIFO```<sup>Last In First Out</sup>: 한 쪽 끝에서만 자료를 넣거나 뺄 수 있음
<p align="right">ꉂ☺ᵎᵎᵎ</p>

* 스택 연산
  1. ```stack.top()```: 스택의 가장 위 데이터 **반환** (스택 비었다면? 연산 **정의불가**)
  2. ```stack.pop()```: 스택의 가장 위 데이터 **삭제** (스택 비었다면? 연산 정의 불가)
  3. ```stack.push()```: 스택의 가장 위 데이터인 top이 가리키는 자리 위<sup>top=top+1</sup>에 메모리 생성 후 데이터를 넣음
  4. ```stack.empty()```: 스택이 비었으면 ```1``` 반환, 그렇지 않으면 ```0``` 반환
