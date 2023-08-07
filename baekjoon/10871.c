#include<stdio.h>

int smaller(int sbj, int x); 

int main() {
  int N, X;
  scanf("%d %d", &N, &X);
  for (int i=1; i<=N; i++) {
    int k;
    scanf("%d", &k);
    int result = smaller(k, X);
    if (result != 0) {
      printf("%d\n", result);
    } else {
      continue;
    }
  }
  return 0;
}

int smaller(int sbj, int x) {
  if (sbj < x) {
    return sbj;
  } return 0;
}
