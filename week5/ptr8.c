// 난이도 상
#include<stdio.h>

void update( int **p )
{
    int y = 50;
    *p = &y;
}
int main( void )
{
    int x = 10;
    int *p = &x;
    update( &p );
    printf( "%d", x );
    return 0;
}
