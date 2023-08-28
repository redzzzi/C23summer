// 28278 - 스택 2
//
// 1 X: 정수 X를 스택에 넣는다. (1 ≤ X ≤ 100,000)
// 2: 스택에 정수가 있다면 맨 위의 정수를 빼고 출력한다. 없다면 -1을 대신 출력한다.
// 3: 스택에 들어있는 정수의 개수를 출력한다.
// 4: 스택이 비어있으면 1, 아니면 0을 출력한다.
// 5: 스택에 정수가 있다면 맨 위의 정수를 출력한다. 없다면 -1을 대신 출력한다.
#include<stdio.h>

#define MAX_STACK_SIZE 100

struct stack {
  int i;
  int top_index;
  int cur_size;
  int new_data;
  int space[MAX_STACK_SIZE];
};

struct stack st;

int main(void) {
  st.top_index=-1;
  st.cur_size=0;
  st.space[MAX_STACK_SIZE];
  int N, com;
  scanf("%d", &N);
  for (int i=1; i<=N; i++) {
    scanf("%d", &com);
    while(1) {
      switch(com) {
        case 1:
          scanf("%d", &st.new_data);
          st.cur_size += 1;
          st.top_index += 1;
          st.space[st.top_index] = st.new_data;
        }
        case 2: {
          if (st.cur_size>=1) {
            st.cur_size -= 1;
            st.top_index -= 1;
        }
      }
        case 3: {

        }
        case 4: {

        }
        case 5: {

        }
      }
    }
  }
  return 0;
}
