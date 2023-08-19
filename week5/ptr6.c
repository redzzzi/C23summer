// 난이도 중
#include<stdio.h>

void swap( int *a, int *b )
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main( void )
{
    int x = 10;
    int y = 20;
    swap( &x, &y );
    printf( "%d %d", x, y );
    return 0;
}
