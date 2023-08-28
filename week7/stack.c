// linked list를 사용한 스택 구현
//
// top을 가리키는 공간과 포인터 설정 (NULL)
// push로 데이터 넣어주기
// 다른 데이터를 push하려면 포인터가 가리키는 방향도 설정해줘야 함
// pop을 작동하기 위해 기존의 포인터 방향을 재설정해야 함
// 구조체도 사용해보기! - 공간 하나하나가 구조체 속 type이 됨
// linked list - single/double(앞 뒤로 가리키면 더블임)

#include<stdio.h>
#include<stdlib.h>

struct Node {
  int data;
  struct Node *next;
  struct Node *pre;
};

// struct Stack {
  // struct Node * top; // top을 가리키는 포인터 하나만 있으면 됨 - 스택에서 top의 데이터가 중요하기 때문
  // int size;
// };

int main(void) {
  struct Node *node_ptr = NULL; // 아직 가리키는 대상 없기 때문에 대상 0으로 세팅 (void*)0
  node_ptr = (struct Node *) malloc(sizeof(struct Node)) // struct Node 사이즈만큼의 공간 생성 후 공간의 주소를 반환, type casting
  // 공간이 필요할 때마다 malloc 함수 써주면 됨!
}
