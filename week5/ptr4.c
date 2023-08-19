// 난이도 중
#include<stdio.h>

void updateValue( int *p )
{
	*p = 30;
}

int main( void )
{
	int x = 10;
	updateValue( &x );
	printf( "%d", x );
	return 0;
}
