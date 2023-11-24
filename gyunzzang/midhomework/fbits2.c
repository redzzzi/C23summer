#include <stdio.h>

int main() {
    int n = 0;
    double f = 0.0;

    // 입력 받기
    fscanf(stdin, "%d%lf", &n, &f);

    // 소수 부분을 이진 표현으로 변환
    int bit;
    for (int i = 0; i < n; i++) {
        f *= 2;
        bit = (int)f;
        f -= bit;
    }

    char result[100];
    snprintf(result, sizeof(result), "%d", bit);

    printf("%s\n", result);

    return 0;
}
