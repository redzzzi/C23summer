// 난이도 하
#include <stdio.h>

int main( void )
{
	int x = 10;
	int y = 20;
	int *p1 = &x;
	int *p2 = &y;
	printf( "%d %d", *p1, *p2 );
	return 0;
}
