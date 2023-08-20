// stack 구현하기

#include <stdio.h>

#define MAX_STACK_SIZE 100

// push data to stack
// data to update : stack, size, top_index
void push( int new_data, int stack[], int *top_index, int *cur_size )
{
	// check that stack is full
	if ( *cur_size>=MAX_STACK_SIZE ) // push, pop은 기존 자료에 변동이 생기도록 하기 때문에 포인터를 써야함(?)
	{
		printf( "Stack is full\n" );
		return;
	} else {
    *cur_size += 1;
    *top_index += 1; // 위로 데이터 계속 쌓이니까 1 더해주고 해당 인덱스에 데이터 내용 넣기
    stack[*top_index] = new_data; // 포인터가 개별적인 상황을 적용시키기 유용한 듯!
  }

	// push data to stack
	// TODO
}


// pop data from stack
// data to update : stack, size, top_index
void pop( int stack[], int *top_index, int *cur_size )
{
	// check that stack is empty
	if ( *cur_size<1 )
	{
		printf( "Stack is empty\n" );
		return;
	} else {
    *cur_size -= 1;
    *top_index -= 1;
  }

	// pop data from stack
	// TODO
}

// return top data
// data to update : none
int top( int stack[], int top_index, int cur_size )
{
	if ( cur_size<1 )
	{
		printf( "Stack is empty\n" );
		return 0;
	} else {
    return stack[top_index];
  }

	// TODO
}

// print stack
// data to update : none
void print_stack( int stack[], int cur_size )
{
	printf( "----stack----\n" );
	// check that stack is empty
	if ( cur_size<1 )
	{
		printf( "Stack is empty\n" );
		printf( "-------------\n" );
		return;
	} else {
    for (int i=cur_size-1; i>=0; i--) {
      printf("%d\n", stack[i]);
    }
  }
	// print all stack data
	// ex )
	// ----stack----
	// 1 <- top
	// 3
	// 4
	// 5
	// -------------
	// TODO
	printf( "-------------\n" );
}

int main( void )
{
	int stack[MAX_STACK_SIZE];
	int top_index = -1;
	int cur_size = 0;

	while ( 1 )
	{
		int select;
		printf( "\n0. quit\n" );
		printf( "1. push\n" );
		printf( "2. pop\n" );
		printf( "3. print top\n" );
		printf( "4. print size\n" );
		printf( "5. print stack\n" );
		printf( " > " );
		scanf( "%d", &select );
		switch( select )
		{
			case 0: // quit
				return 0;
			case 1: // push
			{
				int new_data;
				printf( "input new data : " );
				scanf( "%d", &new_data );
				push( new_data, stack, &top_index, &cur_size );
				print_stack( stack, cur_size );
				break;
			}
			case 2: // pop
			{
				pop( stack, &top_index, &cur_size );
				print_stack( stack, cur_size );
				break;
			}
			case 3: // print top
			{
				printf( "Top : %d\n", top( stack, top_index, cur_size ) );
				break;
			}
			case 4: // print current stack size
			{
				printf( "Current size : %d\n", cur_size );
				break;
			}
			case 5: // print stack
			{
				print_stack( stack, cur_size );
				break;
			}
			default :
			{
				printf( "Wrong input!\n" );
				break;
			}
		}
	}

	return 0;
}
