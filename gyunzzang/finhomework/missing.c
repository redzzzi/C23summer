// 2023-10-31
// 7.2 Programming Assignment 7: missing.c
//

#include<stdio.h>

int max(int arr[], int size) {
  int cmp = 0;
  for (int i=0; i<size; i++) {
    if (arr[i]>cmp) {
      cmp = arr[i];
    }
  }
  return cmp;
}

int sum(int n) {
  return n*(n+1)/2;
}

int arrsum(int arr[], int size) {
  int s = 0;
  for (int j=0; j<size; j++) {
    s += arr[j];
  }
  return s;
}

int main() {
  int numbers[100];
  int n = 0;
  int k = 0;
  while (scanf("%d", &n) == 1) {
    if (getchar() == '\n') {
      numbers[k] = n; // 배열 최신으로 갱신하기 위해 해당 코드 필요!
      k++;
      break;
    }
    numbers[k] = n;
    k++;
  }
  // 입력값 개수 체크 코드
  // printf("size is %d\n", k);
  int result;
  if (arrsum(numbers, k) < sum(max(numbers, k))) {
    result = sum(max(numbers, k)) - arrsum(numbers, k);
    // printf("this is IF -> ");
  } else {
    result = max(numbers, k) + 1;
    // printf("max is %d\n", max(numbers, k));
    // printf("this is ELSE -> ");
  }
  printf("%d\n", result);
  return 0;
}
