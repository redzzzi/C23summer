// 난이도 중
#include<stdio.h>

int main( void )
{
    int x = 10;
    int *p1 = &x;
    int **p2 = &p1;
    printf( "%d", **p2 );
    return 0;
}
