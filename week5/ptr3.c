// 난이도 하
#include <stdio.h>

int main( void )
{
	int x = 10;
	int *p = &x;
	*p = 20;
	printf( "%d", x );
	return 0;
}
