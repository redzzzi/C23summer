// 난이도 상
#include<stdio.h>

void modify( int **ptr )
{
    int local = 25;
    *ptr = &local;
}
int main( void )
{
    int a = 10;
    int *p = &a;
    modify( &p );

    printf( "%d", *p );

    return 0;
}
