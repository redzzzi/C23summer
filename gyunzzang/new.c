#include <stdio.h>

int main() {
    // 두 자리의 10진수 입력 받기
    int n = 0;
    int digit;
    for (int i = 0; i < 2; i++) {
        digit = getchar();
        n = n * 10 + (digit - '0');
    }

    // 입력된 10진수를 이진수로 변환하고 odd bit places 출력하기
    int mask = 0b1010101; // 이진수 1010101 (7th, 5th, 3rd, 1st 비트를 1로 설정)
    int result = (n & mask) ? 1 : 0;

    printf("%d\n", result);

    return 0;
}

