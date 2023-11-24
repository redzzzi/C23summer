// 2023-10-31
// 7.2 Programming Lab 7: no2.c
// 배열 길이와 배열을 입력값으로 받은 후, 두 번째 큰 수 출력하기
// 팁: 배열을 숫자가 크거나 작은 순으로 정렬하는 함수를 만든다!
//     -> 버블정렬

#include<stdio.h>

void bubble(int arr[], int length) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int second(int arr[], int length) {
    if (length < 2) {
        return -1;
    }

    bubble(arr, length);
    return arr[length - 2];
}

int main() {
  int n=0;
  int numbers[100] = {0};
  scanf("%d\n", &n);

  for (int i=0; i<n; i++) {
    scanf("%d", &numbers[i]);
  }

  int result = second(numbers, n);
  printf("%d\n", result);
  return 0;
}
