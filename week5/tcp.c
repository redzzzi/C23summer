// TCPschool 포인터 예제
//
#include <stdio.h>

int main(void) {
    int num01 = 1234;
    double num02 = 3.14;

    int *ptr_num01 = &num01;
    double *ptr_num02 = &num02;

    printf("포인터의 크기는 %lu입니다.\n", sizeof(ptr_num01));  // 포인터 변수의 크기 출력 시 %lu를 사용합니다.
    printf("포인터 ptr_num01이 가리키고 있는 주소값은 %p입니다.\n", (void *)ptr_num01);  // 포인터 주소 출력 시 %p를 사용합니다.
    printf("포인터 ptr_num02가 가리키고 있는 주소값은 %p입니다.\n", (void *)ptr_num02);
    printf("포인터 ptr_num01이 가리키고 있는 주소에 저장된 값은 %d입니다.\n", *ptr_num01);
    printf("포인터 ptr_num02가 가리키고 있는 주소에 저장된 값은 %f입니다.\n", *ptr_num02);
    return 0;
}

