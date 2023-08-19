// 난이도 상
#include<stdio.h>

void change( int **q )
{
    int y = 20;
    *q = &y;
}

int main( void )
{
    int x = 10;
    int *p = &x;
    change( &p );
    printf( "%d", *p );
    return 0;
}
